# rpi-kernel
This repository contains the compiled, modified and built Raspberry Pi Linux kernels for use in this project. Both kernels have multi-core scheduler support enabled, however, one features a fully real-time (preemptable) kernel using the RT patch.

The latest version of Raspberry Pi OS Lite at the time of writing (2024-03-15) uses the 6.6.20 Linux kernel (commit id: 6f16847710cc0502450788b9f12f0a14d3429668). I will be using this kernel along with the RT patch version 6.6.20-rt25 for the RT kernel.

## How it was built:
On an Ubuntu VM, install the build dependencies.

```
sudo apt install git bc bison flex libssl-dev make libc6-dev libncurses5-dev crossbuild-essential-arm64
```

Download Raspberry Pi Linux sources for 6.6.20, unzip the download, and finally, rename for readability.

```
wget https://github.com/raspberrypi/linux/archive/6f16847710cc0502450788b9f12f0a14d3429668.zip
unzip 6f16847710cc0502450788b9f12f0a14d3429668.zip
mv linux-6f16847710cc0502450788b9f12f0a14d3429668/ linux/
```

Apply the default configuration for the Pi 5 (64-bit).

```
cd linux
KERNEL=kernel_2712
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- bcm2712_defconfig
```

From inside the `linux` directory, download and apply the RT kernel patch (version 6.6.25 to match the exact kernel version, and only applying to the rt-kernel)

```
wget https://mirrors.edge.kernel.org/pub/linux/kernel/projects/rt/6.6/older/patch-6.6.20-rt25.patch.gz
gunzip patch-6.6.20-rt25.patch.gz
cat patch-6.6.20-rt25.patch | patch -p1 
```

Build with configs for 64-bit. This step might produce a prompt asking for the preemption type if due to the patch, select the fully preemptable option and enable RCU priority boosting with a 500ms delay boosting (only for fully RT kernel).

```
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- Image modules dtbs
```

Kernel configurations using `menuconfig` on 64-bit.

```
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- menuconfig
```

In the `menuconfig` screen, select the `Kernel Features` option from the list to open this page, from there enable the `Multi-core scheduler support` option.

Next, build and install the kernel for 64-bit.

```
sudo env PATH=$PATH make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- INSTALL_MOD_PATH=. modules_install
```

Copy all the files from the build directory into the repository directory. Assuming that the build directory is called `pi5-kernel-std` and the repository directory is on the same level.

```
sudo cp -n pi5-kernel-std/linux/arch/arm64/boot/Image rpi-kernels/fat32/$KERNEL.img
sudo cp -n pi5-kernel-std/linux/arch/arm64/boot/dts/broadcom/*.dtb rpi-kernels/fat32/
sudo cp -n pi5-kernel-std/linux/arch/arm64/boot/dts/overlays/*.dtb* rpi-kernels/fat32/overlays/
sudo cp -n pi5-kernel-std/linux/arch/arm64/boot/dts/overlays/README rpi-kernels/fat32/overlays/
sudo cp -r -n pi5-kernel-std/linux/lib/* rpi-kernels/ext4/lib/
```

## How to install on to the Pi 5:
Before starting the following steps, make note of the Pi's kernel details.

```
sid@sidpi5:/boot/firmware $ uname -a
Linux sidpi5 6.6.20+rpt-rpi-2712 #1 SMP PREEMPT Debian 1:6.6.20-1+rpt1 (2024-03-07) aarch64 GNU/Linux
```

Copy the new kernel files recursively without clobbering so that directories are also copied without overwriting existing files.

```
sudo cp -r -n rpi-kernels/fat32/* /boot/firmware/
```

Backup the existing kernel.

```
sudo cp /boot/firmware/kernel_2712.img /boot/firmware/kernel_2712.img.bkup
```

Overwrite the existing kernel with the newly built one. Make sure it has been backed up first (complete previous step).

```
sudo cp rpi-kernels/fat32/kernel_2712.img /boot/firmware/
```

Copy in the kernel modules recursively and without clobbering existing files.

```
sudo cp -r -n rpi-kernels/ext4/lib/* /lib/
```

Update `config.txt` to select the kernel to boot into.

```
sid@sidpi5:~ $ sudo nano /boot/firmware/config.txt
# —> at the bottom, add the following:	kernel=kernel_2712.img
# —> or for the real-time kernel:	kernel=kernel_2712-rt.img
```

Reboot the Pi and verify that the kernel has been correctly booted.

```
# Non-RT:
sid@sidpi5:~ $ sudo uname -a
Linux sidpi5 6.6.20-v8-16k #1 SMP PREEMPT Sun Apr 21 18:59:14 BST 2024 aarch64 GNU/Linux


# RT:
sid@sidpi5:~ $ sudo uname -a
Linux sidpi5 6.6.20-rt25-v8-16k #1 SMP PREEMPT_RT Sun Apr 21 17:37:59 BST 2024 aarch64 GNU/Linux
```

# rpi-kernel
Raspberry Pi 5 Kernel (Linux 6.6.28)

# How it was built:
On an Ubuntu VM, install the build dependencies.

```
sudo apt install git bc bison flex libssl-dev make libc6-dev libncurses5-dev crossbuild-essential-arm64
```

Get the Linux sources of the current version (defaults to the `rpi-6.6.y` branch, which is version 6.6.28). For reference, the commit hash: `9c68ba121ba173dd5711b4537bfcdf82ec731725`.

```
git clone --depth=1 https://github.com/raspberrypi/linux
```

Apply the default configuration for the Pi 5 (64-bit).

```
cd linux
KERNEL=kernel_2712
make ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- bcm2712_defconfig
```

Build with configs for 64-bit.

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

# How to install on to the Pi 5:
TODO!

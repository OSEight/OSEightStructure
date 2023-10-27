xz -cd linux-6.x.tar.xz | tar xvf -
xz -cd ../patch-6.x.xz | patch -p1
cd ~/
make oseight
kernel source code: /usr/src/linux-6.x
build directory:    /home/name/build/kernel
cd /usr/src/linux-6.x
make O=/home/name/build/kernel menuconfig
make O=/home/name/build/kernel
sudo make O=/home/name/build/kernel modules_install install

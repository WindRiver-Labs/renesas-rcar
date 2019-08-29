DEFAULTTUNE ?= "cortexa57-cortexa53"
require conf/machine/include/tune-cortexa57-cortexa53.inc
require conf/machine/include/${SOC_FAMILY}.inc

MACHINE_FEATURES += "ext3 pci usbgadget usbhost vfat alsa network"

KERNEL_IMAGETYPE = ""
KERNEL_IMAGETYPES = "Image.gz Image"

SERIAL_CONSOLE = "115200 ttySC0"

MACHINEOVERRIDES .= ":ulcb"

# wic
WIC_CREATE_EXTRA_ARGS = "--no-fstab-update"
MACHINE_EXTRA_RRECOMMENDS = " kernel-modules kernel-devicetree"
IMAGE_FSTYPES += "tar.bz2 wic wic.bmap"
WKS_FILE ?= "renesas-rcar-sdimage.wks"
IMAGE_INSTALL_append = " kernel-devicetree kernel-image-image"
do_image_wic[depends] += "mtools-native:do_populate_sysroot dosfstools-native:do_populate_sysroot"

# multilib support
MULTILIBS ?= "multilib:lib32"
DEFAULTTUNE_virtclass-multilib-lib32 ?= "armv7athf-neon"

PREFERRED_PROVIDER_virtual/kernel ??= "linux-yocto"
PREFERRED_VERSION_linux-yocto ?= "5.0%"

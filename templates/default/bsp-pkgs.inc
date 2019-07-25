IMAGE_INSTALL += "i2c-tools"
IMAGE_INSTALL += "can-utils"
IMAGE_INSTALL += "pm-utils"
IMAGE_INSTALL += "mtdev"
IMAGE_INSTALL += "alsa-utils"
IMAGE_INSTALL += "linux-firmware"
IMAGE_INSTALL += "${@bb.utils.contains_any('BBEXTENDCURR', 'multilib', '', 'u-boot-renesas', d)}"
IMAGE_INSTALL += "ti-bt-firmware"
IMAGE_INSTALL += "ti-bt"
IMAGE_INSTALL_append = " ${@bb.utils.contains('DISTRO_FEATURES', 'x11 pulseaudio bluetooth', 'pulseaudio-module-bluez5-device \
							pulseaudio-module-bluez5-discover \
							pulseaudio-module-bluetooth-discover \
							pulseaudio-module-bluetooth-policy \
							pulseaudio-module-cli pulseaudio-module-remap-sink \
							pulseaudio-module-remap-source pulseaudio-module-loopback', '', d)} \
"

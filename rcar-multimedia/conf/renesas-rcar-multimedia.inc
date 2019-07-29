# Enable Gfx Pkgs
MACHINE_FEATURES_append = " gsx"

# for Wayland/Weston
DISTRO_FEATURES_NATIVESDK_append = " wayland"
DISTRO_FEATURES_append = " pam"
PREFERRED_PROVIDER_virtual/libgles2 = "gles-user-module"
PREFERRED_PROVIDER_virtual/egl = "libegl"
PREFERRED_PROVIDER_libgbm = "libgbm"
PREFERRED_PROVIDER_libgbm-dev = "libgbm"
BBMASK .= "|mesa-gl|ti-am335x/recipes-graphics/gbm/|oe-core/meta/recipes-multimedia/gstreamer|oe-core/meta/recipes-graphics/wayland|oe-core/meta/recipes-graphics/mesa/"

# Enable Multimedia features
MACHINE_FEATURES_append = " multimedia"

# for gstreamer omx plugins
LICENSE_FLAGS_WHITELIST = "commercial"
# for mmp test program
DISTRO_FEATURES_append = " mm-test"

PNWHITELIST_rcar-multimedia-layer += 'libgbm'
PNWHITELIST_rcar-multimedia-layer += 'gles-user-module'
PNWHITELIST_rcar-multimedia-layer += 'libegl'
PNWHITELIST_rcar-multimedia-layer += 'wayland-kms'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-vsp2driver'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-vspm'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-gles'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-mmngrbuf'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-mmngr'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-uvcs-drv'
PNWHITELIST_rcar-multimedia-layer += 'kernel-module-vspmif'
PNWHITELIST_rcar-multimedia-layer += 'omx-user-module'
PNWHITELIST_rcar-multimedia-layer += 'packagegroup-gstreamer1.0-plugins'
PNWHITELIST_rcar-multimedia-layer += 'packagegroup-graphic-renesas'
PNWHITELIST_rcar-multimedia-layer += 'packagegroup-multimedia-libs'
PNWHITELIST_rcar-multimedia-layer += 'packagegroup-multimedia-kernel'
PNWHITELIST_rcar-multimedia-layer += 'vspmif-tp-user-module'
PNWHITELIST_openembedded-layer += 'v4l-utils'
PNWHITELIST_rcar-multimedia-layer += 'mmngr-user-module'
PNWHITELIST_rcar-multimedia-layer += 'libalacdla-l'
PNWHITELIST_rcar-multimedia-layer += 'libflacdla-l'
PNWHITELIST_rcar-multimedia-layer += 'mmngrbuf-user-module'
PNWHITELIST_rcar-multimedia-layer += 'vspmif-user-module'

PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-plugin-vspfilter'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-plugins-bad'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-plugins-good'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-libav'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-omx'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-plugins-base'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-plugins-ugly'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-python'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-rtsp-server'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-vaapi'
PNWHITELIST_openembedded-layer += 'neon'
PNWHITELIST_rcar-multimedia-layer += 'gstreamer1.0-meta-base'

PNWHITELIST_rcar-multimedia-layer += 'weston'
PNWHITELIST_rcar-multimedia-layer += 'weston-init'
PNWHITELIST_rcar-multimedia-layer += 'wayland'
PNWHITELIST_rcar-multimedia-layer += 'wayland-protocols'
PNWHITELIST_rcar-multimedia-layer += 'libinput'
PNWHITELIST_rcar-multimedia-layer += 'mtdev'

PNWHITELIST_rcar-multimedia-layer += 'mesa'
PNWHITELIST_rcar-multimedia-layer += 'mesa-demos'
PNWHITELIST_rcar-multimedia-layer += 'mesa-gl'
PNWHITELIST_rcar-multimedia-layer += 'libglu'

PNWHITELIST_openembedded-layer += 'yasm'

PREFERRED_VERSION_gtk+3 = "3.22.17"
PNWHITELIST_rcar-multimedia-layer += 'gtk+3'

# OMX H264 decoder library for Linux (RTM0AC0000XV264D30SL41C)
DISTRO_FEATURES_append = " h264dec_lib"

# OMX AAC-LC decoder library for Linux (RTM0AC0000XAAACD30SL41C),
# AAC-LC 2ch decoder middleware library for Linux (RTM0AC0000ADAACMZ1SL41C)
DISTRO_FEATURES_append = " aaclcdec_lib"
DISTRO_FEATURES_append = " aaclcdec_mdw"
DISTRO_FEATURES_append = " use_eva_pkg"

# Command using to build kernel-module-gles
HOSTTOOLS += "sync"

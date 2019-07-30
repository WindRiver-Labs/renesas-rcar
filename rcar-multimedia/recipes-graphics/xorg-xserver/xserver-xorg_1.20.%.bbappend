# Glamor for Xorg requires gbm >= 10.2.0.
# Glamor is not necessary with current env, so disable it.
PACKAGECONFIG_remove = "glamor"

FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

EXTRA_OECONF += "WAYLAND_PROTOCOLS_SYSROOT_DIR=${RECIPE_SYSROOT}"

SRC_URI += "file://0001-configure.ac-Set-correct-wayland-protocols-path.patch"

COMPATIBLE_MACHINE_rcar-gen3 = "(renesas-rcar-h3|renesas-rcar-m3)"
TARGET_SUPPORTED_KTYPES_rcar-gen3 = "standard"

FILESEXTRAPATHS_prepend_rcar-gen3 := "${THISDIR}/files:"

SRC_URI_append_rcar-gen3 = " \
    file://0001-wl18xx-do-not-invert-IRQ-on-WLxxxx-side.patch \
"

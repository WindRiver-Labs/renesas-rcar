COMPATIBLE_MACHINE_rcar-gen3 = "(renesas-rcar-h3|renesas-rcar-m3)"
TARGET_SUPPORTED_KTYPES_rcar-gen3 = "standard"

FILESEXTRAPATHS_prepend_rcar-gen3 := "${THISDIR}/files:"

SRC_URI_append_rcar-gen3 = " \
    file://0001-wl18xx-do-not-invert-IRQ-on-WLxxxx-side.patch \
"

KERNEL_VERSION_SANITY_SKIP = "1"
SRCREV_machine_rcar-gen3 ?= "${AUTOREV}"
SRCREV_meta_rcar-gen3 ?= "${AUTOREV}"

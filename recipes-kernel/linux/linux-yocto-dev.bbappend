require linux-yocto-renesas-rcar.inc

KBRANCH_rcar-gen3 = "standard/base"

FILESEXTRAPATHS_prepend_rcar-gen3 := "${THISDIR}/${PN}/:"

SRC_URI_append_rcar-gen3 = " \
    file://0001-wl18xx-do-not-invert-IRQ-on-WLxxxx-side \
"

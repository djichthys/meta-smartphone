DESCRIPTION = "The Android Audio Subsystem wrapper that uses binder to connect \
with Android's AudioFlinger."
LICENSE = "LGPL-2.1 & Apache-2.0"
LIC_FILES_CHKSUM = " \
  file://COPYING.LGPL;md5=7fbc338309ac38fefcd64b04bb903e34 \
  file://lib/libcutils/NOTICE;md5=9645f39e9db895a4aa6e02cb57294595 \
  file://lib/liblog/NOTICE;md5=9645f39e9db895a4aa6e02cb57294595 \
  file://lib/libmedia/NOTICE;md5=9645f39e9db895a4aa6e02cb57294595 \
  file://lib/utils/NOTICE;md5=9645f39e9db895a4aa6e02cb57294595"

DEPENDS = "zlib alsa-lib"

PV = "1.8+bzr${SRCPV}"
PR = "r2"

SRC_URI = "bzr://bazaar.launchpad.net/~phablet-team/android-audiosystem/trunk;protocol=http \
  file://dont-use-specific-sysroot.patch;striplevel=0"
SRCREV = "43"
S = "${WORKDIR}/trunk"

# does not build on x86 and other archs
COMPATIBLE_MACHINE = "(-)"
COMPATIBLE_MACHINE_arm = "(.*)"

# temporary fix for issues described in
# http://lists.linuxtogo.org/pipermail/openembedded-core/2013-April/038746.html
INHIBIT_PACKAGE_DEBUG_SPLIT = "1"

do_compile() {
    sed -i -e s:^TOOLS_PREFIX=$:TOOLS_PREFIX=${TARGET_PREFIX}:g ${S}/target_lib
    sed -i '1s/^/TOOLS_PREFIX=${TARGET_PREFIX}\n/' ${S}/target_app

    # Workaround for needed directories by libcutils
    mkdir -p ${S}/lib/libcutils/.dep/arch-arm/
    mkdir -p ${S}/lib/libcutils/.obj/arch-arm/
    mkdir -p ${S}/app/.dep/test.d
    mkdir -p ${S}/app/.obj

    for d in lib/liblog lib/utils lib/libcutils lib/binder lib/audio_utils lib/libmedia lib/waudio lib/wctlplugin lib/wpcmplugin app ; do
      mkdir -p ${S}/$d/.obj
      mkdir -p ${S}/$d/.dep
      make ARCH=arm -C ${S}/$d all
    done
}

do_install() {
    oe_libinstall -C ${S}/lib/waudio -so libwaudio ${D}${libdir}
    oe_libinstall -C ${S}/lib/wctlplugin -so libasound_module_ctl_android ${D}${libdir}/alsa-lib
    oe_libinstall -C ${S}/lib/wpcmplugin -so libasound_module_pcm_android ${D}${libdir}/alsa-lib

    install -d ${D}${includedir}
    install -m 0644 ${S}/lib/include/waudio.h ${D}${includedir}

    install -d ${D}${bindir}
    install -m 0755 ${S}/app/audiotest ${D}${bindir}/
}

FILES_${PN} += "${libdir}/alsa-lib"
FILES_${PN}-dbg += "${libdir}/alsa-lib/.debug"

DESCRIPTION = "SHR Phone UI Daemon"
HOMEPAGE = "http://shr-project.org/"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=b234ee4d69f5fce4486a80fdaf4a4263"
SECTION = "x11/applications"
DEPENDS += " libfso-glib libshr-glib libphone-ui sqlite3 shr-specs"
SRCREV = "919360dd29a9916d31a987c4e984647c0815136d"
PV = "0.0.0+gitr${SRCPV}"
PR = "r7"

RREPLACES_${PN} = "shr-today"
RCONFLICTS_${PN} = "shr-today"

SRC_URI = "git://git.shr-project.org/repo/phoneuid.git;protocol=http;branch=master"
S = "${WORKDIR}/git"

inherit autotools

EXTRA_OECONF = "\
       SPECS_PATH=${STAGING_DATADIR}/shr-specs \
"


FILES_${PN} += "${datadir}"

CONFFILES_${PN} = "${sysconfdir}/phoneuid.conf"


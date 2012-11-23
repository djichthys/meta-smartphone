require ${BPN}.inc
require cornucopia-from-git.inc

DEFAULT_PREFERENCE_om-gta04 = "1"
SRCREV_om-gta04 = "${AUTOREV}"
FSO_CORNUCOPIA_BRANCH_om-gta04 = "master"

#SRCREV_om-gta04 = "7ad3a194f919dbb0f86b95b8140971291a0056d7"
FSO_CORNUCOPIA_BRANCH_om-gta04 = "slyon/gta04-hwrouting"
BB_LOCALCOUNT_OVERRIDE = "1"
LOCALCOUNT_om-gta04 = "51"

#SRCREV = "${FSO_CORNUCOPIA_SRCREV}"

PV = "0.12.99+gitr${SRCPV}"
PR = "${INC_PR}.0"

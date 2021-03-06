# FSO
# there is no support for palm pre* devices with this version of components!
FSO_CORNUCOPIA_SRCREV = "${AUTOREV}"
FSO_PYTHONHELPERS_SRCREV = "${AUTOREV}"

SRCREV_pn-cmtspeechtest = "${AUTOREV}"
SRCREV_pn-dbus-hlid = "${AUTOREV}"
SRCREV_pn-frameworkd = "${AUTOREV}"
SRCREV_pn-frameworkd-devel = "${AUTOREV}"
SRCREV_pn-fso-alsa = "${AUTOREV}"
SRCREV_pn-fso-gsm0710muxd = "${AUTOREV}"
SRCREV_pn-fso-gpsd = "${AUTOREV}"
SRCREV_pn-fso-monitord = "${AUTOREV}"
SRCREV_pn-fso-sounds = "${AUTOREV}"
SRCREV_pn-fso-specs = "${AUTOREV}"
SRCREV_pn-gsmd2 = "${AUTOREV}"
SRCREV_pn-illume-theme-freesmartphone = "${AUTOREV}"
SRCREV_pn-libascenario = "${AUTOREV}"
# SRCREV_pn-libeflvala = "${AUTOREV}"
SRCREV_pn-libframeworkd-glib = "${AUTOREV}"
SRCREV_pn-libfso-glib = "${AUTOREV}"
# SRCREV_pn-libgee-native = "${AUTOREV}"
# SRCREV_pn-libgee = "${AUTOREV}"
SRCREV_pn-libgsm0710 = "${AUTOREV}"
SRCREV_pn-libgisi = "${AUTOREV}"
SRCREV_pn-libmsmcomm = "${AUTOREV}"
SRCREV_pn-libpersistence = "${AUTOREV}"
SRCREV_pn-misc-vapi = "${AUTOREV}"
SRCREV_pn-msmcommd = "${AUTOREV}"
SRCREV_pn-msmcommd-specs = "${AUTOREV}"
SRCREV_pn-libmsmcomm = "${AUTOREV}"
SRCREV_pn-vala-dbus-binding-tool-native = "${AUTOREV}"
SRCREV_pn-vala-dbus-binding-tool = "${AUTOREV}"
SRCREV_pn-vala = "${AUTOREV}"
SRCREV_pn-zhone = "${AUTOREV}"
SRCREV_pn-zhone2 = "${AUTOREV}"
SRCREV_pn-libsamsung-ipc = "${AUTOREV}"

PREFERRED_VERSION_frameworkd = "0.10.99+git%"
PREFERRED_VERSION_frameworkd-config = "0.10.99+git%"
PREFERRED_VERSION_fsoaudiod = "0.12.99+git%"
PREFERRED_VERSION_fsodatad = "0.12.99+git%"
PREFERRED_VERSION_fsodeviced-modules = "0.12.99"
PREFERRED_VERSION_fsodeviced = "0.12.99+git%"
PREFERRED_VERSION_fsogsmd-modules = "0.12.99"
PREFERRED_VERSION_fsogsmd = "0.12.99+git%"
PREFERRED_VERSION_fsonetworkd = "0.12.99+git%"
PREFERRED_VERSION_fsosystemd = "0.12.99+git%"
PREFERRED_VERSION_fsotdld = "0.12.99+git%"
PREFERRED_VERSION_fsousaged = "0.12.99+git%"
PREFERRED_VERSION_libfsoframework = "0.12.99+git%"

PREFERRED_VERSION_libmsmcomm = "0.10.0+git%"
PREFERRED_VERSION_libmsmhll = "0.10.0+git%"
PREFERRED_VERSION_libmsmrpc = "0.1.0+git%"
PREFERRED_VERSION_msmcommd-specs = "0.10.0+git%"
PREFERRED_VERSION_msmcommd = "0.10.0+git%"

PREFERRED_VERSION_libgsm0710 = "1.2.2+git%"
PREFERRED_VERSION_fso-specs = "2012.07.27.1+git%"
# change of this needs at least 3 recipes to be rebuild/PR bumped
# meta-smartphone/meta-shr/recipes-shr/shr/libphone-ui-shr_git.bb
# meta-smartphone/meta-shr/recipes-shr/shr/libphone-ui_git.bb
# meta-smartphone/meta-shr/recipes-shr/shr/phonefsod_git.bb
# meta-smartphone/meta-aurora/recipes-aurora/aurora/aurora-systemmanager_git.bb
PREFERRED_VERSION_libfso-glib = "2012.07.27.1+git%"
PREFERRED_VERSION_libgisi = "0.1.99+git%"
PREFERRED_VERSION_libsamsung-ipc = "0.2.0+git%"

PREFERRED_VERSION_mdbus2 = "2.3.0+git%"
PREFERRED_VERSION_vala-dbus-binding-tool-native = "0.4.0+git%"
PREFERRED_VERSION_vala-dbus-binding-tool = "0.4.0+git%"

# this switch of P_V needs at least 3 recipes to be rebuild/PR bumped
# meta-smartphone/meta-shr/recipes-shr/shr/libphone-ui-shr_git.bb
# openembedded-core/meta/recipes-connectivity/libpcap/libpcap_1.2.1.bb
# openembedded-core/meta/recipes-connectivity/wpa-supplicant/wpa-supplicant_0.7.3.bb
PREFERRED_VERSION_libnl_forcevariable = "3%"

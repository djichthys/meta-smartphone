PRINC := "${@int(PRINC) + 7}"

pkg_postinst_${PN} () {
cd $D${sysconfdir}/init.d

echo -n "Disabling the following sysv scripts: "

for i in busybox-udhcpc dnsmasq hwclock.sh syslog syslog.busybox shr-splash crond keymap fbsetup populate-volatile mountall bootmisc mountnfs checkroot; do
	if [ \( -e $i -o $i.sh \) -a ! -e $D${base_libdir}/systemd/system/$i.service ] ; then
		echo -n "$i " ; ln -s /dev/null $D${base_libdir}/systemd/system/$i.service
	fi
done ; echo
}
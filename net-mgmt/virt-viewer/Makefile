# Created by: Jason Helfman <jgh@FreeBSD.org>

PORTNAME=	virt-viewer
PORTVERSION=	9.0
CATEGORIES=	net-mgmt
MASTER_SITES=	https://virt-manager.org/download/sources/${PORTNAME}/

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Provides a graphical viewer for a guest OS display

LICENSE=	GPLv2

BUILD_DEPENDS=	xml2-config:textproc/libxml2 \
		intltoolize:textproc/intltool \
		spice-protocol>=0.12.7:devel/spice-protocol
LIB_DEPENDS=	libvirt.so:devel/libvirt \
		libvirt-glib-1.0.so:devel/libvirt-glib \
		libgtk-vnc-2.0.so:net/gtk-vnc \
		libspice-client-glib-2.0.so:deskutils/spice-gtk

OPTIONS_DEFINE=	NLS
OPTIONS_SUB=	yes

GNU_CONFIGURE=	yes
CONFIGURE_ENV+=	DATADIRNAME=share
CONFIGURE_ARGS=	--with-spice-gtk
USES=		autoreconf cpe desktop-file-utils gettext-tools gmake gnome \
		libtool pkgconfig shared-mime-info xorg
USE_GNOME=	gtk30
USE_XORG=	xorgproto
INSTALLS_ICONS=	yes
CPE_VENDOR=	redhat

NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

.include <bsd.port.mk>

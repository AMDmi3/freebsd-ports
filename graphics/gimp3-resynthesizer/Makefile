PORTNAME=	resynthesizer
PORTVERSION=	3.0.1
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics
PKGNAMEPREFIX=	gimp3-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Gimp plug-in for texture synthesis
WWW=		https://www.logarithmic.net/pfh/resynthesizer

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libgimp-3.0.so:graphics/gimp3-app

USES=		gnome meson pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	bootchk
USE_GNOME=	glib20
MESON_ARGS=	-Dinstall-translations=false  # does not respect STAGEDIR

PLUGIN_DIR?=	lib/gimp/3.0/plug-ins
PLIST_SUB=	PLUGIN_DIR=${PLUGIN_DIR}

.include <bsd.port.mk>

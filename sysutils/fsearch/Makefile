# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>

PORTNAME=	fsearch
DISTVERSION=	0.1beta4
DISTVERSIONPREFIX=	v
CATEGORIES=	sysutils

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Fast file search utility for Unix-like systems

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/License

BUILD_DEPENDS=	${LOCALBASE}/share/aclocal/ax_check_compile_flag.m4:devel/autoconf-archive
LIB_DEPENDS=	libpcre.so:devel/pcre

USE_GITHUB=	yes
GH_ACCOUNT=	cboxdoerfer

USES=		autoreconf compiler:c++11-lang gettext gmake gnome pkgconfig
GNU_CONFIGURE=	yes
USE_GNOME=	cairo gdkpixbuf2 gtk30 intltool

post-patch:
	@${REINPLACE_CMD} -e 's,v=UNKNOWN,v=${DISTVERSION},' \
		${WRKSRC}/build-aux/git-version-gen

.include <bsd.port.mk>

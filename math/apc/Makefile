PORTNAME=	apc
PORTVERSION=	1.0
PORTREVISION=	9
CATEGORIES=	math
MASTER_SITES=	LOCAL/arved

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Xforms based Auto Payment Calculator

LICENSE=	GPLv2

LIB_DEPENDS=	libforms.so:x11-toolkits/xforms

USES=		xorg
USE_XORG=	x11 xpm
PLIST_FILES=	bin/apc share/man/man1/apc.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/apc ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/apc.1 ${STAGEDIR}/${PREFIX}/share/man/man1

.include <bsd.port.mk>

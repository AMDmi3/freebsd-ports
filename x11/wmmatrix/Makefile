# Created by: Brian Handy <handy@physics.montana.edu>

PORTNAME=	wmmatrix
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	x11 windowmaker
MASTER_SITES=	http://www.cs.mun.ca/~gstarkes/wmaker/dockapps/files/ \
		http://ia300205.us.archive.org/0/items/tucows_10414_WMMatrix/
DISTNAME=	wmMatrix-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DockApp that runs a version of the xmatrix screenhack

# Fix build with -fno-common (llvm 11)
CFLAGS+=	-fcommon

DEPRECATED=	Unmaintained and dead upstream, does not build with -fno-common (llvm 11)
EXPIRATION_DATE=2021-04-01

MAKE_JOBS_UNSAFE= yes

PLIST_FILES=	bin/wmmatrix
USES=		gmake xorg
USE_XORG=	xpm
ALL_TARGET=	clean all

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/wmMatrix ${STAGEDIR}${PREFIX}/bin/wmmatrix

.include <bsd.port.mk>

# Created by: Pedro F. Giffuni

PORTNAME=	varkon
PORTVERSION=	1.19E
PORTREVISION=	4
CATEGORIES=	cad
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/Varkon_${PORTVERSION}
DISTNAME=	Varkon_sources_${PORTVERSION}
DIST_SUBDIR=	varkon

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free CAD system and applications development tool

LICENSE=	GPLv2 LGPL20
LICENSE_COMB=	dual

LIB_DEPENDS=	libtiff.so:graphics/tiff
RUN_DEPENDS=	xdg-open:devel/xdg-utils

WRKSRC=		${WRKDIR}/Varkon_${PORTVERSION}
BUILD_WRKSRC=	${WRKSRC}/sources

USES=		dos2unix gl gmake xorg
USE_XORG=	xpm
USE_GL=		glu
MAKE_ENV=	PLATFORM=FreeBSD
ALL_TARGET=	# none
MAKE_JOBS_UNSAFE=	yes
DOS2UNIX_FILES=	sources/PL/src/Makefile.FreeBSD

CFLAGS+=		-fcommon

DEPRECATED=	Unmaintained and dead upstream, does not build with -fno-common (llvm 11)
EXPIRATION_DATE=2021-04-01

VARKON_PREFIX=	${PREFIX}/lib/${PORTNAME}

OPTIONS_DEFINE=	DOCS

post-extract:
	@${FIND} ${WRKSRC} -name "*.o" -delete

do-configure:
	@${REINPLACE_CMD} -e \
		's|%%VARKON_PREFIX%%|${VARKON_PREFIX}|g ; \
		 s|%%DOCSDIR%%|${DOCSDIR}|g' ${WRKSRC}/com/english/varkon
	@${REINPLACE_CMD} -e \
		's|^PLATFORM|#PLATFORM|' ${BUILD_WRKSRC}/Makefile
	@${FIND} ${BUILD_WRKSRC} -name "Makefile.FreeBSD" -print0 | \
		${XARGS} -0 ${REINPLACE_CMD} -e \
		's|/usr/local|${LOCALBASE}|g ; \
		 s|/usr/X11R6|${LOCALBASE}|g ; \
		 s|-O[[:space:]]|| ; \
		 s|cc $$(LIBS)|$$(CC) $$(LIBS)|'

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/com/english/varkon ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${VARKON_PREFIX}
.for i in erm lib mdf
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} ${i} ${STAGEDIR}${VARKON_PREFIX})
.endfor
	@${MKDIR} ${STAGEDIR}${VARKON_PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/bin/* ${STAGEDIR}${VARKON_PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${VARKON_PREFIX}/cnf
.for i in fnt icons plt tol
	@(cd ${WRKSRC}/cnf && ${COPYTREE_SHARE} ${i} ${STAGEDIR}${VARKON_PREFIX}/cnf)
.endfor
	@${MKDIR} ${STAGEDIR}${VARKON_PREFIX}/cnf/ini
	${INSTALL_DATA} ${WRKSRC}/cnf/ini/english/linux \
		${STAGEDIR}${VARKON_PREFIX}/cnf/ini/freebsd

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}	#Varkon Manual
	@(cd ${WRKSRC}/man && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>

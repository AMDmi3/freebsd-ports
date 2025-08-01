PORTNAME=	7kaa
DISTVERSION=	2.15.7
CATEGORIES=	games
MASTER_SITES=	SF/skfans/7KAA%20${DISTVERSION}/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Seven Kingdoms: Ancient Adversaries
WWW=		https://7kfans.com/ \
		https://sourceforge.net/projects/skfans/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libenet.so:net/enet \
		libcurl.so:ftp/curl

USES=		autoreconf compiler:c++11-lang gettext-tools gmake localbase \
		openal:al pkgconfig sdl iconv
USE_SDL=	sdl2
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-multiplayer

CXXFLAGS+=	-fPIC

PORTDOCS=	*
PORTDATA=	*

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes
NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

DESKTOP_ENTRIES="7KAA" \
		"" \
		"${PREFIX}/share/pixmaps/${PORTNAME}.ico" \
		"${PORTNAME}" \
		"Game;StrategyGame;" \
		""

post-install:
	@${RM} ${STAGEDIR}${DOCSDIR}/COPYING
	${INSTALL_DATA} ${WRKSRC}/src/7k.ico ${STAGEDIR}${PREFIX}/share/pixmaps/${PORTNAME}.ico

.include <bsd.port.mk>

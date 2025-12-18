PORTNAME=	irrlamb
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.7
CATEGORIES=	games
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	3D physics-based puzzle game
WWW=		https://gitlab.com/irrlamb/code

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfreetype.so:print/freetype2 \
		libvorbis.so:audio/libvorbis \
		libogg.so:audio/libogg \
		libpng.so:graphics/png \
		libtinyxml2.so:textproc/tinyxml2
BUILD_DEPENDS=	${LOCALBASE}/include/glm/vec3.hpp:math/glm

USES=		cmake compiler:c++11-lib gl jpeg openal sqlite xorg lua:53
USE_GITLAB=	yes
GL_ACCOUNT=	irrlamb
GL_PROJECT=	code
GL_TAGNAME=	dev
GL_TUPLE=	jazztickets:cmake:43b00a9a30448bcd08e03c6b104c5ac64b7a457f:cmake/cmake
USE_XORG=	x11 xrandr xext xxf86vm
USE_GL=		gl
CONFIGURE_ENV=	LOCALBASE="${LOCALBASE}"

LDFLAGS_i386=	-Wl,-znotext

PORTDOCS=	*
PORTDATA=	*

OPTIONS_DEFINE=	DOCS

post-extract:
.for bundled in glm lua tinyxml2
	@${RM} -r ${WRKSRC}/src/${bundled}
.endfor

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/cmake/*.cmake
	@${REINPLACE_CMD} -e 's|tinyxml2/tinyxml2.h|tinyxml2.h|g' ${WRKSRC}/src/*.cpp
	@${REINPLACE_CMD} -e 's|share/games|share|g' ${WRKSRC}/deployment/${PORTNAME}

.include <bsd.port.mk>

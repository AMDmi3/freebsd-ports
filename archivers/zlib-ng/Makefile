PORTNAME=	zlib-ng
DISTVERSION=	2.2.4
CATEGORIES=	archivers

MAINTAINER=	vvd@FreeBSD.org
COMMENT=	Fork of the zlib data compression library
WWW=		https://github.com/zlib-ng/zlib-ng/

LICENSE=	ZLIB
LICENSE_FILE=	${WRKSRC}/LICENSE.md

TEST_DEPENDS=	googletest>=0:devel/googletest

USES=		cmake:testing compiler:c11
USE_GITHUB=	yes
USE_LDCONFIG=	yes

CMAKE_OFF=		ZLIB_ENABLE_TESTS ZLIBNG_ENABLE_TESTS
CMAKE_TESTING_ON=	ZLIB_ENABLE_TESTS ZLIBNG_ENABLE_TESTS

# error: use of undeclared identifier 'isascii'
CFLAGS+=	-D__XSI_VISIBLE

PLIST_SUB=	SHLIB_VER=${DISTVERSION}

OPTIONS_DEFINE=		SIMD
OPTIONS_DEFAULT=	SIMD

SIMD_CMAKE_BOOL=	WITH_OPTIM

.include <bsd.port.mk>

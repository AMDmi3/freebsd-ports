# Created by: John Chen <johnpupu@gmail.com>

PORTNAME=	yar
DISTVERSION=	2.1.2
CATEGORIES=	www

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Yar (Yet another RPC framework) is a light, concurrent RPC framework

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libcurl.so:ftp/curl

USES=		localbase:ldflags php:pecl
USE_PHP=	curl json:build
IGNORE_WITH_PHP=	80

OPTIONS_DEFINE=		MSGPACK
MSGPACK_DESC=		Enable MSGPACK module
MSGPACK_BUILD_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/msgpack.so:devel/pecl-msgpack@${PHP_FLAVOR}
MSGPACK_RUN_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/msgpack.so:devel/pecl-msgpack@${PHP_FLAVOR}

.include <bsd.port.mk>

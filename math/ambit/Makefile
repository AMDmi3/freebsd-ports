PORTNAME=	ambit
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.1
PORTREVISION=	3
CATEGORIES=	math
PKGNAMESUFFIX=	-tensor # avoid clash with shells/ambit

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	C++ library for tensor product calculations
WWW=		https://github.com/jturney/ambit

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libhdf5.so:science/hdf5 \
		libopenblas.so:math/openblas \
		libsz.so:science/libaec

USES=		cmake:testing compiler:c++17-lang python:build
USE_LDCONFIG=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	jturney

# some declared cmake options do nothing: see https://github.com/jturney/ambit/issues/25 and the patch
CMAKE_ON=		SHARED_ONLY ENABLE_OPENMP
CMAKE_OFF=		ambit_ENABLE_PYTHON \
			ENABLE_TESTS # https://github.com/jturney/ambit/issues/24
CMAKE_TESTING_ON=	ENABLE_TESTS

.include <bsd.port.mk>

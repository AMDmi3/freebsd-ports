PORTNAME=	scs
DISTVERSION=	2.1.2
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Splitting conic solver for Python

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.13.2:science/py-scipy@${PY_FLAVOR}

USES=		python:3.6+ blaslapack:openblas fortran # fortran is for openblas
USE_PYTHON=	distutils autoplist

CONFIGURE_ENV=	BLAS_LAPACK_LIBS="openblas"
MAKE_ENV=	${CONFIGURE_ENV}

.include <bsd.port.mk>

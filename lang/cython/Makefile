# Created by: Wen Heping <wenhping@gmail.com>

PORTNAME=	cython
PORTVERSION=	0.29.22.pre20210410
CATEGORIES=	lang python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	vmagerya@gmail.com
COMMENT=	Compiler for Writing C Extensions for the Python Language

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

USE_GITHUB=	yes
GH_TAGNAME=	efdf996

USES=		compiler:c11 python:2.7+
USE_PYTHON=	allflavors autoplist concurrent distutils

post-install:
	${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/Cython \
		-name '*.so' -exec ${STRIP_CMD} {} +

.include <bsd.port.mk>

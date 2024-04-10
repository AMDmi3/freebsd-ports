PORTNAME=	lxml
PORTVERSION=	5.2.1
CATEGORIES=	devel python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Pythonic binding for the libxml2 and libxslt libraries
WWW=		https://lxml.de/ \
		https://github.com/lxml/lxml

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cython3>=0:lang/cython3@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cssselect>=0:www/py-cssselect@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml-html-clean>=0:devel/py-lxml-html-clean@${PY_FLAVOR}

USES=		cpe gnome python uniquefiles:dirs
USE_GNOME=	libxml2 libxslt
# XXX: this needs USE_PYTHON=cython3, but that's not supported by the framework yet
# when it is, convert BUILD_DEPENDS onto it
USE_PYTHON=	autoplist concurrent distutils

LDFLAGS+=	-Wl,-rpath=${LOCALBASE}/lib

DOCS_FILES=	CHANGES.txt CREDITS.txt TODO.txt README.rst
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

# needed for test to work
PYDISTUTILS_BUILD_TARGET=	build_ext
PYDISTUTILS_BUILDARGS=		--inplace

# force regeneration of cython files
post-extract:
	@${FIND} ${WRKSRC} -name "*.c" -delete

post-install:
	@${FIND} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR} \
		-name '*.so' -exec ${STRIP_CMD} {} +

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${DOCS_FILES:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} doc ${STAGEDIR}${DOCSDIR}

do-test:
	cd ${WRKSRC} && ${PYTHON_CMD} test.py -vv

.include <bsd.port.mk>

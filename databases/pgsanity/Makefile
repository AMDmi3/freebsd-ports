PORTNAME=	pgsanity
DISTVERSIONPREFIX=	v
DISTVERSION=	0.2.9
PORTREVISION=	4
CATEGORIES=	databases python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	Check syntax of PostgreSQL SQL files
WWW=		https://github.com/markdrago/pgsanity

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pgsql python
USE_PYTHON=	autoplist concurrent distutils

USE_GITHUB=	yes
GH_ACCOUNT=	markdrago

NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	README.md

do-test:
	@(cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} ${PYTHON_CMD} ${PYDISTUTILS_SETUP} test)

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

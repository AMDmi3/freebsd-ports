PORTNAME=	piddle
PORTVERSION=	1.0.15
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	graphics python
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical Drawing library for Python
WWW=		https://piddle.sourceforge.net/

LICENSE=	GPLv2+

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>

PORTNAME=	gptscript
DISTVERSIONPREFIX=	v
DISTVERSION=	0.7.0
PORTREVISION=	0
CATEGORIES=	lang

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Natural Programming Language
WWW=		https://gptscript.ai/

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		go:modules,1.22

USE_GITHUB=	yes
GH_ACCOUNT=	gptscript-ai
GO_MODULE=	github.com/gptscript-ai/gptscript
OPTIONS_DEFINE=	EXAMPLES

post-patch:
	${REINPLACE_CMD} -e 's/0.0.0-dev/${PORTVERSION}/1' \
		${WRKSRC}/pkg/version/version.go

post-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	(cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR})

.include <bsd.port.mk>

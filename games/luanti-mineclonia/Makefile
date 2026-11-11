PORTNAME=	mineclonia
PORTVERSION=	0.124.1
CATEGORIES=	games
MASTER_SITES=	https://content.luanti.org/uploads/
PKGNAMEPREFIX=	luanti-
DISTNAME=	b29a3227e2
DIST_SUBDIR=	mineclonia

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Survival sandbox game inspired by Minecraft
WWW=		https://content.luanti.org/packages/ryvnf/mineclonia/

LICENSE=	GPLv3+ CC-BY-SA-4.0
LICENSE_COMB=	multi
LICENSE_FILE_GPLv3+ =	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	luanti>=0:games/luanti

USES=		zip
NO_BUILD=	yes
NO_ARCH=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}
DATADIR=	${PREFIX}/share/luanti

PORTDATA=	*

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR}/games/${PORTNAME}

.include <bsd.port.mk>

# Created by: Ade Lovett <ade@FreeBSD.org>

PORTNAME=	ip4r
PORTVERSION=	2.4.1
CATEGORIES=	databases net

MAINTAINER=	ports@FreeBSD.org
COMMENT=	IP address and IP range index types for PostgreSQL

LICENSE=	PostgreSQL

USES=		gmake pgsql
USE_GITHUB=	yes
GH_ACCOUNT=	RhodiumToad

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/postgresql/server/extension/ip4r
	${INSTALL_DATA} ${WRKSRC}/src/ipr.h ${STAGEDIR}${PREFIX}/include/postgresql/server/extension/ip4r
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/postgresql/ip4r.so

.include <bsd.port.mk>

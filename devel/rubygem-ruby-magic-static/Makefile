# Created by: Matthias Fechner <mfechner@FreeBSD.org>

PORTNAME=	ruby-magic-static
PORTVERSION=	0.3.5
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	File Magic in ruby

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-mini_portile2>=2.5.0<2.6:devel/rubygem-mini_portile2

USES=		gem
USE_RUBY=	yes
CONFIGURE_ARGS+=	--use-system-libraries

.include <bsd.port.mk>

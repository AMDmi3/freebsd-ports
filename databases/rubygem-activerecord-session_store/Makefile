# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	activerecord-session_store
PORTVERSION=	1.1.3
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Action Dispatch session store backed by an Active Record class

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack4>=4.0:www/rubygem-actionpack4 \
		rubygem-activerecord4>=4.0:databases/rubygem-activerecord4 \
		rubygem-multi_json>=1.11.2<2:devel/rubygem-multi_json \
		rubygem-rack>=1.5.2,3<3,3:www/rubygem-rack \
		rubygem-railties4>=4.0:www/rubygem-railties4

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>

PORTNAME=	google-cloud-location
PORTVERSION=	0.8.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-gitlab

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Ruby Client for the Locations API
WWW=		https://cloud.google.com/ruby/docs/reference/google-cloud-location/latest/ \
		https://github.com/googleapis/google-cloud-ruby/tree/main/google-cloud-location \
		https://github.com/googleapis/google-cloud-ruby

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-gapic-common-gitlab>=0.21.1<2.0:devel/rubygem-gapic-common-gitlab \
		rubygem-google-cloud-errors>=1.0<2:net/rubygem-google-cloud-errors

USES=		gem

NO_ARCH=	yes

.include <bsd.port.mk>

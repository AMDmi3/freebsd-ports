PORTNAME=	Crypt-Sodium
PORTVERSION=	0.11
PORTREVISION=	2
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	freebsd@daemon.de
COMMENT=	Perl bindings for portable NaCL (libsodium)
WWW=		https://metacpan.org/release/Crypt-Sodium

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

LIB_DEPENDS=	libsodium.so:security/libsodium

USES=		perl5 localbase
USE_PERL5=	configure

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/${SITE_ARCH_REL}/auto/Crypt/Sodium/Sodium.so

.include <bsd.port.mk>

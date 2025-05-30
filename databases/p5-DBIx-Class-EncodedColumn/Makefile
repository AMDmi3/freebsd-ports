PORTNAME=	DBIx-Class-EncodedColumn
PORTVERSION=	0.11
PORTEPOCH=	1
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Automatically encode columns
WWW=		https://metacpan.org/release/DBIx-Class-EncodedColumn

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-DBIx-Class>=0.06002:databases/p5-DBIx-Class \
		p5-SQL-Translator>=0.09.003:databases/p5-SQL-Translator \
		p5-Sub-Name>=0.04:devel/p5-Sub-Name
TEST_DEPENDS=	p5-DBD-SQLite>=0:databases/p5-DBD-SQLite \
		p5-Dir-Self>=0:devel/p5-Dir-Self \
		p5-Test-Exception>=0:devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	modbuildtiny

NO_ARCH=	yes

OPTIONS_DEFINE=	BLOWFISH OPENPGP
OPTIONS_DEFAULT=BLOWFISH OPENPGP
BLOWFISH_DESC=	Blowfish support
OPENPGP_DESC=	Crypt::OpenPGP (gpg) support

BLOWFISH_BUILD_DEPENDS=	p5-Crypt-Eksblowfish>=0:security/p5-Crypt-Eksblowfish
BLOWFISH_RUN_DEPENDS=	p5-Crypt-Eksblowfish>=0:security/p5-Crypt-Eksblowfish
OPENPGP_BUILD_DEPENDS=	p5-Crypt-CAST5_PP>=0:security/p5-Crypt-CAST5_PP \
			p5-Crypt-OpenPGP>=0:security/p5-Crypt-OpenPGP
OPENPGP_RUN_DEPENDS=	p5-Crypt-CAST5_PP>=0:security/p5-Crypt-CAST5_PP \
			p5-Crypt-OpenPGP>=0:security/p5-Crypt-OpenPGP

.include <bsd.port.mk>

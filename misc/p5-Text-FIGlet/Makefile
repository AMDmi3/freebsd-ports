PORTNAME=	Text-FIGlet
PORTVERSION=	2.19.4
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Perl module to provide FIGlet abilities, akin to banner
WWW=		https://metacpan.org/release/Text-FIGlet

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	figlet:misc/figlet
TEST_DEPENDS=	p5-Test-Differences>=0:devel/p5-Test-Differences \
		p5-Test-Pod>=1:devel/p5-Test-Pod

USES=		perl5 tar:tgz
USE_PERL5=	configure

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/games/lib|${PREFIX}/share|' ${WRKSRC}/bin/*.pl ${WRKSRC}/lib/Text/FIGlet.pm ${WRKSRC}/lib/Text/FIGlet/*.pm

.include <bsd.port.mk>

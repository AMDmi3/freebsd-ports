PORTNAME=	Archive-Tar
PORTVERSION=	3.04
CATEGORIES=	archivers perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:BINGOS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for creation and manipulation of tar files
WWW=		https://metacpan.org/release/Archive-Tar

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-Compress-Lzma>=0:archivers/p5-IO-Compress-Lzma \
		p5-IO-String>=0:devel/p5-IO-String

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

OPTIONS_DEFINE=	TEXTDIFF
TEXTDIFF_DESC=	Text::Diff support for ptardiff

TEXTDIFF_RUN_DEPENDS=	p5-Text-Diff>=0:textproc/p5-Text-Diff

post-patch:
	@${REINPLACE_CMD} -e 's/5.009/5.666/' ${WRKSRC}/Makefile.PL
	@${REINPLACE_CMD} -e '/EXE_FILES/d' ${WRKSRC}/Makefile.PL

.include <bsd.port.mk>

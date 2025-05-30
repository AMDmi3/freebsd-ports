PORTNAME=	Catalyst-Runtime
PORTVERSION=	5.90132
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Elegant MVC Web Application Framework (Runtime)
WWW=		https://metacpan.org/release/Catalyst-Runtime

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE_GPLv1+ =	${WRKSRC}/LICENSE

# Do not add the following ports to TEST_DEPENDS to avoid cyclic dependencies:
# - devel/p5-Test-WWW-Mechanize-Catalyst
# - www/p5-Catalyst-Engine-PSGI
# - www/p5-CatalystX-LeakChecker
BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-Simple>=1.109:www/p5-CGI-Simple \
		p5-CGI-Struct>=0:www/p5-CGI-Struct \
		p5-Class-C3-Adopt-NEXT>=0.07:devel/p5-Class-C3-Adopt-NEXT \
		p5-Class-Load>=0.12:devel/p5-Class-Load \
		p5-Data-Dump>=0:devel/p5-Data-Dump \
		p5-Data-OptList>=0:devel/p5-Data-OptList \
		p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-HTTP-Body>=1.22:www/p5-HTTP-Body \
		p5-HTTP-Message>=5.814:www/p5-HTTP-Message \
		p5-Hash-MultiValue>=0:devel/p5-Hash-MultiValue \
		p5-JSON-MaybeXS>=1:converters/p5-JSON-MaybeXS \
		p5-MRO-Compat>=0:devel/p5-MRO-Compat \
		p5-Module-Pluggable>=4.7:devel/p5-Module-Pluggable \
		p5-Moose>=2.1400,1:devel/p5-Moose \
		p5-MooseX-Emulate-Class-Accessor-Fast>=0.00903:devel/p5-MooseX-Emulate-Class-Accessor-Fast \
		p5-MooseX-Getopt>=0.48:devel/p5-MooseX-Getopt \
		p5-MooseX-MethodAttributes>=0.24:devel/p5-MooseX-MethodAttributes \
		p5-Path-Class>=0.09:devel/p5-Path-Class \
		p5-PerlIO-utf8_strict>=0:devel/p5-PerlIO-utf8_strict \
		p5-Plack>=0.9991:www/p5-Plack \
		p5-Plack-Middleware-FixMissingBodyInRedirect>=0.09:www/p5-Plack-Middleware-FixMissingBodyInRedirect \
		p5-Plack-Middleware-MethodOverride>=0.12:www/p5-Plack-Middleware-MethodOverride \
		p5-Plack-Middleware-RemoveRedundantBody>=0.03:www/p5-Plack-Middleware-RemoveRedundantBody \
		p5-Plack-Middleware-ReverseProxy>=0.04:www/p5-Plack-Middleware-ReverseProxy \
		p5-Plack-Test-ExternalServer>=0:www/p5-Plack-Test-ExternalServer \
		p5-Safe-Isa>=0:devel/p5-Safe-Isa \
		p5-Stream-Buffered>=0:devel/p5-Stream-Buffered \
		p5-String-RewritePrefix>=0.004:textproc/p5-String-RewritePrefix \
		p5-Sub-Exporter>=0:devel/p5-Sub-Exporter \
		p5-Task-Weaken>=0:devel/p5-Task-Weaken \
		p5-Text-SimpleTable>=0.03:textproc/p5-Text-SimpleTable \
		p5-Tree-Simple>=1.15:devel/p5-Tree-Simple \
		p5-Tree-Simple-VisitorFactory>=0:devel/p5-Tree-Simple-VisitorFactory \
		p5-Try-Tiny>=0.17:lang/p5-Try-Tiny \
		p5-URI>=1.65:net/p5-URI \
		p5-URI-ws>=0.03:net/p5-URI-ws \
		p5-libwww>=5.837:www/p5-libwww \
		p5-namespace-clean>=0.23:devel/p5-namespace-clean
TEST_DEPENDS=	p5-Term-Size-Any>=0:devel/p5-Term-Size-Any \
		p5-Test-Fatal>=0:devel/p5-Test-Fatal \
		p5-Test-Without-Module>=0:devel/p5-Test-Without-Module \
		p5-Type-Tiny>=0:devel/p5-Type-Tiny \
		p5-YAML>=0:textproc/p5-YAML

USES=		perl5
USE_PERL5=	configure

NO_ARCH=	yes

PORTSCOUT=	limit:^[0-9\.]*$$

.include <bsd.port.mk>

PORTNAME=	dwdiff
PORTVERSION=	2.1.4
PORTREVISION=	8
CATEGORIES=	textproc
MASTER_SITES=	https://os.ghalkes.nl/dist/ \
		http://fossies.org/unix/privat/

MAINTAINER=	portmaster@BSDforge.com
COMMENT=	Delimited word diff program
WWW=		https://os.ghalkes.nl/dwdiff.html

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		tar:bz2

OPTIONS_DEFINE=	UNICODE NLS DOCS
OPTIONS_DEFAULT=UNICODE
OPTIONS_SUB=	yes

NLS_CONFIGURE_WITH=	gettext
NLS_USES=	gettext localbase:ldflags
NLS_CONFIGURE_ENV=	LDFLAGS="${LDFLAGS} -lintl"

UNICODE_CONFIGURE_WITH=	unicode
UNICODE_LIB_DEPENDS=	libicudata.so:devel/icu
UNICODE_USES=	localbase:ldflags pkgconfig

HAS_CONFIGURE=	yes
CONFIGURE_ARGS+=--with-verbose-compile
MAKE_ARGS+=	prefix=${PREFIX:Q} mandir="${PREFIX}/share/man" docdir=${DOCSDIR:Q}

.include <bsd.port.mk>

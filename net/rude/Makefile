PORTNAME=	rude
PORTVERSION=	0.70
PORTREVISION=	5
CATEGORIES=	net
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Real-time UDP data emitter and collector
WWW=		https://rude.sourceforge.net/

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/DOC/COPYING

RUN_DEPENDS=	p5-Tk>=0:x11-toolkits/p5-Tk

HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--mandir=${PREFIX}/share/man
CONFIGURE_ENV=	--with-debug-lvl=3
USES=		perl5 shebangfix
SHEBANG_FILES=	grude/grude

WRKSRC=		${WRKDIR}/${PORTNAME}

PORTDOCS=	README README.rude README.crude TODO example.cfg
PORTEXAMPLES=	crude_jitter.pl crude_parse.pl dump2trace.pl

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/grude/grude ${STAGEDIR}${PREFIX}/bin

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for FILE in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/DOC/${FILE} ${STAGEDIR}${DOCSDIR}
.endfor

do-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
.for FILE in ${PORTEXAMPLES}
	${INSTALL_DATA} ${WRKSRC}/scripts/${FILE} ${STAGEDIR}${EXAMPLESDIR}
.endfor

.include <bsd.port.mk>

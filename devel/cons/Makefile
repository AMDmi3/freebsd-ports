PORTNAME=	cons
PORTVERSION=	2.2.0
PORTREVISION=	4
CATEGORIES=	devel
MASTER_SITES=	http://www.dsmit.com/cons/stable/ \
		http://www.gnu.org/software/cons/stable/ \
		ftp://ftp.gnu.org/pub/gnu/cons/ \
		http://www.baldmt.com/cons/stable/

MAINTAINER=	rv@gnu.org
COMMENT=	Perl-based Make Replacement
WWW=		http://www.dsmit.com/cons/

DEPRECATED=	Upstream development seems to have stopped over 20 years ago
EXPIRATION_DATE=2025-06-30

USES=		perl5 tar:tgz
NO_BUILD=	yes
PLIST_SUB=	CONS_VER=${PORTVERSION}

DOCS=		CHANGES COPYING COPYRIGHT INSTALL MANIFEST README RELEASE \
		cons.html TODO
DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}-${PORTVERSION}

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/cons ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/cons.1.gz ${STAGEDIR}${PREFIX}/share/man/man1
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${DOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>

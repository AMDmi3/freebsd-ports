# Created by: Thomas Dreibholz <dreibh@iem.uni-due.de>

PORTNAME=	fractgen
PORTVERSION=	2.1.10
CATEGORIES=	graphics
MASTER_SITES=	https://www.uni-due.de/~be0001/fractalgenerator/download/

MAINTAINER=	dreibh@iem.uni-due.de
COMMENT=	Fractal Generator

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++11-lang tar:xz cmake qt:5
USE_QT=		core xml widgets printsupport \
		buildtools_build qmake_build linguisttools_build

CMAKE_ARGS+=	-DCMAKE_INSTALL_MANDIR=${PREFIX}/man

post-patch:
		# We patch **in** %%PREFIX%% (see patch-src_fractgen.cc) and now we
		# can replace it with the real prefix that we wanted to use.
		$(REINPLACE_CMD) 's+%%PREFIX%%+$(PREFIX)+' $(WRKSRC)/src/fractgen.cc

.include <bsd.port.mk>

PORTNAME=	trueos-libqt5
PORTVERSION=	20171003
PORTREVISION=	3
CATEGORIES=	sysutils

MAINTAINER=	jt@obs-sec.com
COMMENT=	TrueOS QT5 Library
WWW=		https://github.com/trueos/trueos-libqt5

LICENSE=	BSD2CLAUSE

ONLY_FOR_ARCHS=	amd64

USES=		gl qmake qt:5 shebangfix tar:xz

MAKE_ARGS=	PREFIX=${STAGEDIR}${PREFIX}

MAKE_JOBS_UNSAFE=	yes

USE_LDCONFIG=	yes
USE_QT=		core gui network svg linguist \
		buildtools x11extras widgets
USE_GL+=	gl

WRKSRC_SUBDIR=	src-qt5

QMAKE_ARGS=	CONFIG+="configure"

USE_GITHUB=	yes
GH_ACCOUNT=	trueos
GH_TAGNAME=	9e92b465d823185c9b96f2017e06f2a06b6143fa

.include <bsd.port.mk>

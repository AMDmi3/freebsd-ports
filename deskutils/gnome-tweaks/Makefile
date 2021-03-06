# Created by: Jeremy Messenger <mezz@FreeBSD.org>

PORTNAME=	gnome-tweaks
PORTVERSION=	3.34.1
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Allows to tweak some hidden settings in GNOME3

LICENSE=	GPLv3+ CC0-1.0
LICENSE_COMB=	multi
LICENSE_FILE_CC0-1.0=	${WRKSRC}/LICENSES/CC0-1.0
LICENSE_FILE_GPLv3+ =	${WRKSRC}/LICENSES/GPL-3.0

BUILD_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas
RUN_DEPENDS=	gsettings-desktop-schemas>=0:devel/gsettings-desktop-schemas \
		gnome-shell>=3.28:x11/gnome-shell

USES=		gettext gnome localbase meson pkgconfig \
		python:3.4+ shebangfix tar:xz
USE_GNOME=	gtk30 pygobject3 nautilus3
SHEBANG_FILES=	gnome-tweaks \
		gnome-tweak-tool-lid-inhibitor \
		meson-postinstall.py

NO_ARCH=	yes
PORTSCOUT=	limitw:1,even

# generates .py[co] files for installed modules
# if that's not done, ${PYTHON_SITELIBDIR}/gps will be polluted
# with these files when module is imported from root user
post-install:
	@${FIND} ${STAGEDIR}${PREFIX} -name \*.pyc -delete
	(cd ${STAGEDIR}${PREFIX} && \
	${PYTHON_CMD} ${PYTHON_LIBDIR}/compileall.py \
		-d ${PYTHONPREFIX_SITELIBDIR} -f ${PYTHONPREFIX_SITELIBDIR:S;${PREFIX}/;;} && \
	${PYTHON_CMD} -O ${PYTHON_LIBDIR}/compileall.py \
		-d ${PYTHONPREFIX_SITELIBDIR} -f ${PYTHONPREFIX_SITELIBDIR:S;${PREFIX}/;;})

.include <bsd.port.mk>

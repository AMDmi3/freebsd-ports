PORTNAME=	autorandr
DISTVERSION=	1.12.1
PORTREVISION=	1
CATEGORIES=	x11
PATCH_SITES=	https://github.com/phillipberndt/autorandr/commit/
PATCHFILES=	2bc71d562765e2023b26a31c485769612e3eb91e.patch:-p1 # PR 282

MAINTAINER=	0mp@FreeBSD.org
COMMENT=	Auto-detect displays and configure them with xrandr
WWW=		https://github.com/phillipberndt/autorandr

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/gpl-3.0.txt

BUILD_DEPENDS=	gsed:textproc/gsed
RUN_DEPENDS=	xrandr:x11/xrandr

USES=		gmake pkgconfig python:3.9-3.10 shebangfix xorg
# Use GitHub instead of MASTER_SITES=PYPI to get additional files like
# the manual page and the license.
USE_GITHUB=	yes
GH_ACCOUNT=	phillipberndt
USE_PYTHON=	autoplist concurrent distutils
USE_XORG=	xcb

MAKE_ARGS=	BASH_COMPLETIONS_DIR=${PREFIX}/share/bash-completion/completions \
		PREFIX=${PREFIX} \
		XDG_AUTOSTART_DIR=${PREFIX}/etc/xdg/autostart
BINARY_ALIAS=	sed=gsed

PLIST_FILES=	bin/${PORTNAME}-launcher \
		etc/xdg/autostart/autorandr-launcher.desktop \
		share/bash-completion/completions/autorandr \
		share/man/man1/${PORTNAME}.1.gz

_EXTRA_BUILD_TARGETS=	contrib/autorandr_launcher/autorandr-launcher
_EXTRA_INSTALL_TARGETS=	install_bash_completion install_launcher \
			install_manpage

# Regenerate the patches with:
#   make clean extract do-patch PATCHFILES=
post-patch:
	${REINPLACE_CMD} 's|%%PREFIX%%|${PREFIX}|g' \
		${WRKSRC}/${PORTNAME}.py \
		${WRKSRC}/contrib/autorandr_launcher/autorandr_launcher.c

post-build:
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} -C ${BUILD_WRKSRC} ${MAKE_ARGS} \
		${_EXTRA_BUILD_TARGETS}

post-install:
	${SETENV} ${MAKE_ENV} ${MAKE_CMD} -C ${INSTALL_WRKSRC} ${MAKE_ARGS} \
		${_EXTRA_INSTALL_TARGETS}
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-launcher

.include <bsd.port.mk>

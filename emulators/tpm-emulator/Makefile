PORTNAME=	tpm-emulator
PORTVERSION=	0.7.4
PORTREVISION=	3
CATEGORIES=	emulators security
MASTER_SITES=	SF/${PORTNAME}.berlios
DISTNAME=	${PORTNAME:S,-,_,}-${PORTVERSION}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Trusted Platform Module (TPM) emulator
WWW=		http://tpm-emulator.berlios.de/

LICENSE=	GPLv2

LIB_DEPENDS=	libgmp.so:math/gmp

USES=		cmake
USE_RC_SUBR=	tpmd
CONFIGURE_ENV=	PREFIX="${PREFIX}"
CMAKE_ARGS=	-DTPM_INCLUDE_DIRS:STRING="${LOCALBASE}/include" \
		-DTDDL_LIBRARY_DIRS:STRING="${LOCALBASE}/lib/tddl_emu" \
		-DTPM_LIBRARY_DIRS:STRING="${LOCALBASE}/lib"
USE_LDCONFIG=	${PREFIX}/lib/tddl_emu
USERS=		_tss
GROUPS=		_tss
SUB_LIST=	USERS="${USERS}" GROUPS="${GROUPS}"
PLIST_SUB=	USERS="${USERS}" GROUPS="${GROUPS}"

post-install:
	@${MKDIR} ${STAGEDIR}/var/run/tpm
	@${MKDIR} ${STAGEDIR}${PREFIX}/var/db/tpm

.include <bsd.port.mk>

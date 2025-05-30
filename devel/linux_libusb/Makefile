PORTNAME=	linux_libusb
PORTVERSION=	13.1.0
CATEGORIES=	devel linux
PKGNAMESUFFIX=	-${FLAVOR}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Linux-compatibility LibUSB
WWW=		https://github.com/hselasky/linux_libusb

LICENSE=	BSD2CLAUSE

ONLY_FOR_ARCHS=	aarch64 amd64

FLAVORS=		c7 rl9
FLAVOR?=		c7
c7_CONFLICTS_INSTALL=	${PORTNAME}-rl9
rl9_CONFLICTS_INSTALL=	${PORTNAME}-c7

USES=		linux:${FLAVOR} tar:bzip2

USE_GITHUB=	yes
USE_LDCONFIG=	yes
USE_LINUX=	base:build,run devtools:build
USE_LINUX_PREFIX=	yes

GH_ACCOUNT=	hselasky

LIBDIR_aarch64=	lib64
LIBDIR_amd64=	lib64
LIBDIR_i386=	lib
PLIST_FILES=	usr/${LIBDIR_${ARCH}}/libusb.so.3 \
		usr/${LIBDIR_${ARCH}}/libusb-0.1.so.4 \
		usr/${LIBDIR_${ARCH}}/libusb-1.0.so.0

CC=		${LINUXBASE}/usr/bin/gcc --sysroot=${LINUXBASE}
CFLAGS:=	${CFLAGS:N-march=*}
CFLAGS+=	-I${WRKDIR}/${DISTNAME}/include
SSP_CFLAGS?=	-fstack-protector # XXX -strong isn't supported by GCC < 4.9
MAKE_ARGS+=	LIBUSB_GLOBAL_INCLUDE_FILE=libusb_global_linux.h
MAKE_ARGS+=	WITHOUT_PROFILE=yes
MAKE_ARGS+=	WITHOUT_SSP=yes
MAKE_ARGS+=	WITHOUT_WERROR=yes
MAKE_ENV+=	LDADD="-lrt"

.include <bsd.port.pre.mk>

MAKE_ARGS+=	NO_WDATE_TIME=yes

.if ${FLAVOR} == c7
ONLY_FOR_ARCHS+=	i386
.  if ${ARCH} == amd64
PLIST_FILES+=	usr/lib/libusb.so.3 \
		usr/lib/libusb-0.1.so.4 \
		usr/lib/libusb-1.0.so.0
.  endif
MAKE_ARGS+=	CSTD=gnu11
.endif

do-build:
	${MKDIR} ${WRKSRC}/${LIBDIR_${ARCH}}
	cd ${WRKSRC} && ${SETENVI} ${WRK_ENV} ${MAKE_ENV} \
		MAKEOBJDIR=${LIBDIR_${ARCH}} ${MAKE_CMD} ${MAKE_FLAGS} \
		${MAKEFILE} ${_MAKE_JOBS} ${MAKE_ARGS:N${DESTDIRNAME}=*}
.if ${ARCH} == amd64 && ${FLAVOR} == c7
	${MKDIR} ${WRKSRC}/lib
	cd ${WRKSRC} && ${SETENVI} ${WRK_ENV} ${MAKE_ENV:NCC=*} \
		CC="${CC} -m32" MAKEOBJDIR=lib ${MAKE_CMD} ${MAKE_FLAGS} \
		${MAKEFILE} ${_MAKE_JOBS} ${MAKE_ARGS:N${DESTDIRNAME}=*} \
		COMPAT_32BIT=yes
.endif

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/usr/${LIBDIR_${ARCH}}
	${INSTALL_LIB} ${WRKSRC}/${LIBDIR_${ARCH}}/libusb.so.3 \
		${STAGEDIR}${PREFIX}/usr/${LIBDIR_${ARCH}}
	${LN} -s libusb.so.3 \
		${STAGEDIR}${PREFIX}/usr/${LIBDIR_${ARCH}}/libusb-0.1.so.4
	${LN} -s libusb.so.3 \
		${STAGEDIR}${PREFIX}/usr/${LIBDIR_${ARCH}}/libusb-1.0.so.0
.if ${ARCH} == amd64 && ${FLAVOR} == c7
	${MKDIR} ${STAGEDIR}${PREFIX}/usr/lib
	${INSTALL_LIB} ${WRKSRC}/lib/libusb.so.3 \
		${STAGEDIR}${PREFIX}/usr/lib
	${LN} -s libusb.so.3 \
		${STAGEDIR}${PREFIX}/usr/lib/libusb-0.1.so.4
	${LN} -s libusb.so.3 \
		${STAGEDIR}${PREFIX}/usr/lib/libusb-1.0.so.0
.endif

.include <bsd.port.post.mk>

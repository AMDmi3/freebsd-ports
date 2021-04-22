PORTNAME=	spring
PORTVERSION=	105.0.1
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Project aiming to create a new and versatile RTS Engine

LICENSE=	GPLv2+ BSD3CLAUSE BSD2CLAUSE
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libfreetype.so:print/freetype2 \
		libIL.so:graphics/devil \
		libogg.so:audio/libogg \
		libvorbis.so:audio/libvorbis \
		libminizip.so:archivers/minizip \
		libfontconfig.so:x11-fonts/fontconfig \
		libcurl.so:ftp/curl \
		libunwind.so:devel/libunwind \
		libjsoncpp.so:devel/jsoncpp
BUILD_DEPENDS=	7z:archivers/p7zip

BROKEN_FreeBSD_11=	ld: error: undefined symbol: streflop_libm::__inline_isnanf(float)
BROKEN_FreeBSD_12=	ld: error: undefined symbol: streflop_libm::__inline_isnanf(float)
ONLY_FOR_ARCHS=		amd64
ONLY_FOR_ARCHS_REASON=	relies on x86 floating-point math and amd64 atomic ops

USE_GITHUB=	yes
GH_TUPLE=	spring:Python:3bb6837:Python/AI/Interfaces/Python \
		spring:AAI:a15f45c:AAI/AI/Skirmish/AAI \
		spring:CircuitAI:91fd31e:CircuitAI/AI/Skirmish/CircuitAI \
		spring:HughAI:1a11f5a:HughAI/AI/Skirmish/HughAI \
		spring:KAIK:f6bdd3e:KAIK/AI/Skirmish/KAIK \
		spring:Shard:75339ae:Shard/AI/Skirmish/Shard \
		spring:SpringMapConvNG:76429b4:SprintMapConvNG/tools/mapcompile \
		spring:pr-downloader:67423a3:pr_downloader/tools/pr-downloader \
		spring:pyunitsync:6e1b3fd:pyunitsync/tools/unitsync/python

USES=		cmake compiler:c++11-lib desktop-file-utils gl localbase:ldflags \
		openal:al pkgconfig sdl shared-mime-info xorg
USE_GL=		gl glu glew
USE_SDL=	sdl2
USE_XORG=	x11 xcursor
CMAKE_ARGS=	-DDATADIR:STRING="share/${PORTNAME}" \
		-DDOCDIR:STRING="share/doc/${PORTNAME}" \
		-DAI_TYPES:STRING="NATIVE" \
		-DCMAKE_DISABLE_FIND_PACKAGE_Git=TRUE

#		-DCREATE_MAN_PAGES:BOOL=false \
#		-DUSE_TCMALLOC:BOOL=false \
#		-DUSE_LIBSQUISH:BOOL=false \
#		-DUNITSYNC_PYTHON_WRAPPER:BOOL=false

# The check-target fails right now: https://springrts.com/mantis/view.php?id=4736
#TEST_TARGET=	check

#PORTDOCS=	*
PORTDATA=	*

#OPTIONS_DEFINE=	MANPAGES PR_DOWNLOADER DOCS
#OPTIONS_DEFAULT=MANPAGES PR_DOWNLOADER
#OPTIONS_SUB=	yes

#PR_DOWNLOADER_DESC=	Map and game downloader

#MANPAGES_CMAKE_ON=	-DCREATE_MAN_PAGES:BOOL=true -DMANDIR:STRING="man"
#MANPAGES_CMAKE_OFF=	-DCREATE_MAN_PAGES:BOOL=false
##MANPAGES_BUILD_DEPENDS=	7z:archivers/p7zip \
#			asciidoc:textproc/asciidoc \
#			xsltproc:textproc/libxslt \
#			${LOCALBASE}/share/xsl/docbook/manpages/docbook.xsl:textproc/docbook-xsl \
#			bash:shells/bash
#CXXFLAGS+=	-Wno-deprecated		# Too much noise

#PR_DOWNLOADER_LIB_DEPENDS=libcurl.so:ftp/curl

MAKE_ENV=	PORTVERSION="${PORTVERSION:R}"  # build system expects 2 digit version

.include <bsd.port.pre.mk>

#.if defined(WITH_SYNC_DEBUG)
#CFLAGS=		# empty
#CXXFLAGS=	# empty
#CMAKE_ARGS+=	-DTRACE_SYNC=true -DSYNCDEBUG=true
#CMAKE_BUILD_TYPE=DEBUG2
#.endif

#.if ! ${PORT_OPTIONS:MPR_DOWNLOADER}
#post-extract:
#	@${RM} ${WRKSRC}/tools/pr-downloader/CMakeLists.txt
#.endif

post-patch:
	@${REINPLACE_CMD} -e '/add_subdirectory(doc)/d' ${WRKSRC}/CMakeLists.txt
	@${REINPLACE_CMD} -e '/add_subdirectory(DemoTool)/d' ${WRKSRC}/tools/CMakeLists.txt
	@${REINPLACE_CMD} -e '/add_subdirectory(dirchange)/d' ${WRKSRC}/tools/CMakeLists.txt

	#@${REINPLACE_CMD} -e '/add_subdirectory(pr-downloader)/d' ${WRKSRC}/tools/CMakeLists.txt
	#@${REINPLACE_CMD} -e '/nstall.*pr-downloader/d' ${WRKSRC}/tools/CMakeLists.txt

#	@${REINPLACE_CMD} -e 's|-O2||' ${WRKSRC}/CMakeLists.txt
#	@${REINPLACE_CMD} -e 's|/etc/\(spring/datadir\)|${PREFIX}/\1|g' \
#		${WRKSRC}/rts/System/FileSystem/DataDirLocater.cpp
#	@${REINPLACE_CMD} -e 's|x1F3F|x0F3F|g' \
#		${WRKSRC}/rts/System/Sync/FPUCheck.cpp
#	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' \
#		${WRKSRC}/rts/build/cmake/*.cmake
#	@${REINPLACE_CMD} -e 's|execinfo|/usr/lib/libexecinfo.so|' \
#		${WRKSRC}/rts/CMakeLists.txt \
#		${WRKSRC}/rts/builds/dedicated/CMakeLists.txt
#	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' \
#		${WRKSRC}/rts/System/Platform/Misc.cpp
#	@${REINPLACE_CMD} -e 's|/bin/bash|${LOCALBASE}&|' \
#		${WRKSRC}/doc/manpages/make_manpages.sh
#.if ! ${PORT_OPTIONS:MMANPAGES}
#	@${REINPLACE_CMD} -e '/set(CREATE_MAN_PAGES)/ d' \
#		${WRKSRC}/doc/CMakeLists.txt
#.endif

#pre-build:
#	cd ${WRKSRC} && ${MAKE_CMD} generateVersionFiles

.include <bsd.port.post.mk>

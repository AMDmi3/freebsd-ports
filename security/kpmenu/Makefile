PORTNAME=	kpmenu
DISTVERSIONPREFIX=	v
DISTVERSION=	1.2.1
CATEGORIES=	security

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Dmenu/rofi interface for KeePass

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	dmenu:x11/dmenu \
		xsel:x11/xsel-conrad

USES=		go:modules
USE_GITHUB=	yes
GH_ACCOUNT=	AlessioDP

GH_TUPLE=	aead:argon2:a87724528b07:aead_argon2/vendor/github.com/aead/argon2 \
		aead:chacha20:8b13a72661da:aead_chacha20/vendor/github.com/aead/chacha20 \
		fsnotify:fsnotify:v1.4.7:fsnotify_fsnotify/vendor/github.com/fsnotify/fsnotify \
		go-yaml:yaml:v2.2.2:go_yaml_yaml/vendor/gopkg.in/yaml.v2 \
		golang:crypto:4def268fd1a4:golang_crypto/vendor/golang.org/x/crypto \
		golang:sys:fc99dfbffb4e:golang_sys/vendor/golang.org/x/sys \
		golang:text:v0.3.0:golang_text/vendor/golang.org/x/text \
		hashicorp:hcl:v1.0.0:hashicorp_hcl/vendor/github.com/hashicorp/hcl \
		magiconair:properties:v1.8.0:magiconair_properties/vendor/github.com/magiconair/properties \
		mitchellh:mapstructure:v1.1.2:mitchellh_mapstructure/vendor/github.com/mitchellh/mapstructure \
		pelletier:go-toml:v1.2.0:pelletier_go_toml/vendor/github.com/pelletier/go-toml \
		spf13:afero:v1.1.2:spf13_afero/vendor/github.com/spf13/afero \
		spf13:cast:v1.3.0:spf13_cast/vendor/github.com/spf13/cast \
		spf13:jwalterweatherman:v1.0.0:spf13_jwalterweatherman/vendor/github.com/spf13/jwalterweatherman \
		spf13:pflag:v1.0.5:spf13_pflag/vendor/github.com/spf13/pflag \
		spf13:viper:v1.4.0:spf13_viper/vendor/github.com/spf13/viper \
		tobischo:gokeepasslib:v3.0.0:tobischo_gokeepasslib/vendor/github.com/tobischo/gokeepasslib/v3

PLIST_FILES=	bin/kpmenu

.include <bsd.port.mk>

PORTNAME=	djangorestframework-guardian
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	www python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}dj51-

MAINTAINER=	grembo@FreeBSD.org
COMMENT=	Django Guardian support for Django REST Framework
WWW=		https://github.com/rpkilby/django-rest-framework-guardian

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}django51>=5.1:www/py-django51@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dj51-djangorestframework>=3.16.0:www/py-dj51-djangorestframework@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}dj51-django-guardian>=2.4.0:www/py-dj51-django-guardian@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

CONFLICTS_INSTALL=	${PYTHON_PKGNAMEPREFIX}*${PORTNAME}

.include <bsd.port.mk>

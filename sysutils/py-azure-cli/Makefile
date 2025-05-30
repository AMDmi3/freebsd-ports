PORTNAME=	azure-cli
PORTVERSION=	2.55.0
PORTREVISION=	3
CATEGORIES=	sysutils python
MASTER_SITES=	PYPI
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dbaio@FreeBSD.org
COMMENT=	Microsoft Azure Command-Line Tools
WWW=		https://docs.microsoft.com/en-us/cli/azure/?view=azure-cli-latest

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	bash:shells/bash \
		${PYTHON_PKGNAMEPREFIX}antlr4-python3-runtime>=4.9:devel/py-antlr4-python3-runtime@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-appconfiguration>=1.1.1:devel/py-azure-appconfiguration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-batch>=14.0.0:devel/py-azure-batch@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-cli-core>=${PORTVERSION}:sysutils/py-azure-cli-core@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-cosmos>=3.0.2:devel/py-azure-cosmos@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-datalake-store>=0.0.49:devel/py-azure-datalake-store@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-graphrbac>=0.60.0:devel/py-azure-graphrbac@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-keyvault-administration>=4.4.0.b2:devel/py-azure-keyvault-administration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-keyvault-certificates>=4.7.0:security/py-azure-keyvault-certificates@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-keyvault-keys>=4.9.0.b3:security/py-azure-keyvault-keys@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-keyvault-secrets>=4.7.0:security/py-azure-keyvault-secrets@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-loganalytics>=0.1.1:devel/py-azure-loganalytics@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-advisor>=9.0.0:devel/py-azure-mgmt-advisor@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-apimanagement>=4.0.0:devel/py-azure-mgmt-apimanagement@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-applicationinsights>=1.0.0:devel/py-azure-mgmt-applicationinsights@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-appconfiguration>=3.0.0:devel/py-azure-mgmt-appconfiguration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-appcontainers>=2.0.0:devel/py-azure-mgmt-appcontainers@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-authorization>=4.0.0:devel/py-azure-mgmt-authorization@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-batch>=17.0.0:devel/py-azure-mgmt-batch@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-batchai>=7.0.0.b1:devel/py-azure-mgmt-batchai@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-billing>=6.0.0:devel/py-azure-mgmt-billing@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-botservice>=2.0.0.b3:devel/py-azure-mgmt-botservice@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-cdn>=12.0.0:devel/py-azure-mgmt-cdn@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-cognitiveservices>=13.5.0:devel/py-azure-mgmt-cognitiveservices@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-compute>=30.3.0:devel/py-azure-mgmt-compute@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-containerinstance>=10.1.0:devel/py-azure-mgmt-containerinstance@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-containerregistry>=10.1.0:devel/py-azure-mgmt-containerregistry@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-containerservice>=28.0.0:devel/py-azure-mgmt-containerservice@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-cosmosdb>=9.3.0:devel/py-azure-mgmt-cosmosdb@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-databoxedge>=1.0.0:devel/py-azure-mgmt-databoxedge@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-datalake-store>=0.5.0:devel/py-azure-mgmt-datalake-store@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-datamigration>=10.0.0:devel/py-azure-mgmt-datamigration@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-devtestlabs>=4.0:devel/py-azure-mgmt-devtestlabs@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-dns>=8.0.0:devel/py-azure-mgmt-dns@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-eventgrid>=10.2.0.b2:devel/py-azure-mgmt-eventgrid@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-eventhub>=10.1.0:devel/py-azure-mgmt-eventhub@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-extendedlocation>=1.0.0.b2:devel/py-azure-mgmt-extendedlocation@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-hdinsight>=9.0.0:devel/py-azure-mgmt-hdinsight@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-imagebuilder>=1.2.0:devel/py-azure-mgmt-imagebuilder@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-iotcentral>=10.0.0.b1:devel/py-azure-mgmt-iotcentral@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-iothub>=3.0.0:devel/py-azure-mgmt-iothub@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-iothubprovisioningservices>=1.1.0:devel/py-azure-mgmt-iothubprovisioningservices@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-keyvault>=10.3.0:devel/py-azure-mgmt-keyvault@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-kusto>=0.3.0:devel/py-azure-mgmt-kusto@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-loganalytics>=13.0.0.b4:devel/py-azure-mgmt-loganalytics@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-managedservices>=1.0:devel/py-azure-mgmt-managedservices@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-managementgroups>=1.0.0:devel/py-azure-mgmt-managementgroups@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-maps>=2.0.0:devel/py-azure-mgmt-maps@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-marketplaceordering>=1.1.0:devel/py-azure-mgmt-marketplaceordering@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-media>=9.0:devel/py-azure-mgmt-media@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-monitor>=5.0.0:devel/py-azure-mgmt-monitor@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-msi>=7.0.0:devel/py-azure-mgmt-msi@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-netapp>=10.1.0:devel/py-azure-mgmt-netapp@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-policyinsights>=1.1.0.b4:devel/py-azure-mgmt-policyinsights@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-privatedns>=1.0.0:devel/py-azure-mgmt-privatedns@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-rdbms>=10.2.0.b12:devel/py-azure-mgmt-rdbms@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-recoveryservices>=2.5.0:devel/py-azure-mgmt-recoveryservices@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-recoveryservicesbackup>=7.0.0:devel/py-azure-mgmt-recoveryservicesbackup@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-redhatopenshift>=1.4.0:devel/py-azure-mgmt-redhatopenshift@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-redis>=14.1.0:devel/py-azure-mgmt-redis@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-resource>=23.1.0.b2:devel/py-azure-mgmt-resource@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-search>=9.0.0:devel/py-azure-mgmt-search@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-security>=5.0.0:devel/py-azure-mgmt-security@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-servicebus>=8.2.0:devel/py-azure-mgmt-servicebus@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-servicefabric>=1.0.0:devel/py-azure-mgmt-servicefabric@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-servicefabricmanagedclusters>=1.0.0:devel/py-azure-mgmt-servicefabricmanagedclusters@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-servicelinker>=1.2.0.b1:devel/py-azure-mgmt-servicelinker@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-signalr>=2.0.0.b1:devel/py-azure-mgmt-signalr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-sql>=4.0.0.b13:devel/py-azure-mgmt-sql@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-sqlvirtualmachine>=1.0.0.b5:devel/py-azure-mgmt-sqlvirtualmachine@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-storage>=21.1.0:devel/py-azure-mgmt-storage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-trafficmanager>=1.0.0:devel/py-azure-mgmt-trafficmanager@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-web>=7.0.0:devel/py-azure-mgmt-web@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-mgmt-synapse>=2.1.0.b5:devel/py-azure-mgmt-synapse@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-multiapi-storage>=1.2.0:devel/py-azure-multiapi-storage@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-storage-common>=1.4:devel/py-azure-storage-common@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-synapse-accesscontrol>=0.5.0:devel/py-azure-synapse-accesscontrol@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-synapse-artifacts>=0.17.0:devel/py-azure-synapse-artifacts@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-synapse-managedprivateendpoints>=0.4.0:devel/py-azure-synapse-managedprivateendpoints@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}azure-synapse-spark>=0.2.0:devel/py-azure-synapse-spark@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}colorama>=0.4.4:devel/py-colorama@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}fabric>=2.4:devel/py-fabric@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}paramiko>=2.0.8:security/py-paramiko@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pygments>=2.4:textproc/py-pygments@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}openssl>=17.1.0:security/py-openssl@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}packaging>=20.9:devel/py-packaging@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pycomposefile>=0.0.30:devel/pycomposefile@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyyaml>=5.1:devel/py-pyyaml@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scp>=0.13.2:security/py-scp@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>=1.12:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sshtunnel>=0.1.4:net/py-sshtunnel@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}urllib3>=1.18:net/py-urllib3@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}websocket-client>=0.56.0:www/py-websocket-client@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}xmltodict>=0.12:devel/py-xmltodict@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}javaproperties>=0.5.1:devel/py-javaproperties@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}jsondiff>=2.0.0:devel/py-jsondiff@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}semver>=2.13.0:devel/py-semver@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}PyGithub>=1.55:devel/py-PyGithub@${PY_FLAVOR}

USES=		azurepy python
USE_PYTHON=	autoplist concurrent cryptography distutils

NO_ARCH=	yes

PLIST_FILES=	${PYTHON_SITELIBDIR}/azure/cli/__main__.py

post-patch:
	@${REINPLACE_CMD} -e "s#python#${PYTHON_CMD}#g" ${WRKSRC}/az

.include <bsd.port.mk>

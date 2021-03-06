SUMMARY = "Simple module to parse ISO 8601 dates"
AUTHOR = "Michael Twomey"
HOMEPAGE = "https://bitbucket.org/micktwomey/pyiso8601"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=b05625f2336fa024e8d57e65c6595844"

PR = "r1"

SRC_NAME = "iso8601"

SRC_URI = "https://pypi.python.org/packages/source/i/${SRC_NAME}/${SRC_NAME}-${PV}.tar.gz"
SRC_URI[md5sum] = "b06d11cd14a64096f907086044f0fe38"
SRC_URI[sha256sum] = "e8fb52f78880ae063336c94eb5b87b181e6a0cc33a6c008511bac9a6e980ef30"

S = "${WORKDIR}/${SRC_NAME}-${PV}"

# $NetBSD$

DISTNAME=	ft2clone-${DISTVERSION}-code
PKGNAME=	ft2clone-${DISTVERSION}
DISTVERSION=	b120
CATEGORIES=	audio
MASTER_SITES=	https://16-bits.org/
EXTRACT_SUFX=	.zip

MAINTAINER=	fox@NetBSD.org
HOMEPAGE=	https://16-bits.org/
COMMENT=	Portable Fasttracker II clone in C using SDL 2
LICENSE=	modified-bsd AND cc-by-nc-sa-v3.0-license

WRKSRC=		${WRKDIR}/ft2-clone-code
USE_LANGUAGES=	c c++

LIBS+=		${BUILDLINK_LDADD.iconv}
CXXFLAGS+=	-D__LINUX_ALSA__
LDFLAGS+=	-lSDL2 -lpthread -lstdc++ -lm -liconv

INSTALLATION_DIRS+=	bin share/pixmaps

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} \
		${WRKSRC}/src/rtmidi/*.cpp ${WRKSRC}/src/gfxdata/*.c ${WRKSRC}/src/*.c \
		-o ${WRKSRC}/release/other/ft2-clone

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/release/other/ft2-clone \
		${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/src/gfxdata/icon/ft2-clone.ico \
		${DESTDIR}${PREFIX}/share/pixmaps

.include "../../devel/SDL2/buildlink3.mk"
.include "../../converters/libiconv/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"

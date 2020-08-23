# $FreeBSD$

PACKAGE=	lib${LIB}
LIB=		route
INTERNALLIB=	true

SHLIBDIR?=	/lib
SHLIB_MAJOR=	1
SRCS=		libroute.c

MAN=		libroute.3

CFLAGS+= -I${.CURDIR}
NO_WCAST_ALIGN= yes

.include <bsd.lib.mk>

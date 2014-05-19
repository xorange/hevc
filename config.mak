SRCPATH=.
ARCH=X86
SYS=LINUX
CC=gcc
CFLAGS= -Wshadow -DHIGH_BIT_DEPTH=0 -O3 -ffloat-store -m32 -Wuninitialized -Wall -I. -I$(SRCPATH) -march=i686 -mfpmath=sse -msse -std=gnu99 -fno-tree-vectorize
DEPMM=-MM
DEPMT=-MT
LD=gcc -o
LDFLAGS = -m32 -lm -lpthread
AR=ar rc
RANLIB=ranlib
STRIP=strip
AS=yasm
ASFLAGS= DWARF2 -f elf -DHIGH_BIT_DEPTH=0 -DBIT_DEPTH=8
RC=
RCFLAGS=
EXE=
LIBX265=libx265.a

PURE_C_IMPLEMENTED=1


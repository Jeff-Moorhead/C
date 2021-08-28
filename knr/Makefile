SOURCES := $(wildcard *.c)
BINS := $(SOURCES:%.c=%)
GCC := gcc -o

all: ${BINS}

%: %.c
	${GCC} $@ $<


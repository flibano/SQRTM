INCLUDES=-I/usr/local/opt/lapack/include \
	-I/usr/local/opt/openblas/include
LIBRARIES=/usr/local/opt/lapack/lib/liblapack.dylib \
	/usr/local/opt/openblas/lib/libopenblas.dylib
SOURCES=lib.c

PROGRAM?=sqrtm

all: build run

build: $(SOURCES) $(PROGRAM).c
	gcc $(INCLUDES) $(LIBRARIES) $(SOURCES) $(PROGRAM).c -o $(PROGRAM).native

run: $(PROGRAM).native
	./$(PROGRAM).native

clean:
	rm *.native

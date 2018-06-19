BINDIR = bin
SRCDIR = src
INCLUDEDIR = include
APPDIR = application
OBJDIR = build
LIBDIR = lib

CC = g++
CFLAGS = -Wall -std=c++11 -pedantic -I $(INCLUDEDIR)
AR = ar

all: mbasic.a mbasic.so mbasic_estatico mbasic_dinamico

mbasic.a: $(SRCDIR)/MathBasic.cpp $(INCLUDEDIR)/MathBasic.hpp
	$(CC) $(CFLAGS) -c $(SRCDIR)/MathBasic.cpp -o $(OBJDIR)/MathBasic.o
	$(AR) rcs $(LIBDIR)/$@ $(OBJDIR)/MathBasic.o
	@echo "+++ [Biblioteca estatica criada em $(LIBDIR)/$@] +++"

mbasic.so: $(SRCDIR)/MathBasic.cpp $(INCLUDEDIR)/MathBasic.hpp
	$(CC) $(CFLAGS) -fPIC -c $(SRCDIR)/MathBasic.cpp -o $(OBJDIR)/MathBasic.o
	$(CC) -shared -fPIC -o $(LIBDIR)/$@ $(OBJDIR)/MathBasic.o
	@echo "+++ [Biblioteca dinamica criada em $(LIBDIR)/$@] +++"

mbasic_estatico:
	$(CC) $(CFLAGS) $(APPDIR)/main.cpp $(LIBDIR)/mbasic.a -o $(OBJDIR)/$@

mbasic_dinamico:
	$(CC) $(CFLAGS) $(APPDIR)/main.cpp $(LIBDIR)/mbasic.so -o $(OBJDIR)/$@

clean:
	@echo "Removendo arquivos objeto e executaveis/binarios..."
	@rm -rf $(OBJDIR)/*

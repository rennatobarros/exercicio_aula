BINDIR = bin
SRCDIR = src
INCLUDEDIR = include
APPDIR = application
OBJDIR = build
LIBDIR = lib

CC = g++
CFLAGS = -Wall -std=c++11 -pedantic -I $(INCLUDEDIR)
AR = ar

all: mbasic.a mbasic.so contas.a contas.so produtos.a produtos.so main.o estatico dinamico

mbasic.a: 
	$(CC) $(CPPFLAGS) -c $(SRC)/mathbasic.cpp -o $(OBJ)/mathbasic.o
	$(AR) rcs $(LIB)/$@ $(OBJ)/mathbasic.o
	@echo "Biblioteca estatica criada em LIB !!"

mbasic.so:
	$(CC) $(CPPFLAGS) -fPIC -c $(SRC)/mathbasic.cpp -o $(OBJ)/mathbasic.o
	$(CC) -shared -fPIC -o $(LIB)/$@ $(OBJ)/mathbasic.o
	@echo "Biblioteca dinamica criada em LIB !!"

contas.a:
	$(CC) $(CPPFLAGS) -c $(SRC)/conta.cpp -o $(OBJ)/conta.o
	$(AR) rcs $(LIB)/$@ $(OBJ)/conta.o
	@echo "Biblioteca estatica criada em LIB !!"

contas.so:
	$(CC) $(CPPFLAGS) -fPIC -c $(SRC)/conta.cpp -o $(OBJ)/conta.o
	$(CC) -shared -fPIC -o $(LIB)/$@ $(OBJ)/conta.o
	@echo "Biblioteca dinamica criada em LIB !!"	

produtos.a:
	$(CC) $(CPPFLAGS) -c $(SRC)/produto.cpp -o $(OBJ)/produto.o
	$(CC) $(CPPFLAGS) -c $(SRC)/bebida.cpp -o $(OBJ)/bebida.o
	$(CC) $(CPPFLAGS) -c $(SRC)/fruta.cpp -o $(OBJ)/fruta.o
	$(AR) rcs $(LIB)/$@ $(OBJ)/produto.o $(OBJ)/bebida.o $(OBJ)/fruta.o 
	@echo "Biblioteca estatica criada em LIB !!"	

produtos.so:
	$(CC) $(CPPFLAGS) -fPIC -c $(SRC)/produto.cpp -o $(OBJ)/produto.o
	$(CC) $(CPPFLAGS) -fPIC -c $(SRC)/bebida.cpp -o $(OBJ)/bebida.o
	$(CC) $(CPPFLAGS) -fPIC -c $(SRC)/fruta.cpp -o $(OBJ)/fruta.o
	$(CC) -shared -fPIC -o $(LIB)/$@ $(OBJ)/produto.o $(OBJ)/bebida.o $(OBJ)/fruta.o
	@echo "Biblioteca dinamica criada em LIB !!"

main.o:
	$(CC) $(CPPFLAGS) -c $(APPDIR)/main.cpp -o $(OBJ)/main.o

estatico: 
	$(CC) $(CPPFLAGS) $(OBJ)/main.o $(LIB)/mbasic.a $(LIB)/contas.a $(LIB)/produtos.a -o $(BIN)/$@

dinamico:
	sudo mv $(LIB)/*.so $(NEW_LIB)
	$(CC) $(CPPFLAGS) $(OBJ)/main.o $(NEW_LIB)/mbasic.so $(NEW_LIB)/contas.so $(NEW_LIB)/produtos.so -o $(BIN)/$@

clean:
	rm -r $(OBJ)
	rm -r $(BIN)
	rm -r $(LIB)
	rm -r $(DOC)
	sudo rm $(NEW_LIB)/contas.so $(NEW_LIB)/produtos.so $(NEW_LIB)/mbasic.so 
	rm -f core $(PROG) $(OBJS)
	@echo "Arquivo objetos,binarios e bibliotecas removidos!!" 
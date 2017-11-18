SRC = src
INC = include
OBJ = obj
BIN = bin
CXX = g++
CPPFLAGS = -Wall -g  -I$(INC) -c

all: $(BIN)/usocolas $(BIN)/usopilas_max

$(BIN)/usocolas: $(OBJ)/usocolas.o
	$(CXX) -o $(BIN)/usocolas $(OBJ)/usocolas.o

$(BIN)/usopilas_max: $(OBJ)/usopilas_max.o $(OBJ)/pila_max_vd.o
	$(CXX) -o $(BIN)/usopilas_max $(OBJ)/usopilas_max.o $(OBJ)/pila_max_vd.o

#$(BIN)/usopilas_max: $(OBJ)/usopilas_max.o $(OBJ)/pila_max_lista.o
#	$(CXX) -o $(BIN)/usopilas_max $(OBJ)/usopilas_max.o $(OBJ)/pila_max_lista.o

# ************ Generación de módulos ******************

$(OBJ)/usocolas.o: $(SRC)/usocolas.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/usocolas.cpp -o $(OBJ)/usocolas.o -I$(INC)

$(OBJ)/usopilas_max.o: $(SRC)/usopilas_max.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/usopilas_max.cpp -o $(OBJ)/usopilas_max.o -I$(INC)

$(OBJ)/pila_max_vd.o: $(SRC)/pila_max_vd.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/pila_max_vd.cpp  -o $(OBJ)/pila_max_vd.o -I$(INC)

$(OBJ)/pila_max_lista.o: $(SRC)/pila_max_lista.cpp
	$(CXX) $(CPPFLAGS)  $(SRC)/pila_max_lista.cpp  -o $(OBJ)/pila_max_lista.o -I$(INC)

# ************ Generación de documentación ******************
documentacion:
	doxygen doc/doxys/Doxyfile

# ************ Limpieza ************
clean :
	-rm $(OBJ)/* $(SRC)/*~ $(INC)/*~ ./*~

mrproper : clean
	-rm $(BIN)/* doc/html/*

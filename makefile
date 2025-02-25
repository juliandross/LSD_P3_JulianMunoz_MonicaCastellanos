#Variables
CFLAGS = -Wall -O2
SRC = main.c funciones.c funciones.h
OBJ = main.o funciones.o

#Reglas explicitas
all: $(OBJ)
	gcc $(CFLAGS) -o executable $(SRC)
clean:
	$(RM) $(OBJ) executable

#Reglas implicitas
main.o = main.c funciones.h
funciones.o: funciones.c
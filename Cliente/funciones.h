#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAX_CAD 50

typedef struct{
    char nombre[MAX_CAD];
    bool es_activado;
    bool es_libre;
}Cocinero;

typedef struct{
    int turno_asignado;
    char nombre_cocinero_asignado[MAX_CAD];
    int codigo;
}RespuestaDTO;


//recibe el nombre de la hamburguesa y el vector de cocineros, posteriormente
//busca un cocinero activo y libre y lo retorna.
RespuestaDTO asignar_cocinero(char nombre_hamburguesa[MAX_CAD], Cocinero vect_cocineros[]);

//recibe un vector de cocineros y los pre-carga con estados de libre y activo.
void precargar_cocineros(Cocinero vect_cocineros[]);


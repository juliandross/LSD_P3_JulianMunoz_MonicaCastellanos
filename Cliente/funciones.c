#include <stdio.h>
#include "funciones.h"

int noTurno=1;

RespuestaDTO asignar_cocinero(char nombre_hamburguesa[MAX_CAD], Cocinero vect_cocineros[]){
    RespuestaDTO obj_respuesta;
    obj_respuesta.codigo=403;
    obj_respuesta.turno_asignado=noTurno;    
    noTurno++;
    for(int i = 0;i < 3;i++){
        if(vect_cocineros[i].es_activado==true && vect_cocineros[i].es_libre==true){
            strcpy(obj_respuesta.nombre_cocinero_asignado, vect_cocineros[i].nombre);
            vect_cocineros[i].es_libre=false;
            obj_respuesta.codigo=200;
            break;
        }
    }
    return obj_respuesta;
}

void precargar_cocineros(Cocinero vect_cocineros[]){
    Cocinero c1, c2, c3;
    c1.es_libre=false;
    c1.es_activado=false;
    strcpy(c1.nombre,"cocinero 1");

    c2.es_libre=true;
    c2.es_activado=true;
    strcpy(c2.nombre,"cocinero 2");

    c3.es_libre=true;
    c3.es_activado=true;
    strcpy(c3.nombre,"cocinero 3");

    vect_cocineros[0]=c1;
    vect_cocineros[1]=c2;
    vect_cocineros[2]=c3;
}
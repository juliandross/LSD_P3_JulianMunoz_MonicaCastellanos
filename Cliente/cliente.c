#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "funciones.h"

int main(){
    Cocinero vect_cocineros[3];
    precargar_cocineros(vect_cocineros);
    RespuestaDTO obj_respuesta;
    int opt;
    do{
        printf("\n1. Asignar cocinero \n2. Salir\n");
        scanf("%d", &opt);
        getchar();
        if(opt==2){
            printf("\n***\n");
            return 0;
        }

        char hamburguesa[MAX_CAD];
        
        if(opt==1){    
            printf("Digite el nombre de la hamburguesa: ");
            fgets(hamburguesa,MAX_CAD,stdin);
            strtok(hamburguesa, "\n");
            obj_respuesta = asignar_cocinero(hamburguesa, vect_cocineros);
        }
        
        if(obj_respuesta.codigo==200){
            printf("El cocinero %s esta activo y libre", obj_respuesta.nombre_cocinero_asignado);   
            printf("El turno asignado es %d \n", obj_respuesta.turno_asignado);
        }else{
            printf("No hay cocineros disponibles\n");
            printf("El turno asignado es %d \n", obj_respuesta.turno_asignado);
        }
    }while(opt==1);
    return 0;
}
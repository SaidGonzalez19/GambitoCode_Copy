#include <stdlib.h>
#include <string.h>
#include "movimientos.h"
#include "tablero.h"

Posicion convertir_notacion(char *notacion){
    Posicion pos;
    if(strlen(notacion)<2 || notacion[0]<'a' || notacion[0]>'h' || notacion[1]<'1' || notacion[1]>'8'){
        pos.fila=-1;
        pos.columna=-1;
        printf("Notacion invalida\n");
        return pos;
    }
    pos.columna=notacion[0]-'a'+1;
    pos.fila='9'-notacion[1];
    return pos;
}
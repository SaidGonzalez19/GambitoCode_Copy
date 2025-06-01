#ifndef MOVIMIENTOS_H
#define MOVIMIENTOS_H
#include "piezas.h"
//posicion en un tablero
typedef struct{
    int fila;
    int columna;
}Posicion;
//movimiento en el tablero
typedef struct{
    Posicion origne;
    Posicion destino;
}Movimiento;
#endif 
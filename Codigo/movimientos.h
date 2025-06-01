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
    Posicion origen;
    Posicion destino;
}Movimiento;
//Funciones
Posicion convertir_notacion(char *notacion);
int es_movimiento_valido(char tablero[10][10], Movimiento mov);
int validar_movimiento_peon(char tablero[10][10], Movimiento mov);
int validar_movimiento_torre(char tablero[10][10], Movimiento mov);
int validar_movimiento_caballo(char tablero[10][10], Movimiento mov);
int validar_movimiento_alfil(char tablero[10][10], Movimiento mov);
int validar_movimiento_dama(char tablero[10][10], Movimiento mov);
int validar_movimiento_rey(char tablero[10][10], Movimiento mov);
void ejecutar_movimiento(char tablero[10][10], Movimiento mov);
#endif 
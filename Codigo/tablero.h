#ifndef JUEGO_H
#define JUEGO_H
#define FILAS 10
#define COLUMNAS 10
typedef struct{
    char tablero[FILAS][COLUMNAS];
    int turno;
    int estado;
}EstadoJuego;

#endif 
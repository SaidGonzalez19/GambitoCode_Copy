#ifndef JUEGO_H
#define JUEGO_H
#define FILAS 10
#define COLUMNAS 10
typedef struct{
    char tablero[FILAS][COLUMNAS];
    int turno;
    int estado;
}EstadoJuego;
void inicializar_tablero(char tablero[FILAS][COLUMNAS]);
void mostrar_tablero(char tablero[FILAS][COLUMNAS]);
void limpiar_tablero(char tablero[FILAS][COLUMNAS]);
void colocar_pieza(char tablero[FILAS][COLUMNAS], int fila, int columna, char pieza);
char obtener_pieza(char tablero[FILAS][COLUMNAS], int fila, int columna);

#endif 
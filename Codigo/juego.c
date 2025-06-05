#include <stdlib.h>
#include <string.h>
#include "juego.h"
void inicializar_juego(EstadoJuego *juego){
    inicializar_tablero(juego->tablero);
    juego->turno=BLANCO;
    juego->estado=JUGANDO;
}
int procesar_turno(EstadoJuego *juego, char *entrada){
    char origen_str[3], destino_str[3];
    if (sscanf(entrada, "%s %s", origen_str, destino_str) != 2) {
        printf("Formato invalido. Use: 'e2 e4'\n");
        return 0;
    }
}
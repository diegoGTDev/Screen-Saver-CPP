#include "jugador.h"
#include "../roca/roca.h"
#include <iostream>
#include "../libs/funciones_basicas/funciones_basicas.h"
#include "../libs/constantes.h"
#include <windows.h>
#include<conio.h>
const int NIVEL_TIERRA = MAX_Y_MARCO;
void JUGADOR::dibujar(){
    char* jugador[2] = {"o","|"};

    for (int j = 0; j<2; j++){
        gotoxy(x,y+j);
        std::cout << jugador[j];
    }

}

void JUGADOR::mover(){
    for (int k = 0; k<2; k++){
        std::cout << " ";
    }
    x++;
}

void JUGADOR::caer(){
    for (int k = 0; k<2; k++){
        gotoxy(x,y+k);
        std::cout << " ";
    }
    y++;
    dibujar();

}

void JUGADOR::saltar(){
    for (int k = 0; k<2; k++){
        gotoxy(x,y+k);
        std::cout << " ";
    }
    y--;
    dibujar();
}
void JUGADOR::preColision(struct ROCA &ROCA){
    if (x+1 >= ROCA.x && x < ROCA.x){
        getch();
        saltar();
    }
}

void JUGADOR::estaSaltando(){

    if (y != 55 ){
        caer();
    }
}

#include "jugador.h"
#include "../roca/roca.h"
#include <iostream>
#include "../libs/funciones_basicas/funciones_basicas.h"
#include "../libs/constantes.h"
#include <windows.h>
#include<conio.h>
const int NIVEL_TIERRA = MAX_Y_MARCO;


void JUGADOR::dibujar(){
    char* jugador[2] = {"|","O"};

    for (int j = 0; j<2; j++){
        gotoxy(x,y-j);
        std::cout << jugador[j];
    }

}

void JUGADOR::mover(){
    for (int k = 0; k<2; k++){
        std::cout << " ";
    }
    x++;
    dibujar();
}

void JUGADOR::caer(){

    if(estaEnElAire){
        for (int k = 0; k<2; k++){
            gotoxy(x,y-k);
            std::cout << " ";
        }
        y += dy;
        dibujar();
        dy += 1;
        if (y >= NIVEL_TIERRA){
            y = NIVEL_TIERRA;
            dy = 0;
            estaEnElAire = false;
                    for (int k = 0; k<2; k++){
            gotoxy(x,y-k);
            std::cout << " ";
        }         
            dibujar();
        }
    }


}

void JUGADOR::saltar(){
    if (!estaEnElAire){        
        dy = -2;
        estaEnElAire = true;
    }
}
void JUGADOR::preColision(struct ROCA &ROCA){
    if (x+1 >= ROCA.x && x < ROCA.x){
        saltar();
    }
}


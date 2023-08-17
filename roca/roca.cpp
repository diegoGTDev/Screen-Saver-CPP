#include "../libs/funciones_basicas/funciones_basicas.h"
#include "../libs/constantes.h"
#include "./roca.h"
#include "conio.h"
#include<iostream>
void ROCA::dibujar(){
    gotoxy(x, y);
    printf("%c%c", 219, 220);

}

void ROCA::mover(){
    gotoxy(x, y);
    std::cout<<"   ";
    x--;
    dibujar();
}

int ROCA::getX(){
    return x;
}

void ROCA::estaEnLimite(){
    const int limite = MIN_X_MARCO;
    if (x >=limite && x <= limite){
        gotoxy(x, y);
        std::cout<<"  ";
        if (x== limite){

            x = inicialX;
        }
    }
}

void ROCA::crearOtraRoca(struct ROCA &ROCA){
    const int _MAX_X = MAX_X
    if (ROCA.getX() < _MAX_X-40){
        dibujar();

    }
}

void ROCA::setX(int _x){
    inicialX = _x;
}

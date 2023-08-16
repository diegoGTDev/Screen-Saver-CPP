#include "../libs/funciones_basicas/funciones_basicas.h"
#include "./roca.h"
#include<iostream>
void ROCA::dibujar(){
    gotoxy(x, y);
    printf("%c%c", 219, 220);
    // printf("%d", getX());

}

void ROCA::mover(){
        if (x < 7){
        return;
    }
    gotoxy(x, y);
    std::cout<<"   ";
    x--;
    dibujar();
}

int ROCA::getX(){
    return x;
}

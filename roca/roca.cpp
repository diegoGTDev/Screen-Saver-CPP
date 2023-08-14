#include "../libs/funciones_basicas/funciones_basicas.h"
#include "./roca.h"
#include<iostream>
void ROCA::dibujar(){
    const char rock[3] = "/\\";
    gotoxy(x, y);
    std::cout<<rock;

}

void ROCA::mover(){
        if (x < 7){
        return;
    }
    gotoxy(x, y);
    std::cout<<"  ";
    x--;
    dibujar();
}

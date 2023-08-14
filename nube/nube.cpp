#include "../libs/funciones_basicas/funciones_basicas.h"
#include "nube.h"
#include<iostream>
void NUBE::dibujar(){
     char* cloud[4] ={"   __   _",
                         " _(  )_( )_",
                         "(_   _    _)",
                         "  (_) (__)"};
    for (int i = 0; i < 4; i++) {
        gotoxy(x, y+i);
        std::cout<<cloud[i];
    }
}


void NUBE::mover(){

    if (x < 7){
        return;
    }
    for (int i = 0; i < 4; i++) {
        gotoxy(x,y+i);
        std::cout<<"            ";
    }
    x--;
    dibujar();
}
#include "../libs/funciones_basicas/funciones_basicas.h"
#include "../libs/constantes.h"
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

    for (int i = 0; i < 4; i++) {
        gotoxy(x,y+i);
        std::cout<<"            ";
    }
    x--;
    dibujar();
}

void NUBE::estaEnLimite(){
    const int limite = MIN_X_MARCO;
    if (x >=limite && x <= limite){
        for (int i = 0; i < 4; i++) {
            gotoxy(x,y+i);
            std::cout<<"            ";
        }
        if (x== limite){

            x = inicialX;
        }
    }
}

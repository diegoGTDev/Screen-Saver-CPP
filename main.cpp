#include <iostream>
#include <conio.h>
#include "libs/funciones_basicas/funciones_basicas.h"
#include "libs/constantes.h"
#include<stdlib.h>
#include "roca/roca.h"
#include "nube/nube.h"
#include "jugador/jugador.h"
#include <windows.h>
using namespace std;


int main() {
    maximizarConsola();
    
    //Constantes
    const int _TIME = TIME;
    const int _MAX_X = MAX_X;
    const int _MAX_Y = MAX_Y;
    const int _MAX_X_MARCO = MAX_X_MARCO;
    const int _MAX_Y_MARCO = MAX_Y_MARCO;
    const int _MIN_X_MARCO = MIN_X_MARCO;
    const int _MIN_Y_MARCO = MIN_Y_MARCO;
    //Variables
    int counter = 0;
    int new_x = 0;

    
    system("title Screen Saver");
    system("cls");
    system("color 3e");
    escribirAlgoritmos();
    Sleep(500);
    dibujarMargen(0,0, _MAX_X, _MAX_Y);
    Sleep(500);
    NUBE nube1(_MAX_X_MARCO-9, _MIN_Y_MARCO); 
    NUBE nube2(_MAX_X_MARCO-9-30, _MIN_Y_MARCO+7); 
    NUBE nube3(_MAX_X_MARCO-9-20, _MIN_Y_MARCO); 
    NUBE nube4(_MAX_X_MARCO-55, _MIN_Y_MARCO+5); 
    ROCA roca1(_MAX_X_MARCO, _MAX_Y_MARCO); 
    ROCA roca2(_MAX_X_MARCO-15, _MAX_Y_MARCO); 
    ROCA roca3(_MAX_X_MARCO-33, _MAX_Y_MARCO); 
    JUGADOR jugador(_MIN_X_MARCO+30, _MAX_Y_MARCO); 
    //Nubes
    nube1.dibujar();
    nube2.dibujar();
    nube3.dibujar();
    nube4.dibujar();
    
    //Roca
    roca1.dibujar();
    roca2.dibujar();
    roca3.dibujar();
    
    //Jugador
    jugador.dibujar();
    while(true){
        roca1.mover();
        roca2.mover();
        roca3.mover();
        roca2.estaEnLimite();
        roca3.estaEnLimite();
        roca1.estaEnLimite();
        nube1.mover();
        nube2.mover();
        nube2.estaEnLimite();
        nube3.mover();
        nube3.estaEnLimite();
        nube1.estaEnLimite();
        nube4.mover();
        nube4.estaEnLimite();
        jugador.caer();
        jugador.preColision(roca2);
        jugador.preColision(roca1);
        jugador.preColision(roca3);
        Sleep(_TIME);
    }
    system("pause");
    return 0;

}

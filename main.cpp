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
    char* colores[7] = {"color 2f", "color e0", "color 3e", "color 40", "color 17", "color 60", "color d7"};
    char* nombres[3] =  {"Diego", "Jose", "Otro"};
    char* nombre;
    
    system("title Screen Saver");
    system("cls");
    system("color 3e");
    escribirAlgoritmos();
    
    dibujarMargen(0,0, _MAX_X, _MAX_Y);
    NUBE nube(_MAX_X_MARCO-9, _MIN_Y_MARCO);
    NUBE nube2(_MAX_X_MARCO-9-30, _MIN_Y_MARCO+10);
    NUBE nube3(130, _MIN_Y_MARCO+15);
    NUBE nube4(60, _MIN_Y_MARCO);
    NUBE nube5(165, _MIN_Y_MARCO+5);
    NUBE nube6(70, _MIN_Y_MARCO+12);
    ROCA roca(_MAX_X_MARCO, _MAX_Y_MARCO);
    JUGADOR jugador(_MIN_X_MARCO+30, _MAX_Y_MARCO);
    //Nubes
    nube.dibujar();
    nube2.dibujar();
    nube3.dibujar();
    nube4.dibujar();
    nube5.dibujar();
    nube6.dibujar();
    //Roca
    roca.dibujar();
    //Jugador
    jugador.dibujar();
    while(true){
        roca.mover();
        roca.estaEnLimite();
        nube.mover();
        nube2.mover();
        nube2.estaEnLimite();
        nube3.mover();
        nube3.estaEnLimite();
        nube4.mover();
        nube4.estaEnLimite();
        nube5.mover();
        nube5.estaEnLimite();
        nube6.mover();
        nube6.estaEnLimite();
        nube.estaEnLimite();
        jugador.caer();
        jugador.preColision(roca);
        Sleep(_TIME);
    }
    system("pause");
    return 0;

}

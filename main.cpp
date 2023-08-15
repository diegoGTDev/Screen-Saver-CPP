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

    dibujarMargen(0,0, _MAX_X, _MAX_Y);
    NUBE nube(_MAX_X_MARCO-9, _MIN_Y_MARCO);
    ROCA roca(_MAX_X_MARCO, _MAX_Y_MARCO);
    JUGADOR jugador(_MIN_X_MARCO+190, _MAX_Y_MARCO);
    gotoxy(50, 56);
    cout <<"caca";
    getch();
    nube.dibujar();
    roca.dibujar();
    jugador.dibujar();
    while(true){
        //nombre = nombres[counter];
        //system(colores[rand()%7]);
        //dibujar(nombre);
        roca.mover();
        nube.mover();
        jugador.caer();
        jugador.preColision(roca);
        Sleep(_TIME);
        counter++;
        if (counter == 3){
            counter = 0;
        }
    }
    system("pause");
    return 0;

}

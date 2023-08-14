#include <iostream>
#include <conio.h>
#include "libs/funciones_basicas/funciones_basicas.h"
#include "libs/dibujos/dibujos.h"
#include<stdlib.h>
using namespace std;


int main() {
    maximizarConsola();

    int max_x = MAX_X;
    int max_y = MAX_Y;
    int counter = 0;
    char* colores[7] = {"color 2f", "color e0", "color 3e", "color 40", "color 17", "color 60", "color d7"};
    char* nombres[3] =  {"Diego", "Jose", "Otro"};
    char* nombre;

    system("title Screen Saver");
    system("cls");

    dibujarMargen(0,0, max_x, max_y);
    printRock();

    while(!kbhit()){
        nombre = nombres[counter];
        system(colores[rand()%7]);
        //dibujar(nombre);
        //printPlayer();
        printCloud(max_x-17, max_y);
        counter++;
        if (counter == 3){
            counter = 0;
        }
    }
    system("pause");
    return 0;

}

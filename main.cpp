#include <iostream>
#include <conio.h>
#include "funciones.cpp"

using namespace std;

void printCloud(int x,int y){
    const char* cloud[4] ={"   __   _",
                         " _(  )_( )_",
                         "(_   _    _)",
                         "  (_) (__)"};
    for (int i = 0; i < 4; ++i) {
        gotoxy(x, 6+i);
        cout<<cloud[i];
    }
    Sleep(100);
    for (int i = 0; i < 4; ++i) {
        gotoxy(x, 6+i);
        cout<<"            ";
    }
    Sleep(100);
    if (x > 6){
        printCloud(x-1, y);
    }
    return;
}
void printRock(){
    const char rock[3] = "/\\";
    const int max_y = MAX_Y;
    const int max_x = MAX_X;
    gotoxy(max_x - 8, max_y-7);
    cout<<rock;

}
void printPlayer(){
    const char* player[4] = {"/ \\", "###", "| |", "###"};
    const int max_y = MAX_Y;
    const int max_x = MAX_X;
    for (int i = 0; i < 4; i++) {
        gotoxy(max_x-8, max_y-7-i);
        cout<<player[i];
    }

}
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

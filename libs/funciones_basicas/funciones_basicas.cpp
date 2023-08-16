#include "funciones_basicas.h"
#include <iostream>
#include <windows.h>
#include "../constantes.h"
using namespace std;
int* obtenerMedidasConsola(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(hConsole, &csbi);

    int consoleWidth = csbi.srWindow.Right - csbi.srWindow.Left ;
    int consoleHeight = csbi.srWindow.Bottom - csbi.srWindow.Top ;

    return new int[2]{consoleWidth, consoleHeight};
}

void maximizarConsola(){
    HWND console = GetConsoleWindow();
    ShowWindow(console, SW_MAXIMIZE);
}
void gotoxy(int x,int y)
{ HANDLE hcon;

    hcon = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD dwPos; dwPos.X = x; dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);

}


void escribirAlgoritmos(){
    const char* palabra[11] = {
        "          $$\\                               $$\\   $$\\                                ",
"          $$ |                              \\__|  $$ |         ",  
" $$$$$$\\  $$ | $$$$$$\\   $$$$$$\\   $$$$$$\\  $$\\ $$$$$$\\   $$$$$$\\$$$$\\   $$$$$$\\   $$$$$$$\\ ",   
" \\____$$\\ $$ |$$  __$$\\ $$  __$$\\ $$  __$$\\ $$ |\\_$$  _|  $$  _$$  _$$\\ $$  __$$\\ $$  _____|",  
" $$$$$$$ |$$ |$$ /  $$ |$$ /  $$ |$$ |  \\__|$$ |  $$ |    $$ / $$ / $$ |$$ /  $$ |\\$$$$$$\\  ", 
"$$  __$$ |$$ |$$ |  $$ |$$ |  $$ |$$ |      $$ |  $$ |$$\\ $$ | $$ | $$ |$$ |  $$ | \\____$$\\ ",
"\\$$$$$$$ |$$ |\\$$$$$$$ |\\$$$$$$  |$$ |      $$ |  \\$$$$  |$$ | $$ | $$ |\\$$$$$$  |$$$$$$$  |",
" \\_______|\\__| \\____$$ | \\______/ \\__|      \\__|   \\____/ \\__| \\__| \\__| \\______/ \\_______/ ",
"              $$\\   $$ |                                                                    ",
"              \\$$$$$$  |                                                                    ",
"               \\______/  "
    };
    //Escribir la palabra en consola con gotoxy
    int x = 100;
    int y = 40;
    for(int i = 0; i <= 10; i++){
        gotoxy(x,y);
        cout<<palabra[i];
        y++;
    }


}


//Funcion para imprimir el margen
void imprimir(int x, int y, char* w){
    const int _TIME = 0.999;
    gotoxy(x,y);
    cout<<w;
    Sleep(_TIME);
}

//Dibujamos un margen al rededor de la consola
void dibujarMargen(int x,int y, int max_x, int max_y){

    for(int i = 0; i < max_x; i++){
        imprimir(x,y, "#");
        x++;
    }
    for(int i = 0; i < max_y; i++){
        imprimir(x,y, "#");
        y++;
    }
    for(int i = 0; i < max_x; i++){
        imprimir(x,y, "#");
        x--;
    }
    for(int i = 0; i < max_y; i++){
        imprimir(x,y, "#");
        y--;
    }

    if (x <= 4 && y <= 4){
        dibujarMargen(x+1,y+1,max_x-2, max_y-2);
    }
    return;
}

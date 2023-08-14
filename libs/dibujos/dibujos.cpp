#include<iostream>
#include<windows.h>
using namespace std;
#include "../funciones_basicas/funciones_basicas.h";
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
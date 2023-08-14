//Declaramos
//Constantes del programa
#define MAX_X obtenerMedidasConsola()[0];
#define MAX_Y obtenerMedidasConsola()[1];
#define TIME 5;
#define MAX_X_MARCO 1;
#define MAX_Y_MARCO 1;
int* obtenerMedidasConsola();
void maximizarConsola();
void gotoxy(int x,int y);
void escribir(int x,int y, int time, char* w);
void dibujar(char* w);
void imprimir(int x, int y, char* w);
void dibujarMargen(int x,int y, int max_x, int max_y);

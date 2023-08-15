#include "objeto.h"
#include "../libs/constantes.h"

const int _MIN_X = MIN_X_MARCO;
bool OBJETO::colisionLimite(){
    if (x >= _MIN_X && x <= _MIN_X+1){
        return true;
    }
    return false;
}
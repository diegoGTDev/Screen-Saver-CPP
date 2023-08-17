#include "../libs/constantes.h"
class ROCA{ 
  public:
    
    ROCA(int _x, int _y){
      x = _x;
      y = _y;
      inicialX = MAX_X_MARCO;
      inicialY = _y;

    }
    void dibujar();
    void mover();
    void estaEnLimite();
    void crearOtraRoca(struct ROCA &roca);
    int getX();
    void setX(int _x);
    private:
      int x, y;
      int inicialX, inicialY;
      

};


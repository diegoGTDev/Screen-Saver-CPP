#include "../objeto/objeto.h"
class ROCA: public OBJETO{ 
  public:
    ROCA(int _x, int _y) : OBJETO(_x, _y){}
    void dibujar();
    void mover();  
};
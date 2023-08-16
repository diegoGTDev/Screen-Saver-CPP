
class ROCA{ 
  public:
    
    ROCA(int _x, int _y){
      x = _x;
      y = _y;
      inicialX = _x;
      inicialY = _y;
      state = false;
    }
    void dibujar();
    void mover();
    void estaEnLimite();
    void borrarEnLimite();
    void crearOtraRoca(struct ROCA &roca);
    bool getState();
    int getX();
    private:
      int x, y;
      bool state;
      int inicialX, inicialY;
      

};


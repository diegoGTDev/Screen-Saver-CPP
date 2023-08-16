class ROCA{ 
  public:
    
    ROCA(int _x, int _y){
      x = _x;
      y = _y;
      inicialX = _x;
      inicialY = _y;
    }
    void dibujar();
    void mover();
    void estaEnLimite();
    void borrarEnLimite();
    int getX();
    private:
      int x, y;
      int inicialX, inicialY;

};
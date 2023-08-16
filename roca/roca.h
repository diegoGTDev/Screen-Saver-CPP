class ROCA{ 
  public:
    
    ROCA(int _x, int _y){
      x = _x;
      y = _y;
    }
    void dibujar();
    void mover();
    int getX();
    private:
      int x, y;

};
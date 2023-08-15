class OBJETO{
    
    public :
        int x, y;
        OBJETO(int _x , int _y) : x(_x), y(_y){}
    void mover();
    void dibujar();
    bool colisionLimite();
};
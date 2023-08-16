class NUBE{
    int x, y;
    int inicialX, inicialY;

    public:
        NUBE(int _x, int _y) : x(_x) , y(_y), inicialX(_x), inicialY(_y) {}
        void dibujar();
        void mover();
        void estaEnLimite();
};

class JUGADOR{
    int x, y;
    int dy = 0;
    bool estaEnElAire = false;
    public:
        JUGADOR(int _x, int _y){
            x = _x;
            y = _y;
        }
        void dibujar();
        void mover();
        void saltar();
        void caer();
        void preColision(struct ROCA &roca);
};
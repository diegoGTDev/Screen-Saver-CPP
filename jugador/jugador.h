
class JUGADOR{
    int x, y;
    int dy = 0;
    bool estaEnElAire = false;
    int NIVEL_TIERRA;
    public:
        JUGADOR(int _x, int _y){
            x = _x;
            y = _y;
            NIVEL_TIERRA = _y;
        }
        void dibujar();
        void mover();
        void saltar();
        void caer();
        void preColision(struct ROCA &roca);
};
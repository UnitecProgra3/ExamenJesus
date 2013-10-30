#ifndef MAGOOSCURO_H
#define MAGOOSCURO_H

#include "Personaje.h"


class Magooscuro : public Personaje
{
    public:
        bool super_rayo_activado;
        Magooscuro(int hp,int puntos_de_ataque);
        void imprimir();
        void activarPoder();
        void atacar(Personaje* p);
        virtual ~Magooscuro();
    protected:
    private:
};

#endif // MAGOOSCURO_H

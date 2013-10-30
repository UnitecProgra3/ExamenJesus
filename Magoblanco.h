#ifndef MAGOBLANCO_H
#define MAGOBLANCO_H

#include "Personaje.h"


class Magoblanco : public Personaje
{
    public:
        Magoblanco(int hp,int puntos_de_ataque);
        void imprimir();
        void activarPoder();
        virtual ~Magoblanco();
    protected:
    private:
};

#endif // MAGOBLANCO_H

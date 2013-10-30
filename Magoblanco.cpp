#include "Magoblanco.h"

Magoblanco::Magoblanco(int hp,int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="Mago Blanco";
}
void Magoblanco::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}
void Magoblanco::activarPoder()
{
    this->hp = (hp*2);
    this->puntos_de_ataque = (puntos_de_ataque/2);
}

Magoblanco::~Magoblanco()
{
    //dtor
}

#include "Magooscuro.h"

Magooscuro::Magooscuro(int hp,int puntos_de_ataque)
{
    this->hp=hp;
    this->puntos_de_ataque=puntos_de_ataque;
    this->tipo="Mago Blanco";
    this->super_rayo_activado = false;
}
void Magooscuro::imprimir()
{
    cout<<"HP: "<<hp<<endl;
    cout<<"Puntos de ataque: "<<puntos_de_ataque<<endl;
    cout<<"Tipo: "<<tipo<<endl;
}

void Magooscuro::activarPoder()
{
    this->super_rayo_activado=true;
}
void Magooscuro::atacar(Personaje* p){
if(super_rayo_activado==true){
p->recibirAtaque((puntos_de_ataque)*2);
}else{
p->recibirAtaque(puntos_de_ataque);
}
}
Magooscuro::~Magooscuro()
{
    //dtor
}

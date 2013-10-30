#include <iostream>
#include <vector>
using namespace std;

#include "Personaje.h"
#include "Curador.h"
#include "Tanque.h"
#include "Guerrero.h"
#include "Magoblanco.h"
#include "Magooscuro.h"

int main()
{
    vector<Personaje*>personajes;


    personajes.push_back(new Curador(70,10,15));
    personajes.push_back(new Tanque(200,3));
    personajes.push_back(new Guerrero(100,20));
    personajes.push_back(new Magoblanco(120,30));
    personajes.push_back(new Magooscuro(120,30));
  //  personajes[4]->activarPoder();
  //  personajes[4]->atacar(personajes[3]);
  //  personajes[3]->imprimir();
    cout<<"--------------"<<endl;
    personajes[2]->activarPoder();
    personajes[2]->imprimir();
    cout<<"--------------"<<endl;
    personajes[3]->activarPoder();
    personajes[3]->imprimir();
    return 0;
}

#ifndef ATACANTE_H
#define ATACANTE_H

#include <iostream>
#include <string>
#include "Jogador.h"

class Atacante : public Jogador{

private:
    int velocidade;
    int tecnica; 
public:

    Atacante();

    Atacante(string nome,int idade,int habilidades,int gols,int camisa,int velocidade, int tecnica);

    int getHabilidade();

    void printCard();

};






#endif //ATACANTE_H
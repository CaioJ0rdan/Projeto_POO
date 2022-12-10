#ifndef GOLEIRO_H
#define GOLEIRO_H

#include <iostream>
#include <string>
#include "Jogador.h"

class Goleiro : public Jogador{

private:
    int reflexos;
    float altura; 
public:

    Goleiro();

    Goleiro(string nome,int idade,int habilidade,int gols,int camisa,int reflexos, float altura);

    int getHabilidade();

    void printCard();
};






#endif //GOLEIRO_H
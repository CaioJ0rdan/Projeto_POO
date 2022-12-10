#ifndef ZAGUEIRO_H
#define ZAGUEIRO_H

#include <iostream>
#include <string>
#include "Jogador.h"

class Zagueiro : public Jogador{

private:
    int cobertura;
    float desarme; 
public:

    Zagueiro();

    Zagueiro(string nome,int idade,int habiidade,int gols,int camisa,int cobertura,int desarme);

    int getHabilidade();

    void printCard();
};






#endif //ZAGUEIRO_H
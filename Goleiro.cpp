#include "Goleiro.h"

Goleiro::Goleiro() : Jogador() {
    reflexos = 0;
    altura = 0;
}

Goleiro::Goleiro(string nome,int idade,int habilidades,int gols,int camisa,int reflexos, float altura)  : Jogador(nome,idade,habilidades,gols,camisa){
    this->reflexos = reflexos;
    this->altura = altura;
}

int Goleiro::getHabilidade(){
    return ((Jogador::GetHabilidade()*5) + (((int)(altura*100))*2) + (reflexos*3))/10;
}

                
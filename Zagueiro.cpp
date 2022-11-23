#include "Zagueiro.h"

Zagueiro::Zagueiro() : Jogador() {
    cobertura = 0;
    desarme = 0.0;
}

Zagueiro::Zagueiro(string nome,int idade,int habilidades,int gols,int camisa,int cobertura, int desarme)  : Jogador(nome,idade,habilidades,gols,camisa){
    this->cobertura = cobertura;
    this->desarme = desarme;
}

int Zagueiro::getHabilidade(){
    return ((Jogador::GetHabilidade()*5)+(desarme*2)+(cobertura*3))/10;
}

                
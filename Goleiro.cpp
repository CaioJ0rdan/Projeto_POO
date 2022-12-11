#include "Goleiro.h"

Goleiro::Goleiro() : Jogador() {
    reflexos = 0;
    altura = 0;
    SetPosicao("Goleiro");
}

Goleiro::Goleiro(string nome,int idade,int habilidades,int gols,int camisa,int reflexos, float altura)  : Jogador(nome,idade,habilidades,gols,camisa,"Goleiro"){
    this->reflexos = reflexos;
    this->altura = altura;
}

int Goleiro::getHabilidade(){
    return ((Jogador::GetHabilidade()*5) + (((int)(altura*100))*2) + (reflexos*3))/10;
}

void Goleiro::printCard(){
    cout << "Nome: " << GetNome() << endl;
    cout << "Posição: Goleiro" << endl; 
    cout << "Idade: " << GetIdade() << endl;
    cout << "Camisa: " << GetCamisa() << endl;
    cout << "Habilidade: " << GetHabilidade() << endl;
}           
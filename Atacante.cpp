#include "Atacante.h"

Atacante::Atacante() : Jogador() {
    velocidade = 0;
    tecnica = 0;
}

Atacante::Atacante(string nome,int idade,int habilidades,int gols,int camisa,int velocidade, int tecnica)  : Jogador(nome,idade,habilidades,gols,camisa){
    this->velocidade = velocidade;
    this->tecnica = tecnica;
}

int Atacante::getHabilidade(){
    return ((Jogador::GetHabilidade()*5)+(tecnica*3)+(velocidade*2))/10;
}

void Atacante::printCard(){
    cout << "Nome: " << GetNome() << endl;
    cout << "Posição: Atacante" << endl; 
    cout << "Idade: " << GetIdade() << endl;
    cout << "Camisa: " << GetCamisa() << endl;
    cout << "Habilidade: " << GetHabilidade() << endl;
}
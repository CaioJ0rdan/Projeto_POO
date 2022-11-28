#include "Time.h"

Time::Time(){
    nome = "";
    vitorias = 0;
    derrotas = 0;
    empates = 0;
}

Time::Time(string nome){
    this->nome = nome;
    vitorias = 0;
    derrotas = 0;
    empates = 0;
}

string Time::GetNome(){
    return nome;
}

int Time::GetVitorias(){
    return vitorias;
}

int Time::GetDerrotas(){
    return derrotas;
}

int Time::GetEmpates(){
    return empates;
}

string Time::GetResultados(){
    return "Vitorias : " + to_string(vitorias) + ",Empates : " + to_string(empates) +
     ",Derrotas : " + to_string(derrotas) + ".\n";
}

void Time::ImprimeJogadores(){
    for(int i=0;i<5;i++){
        cout << jogadores[i]->GetNome() << endl;
    }
}

void Time::SomaVitorias(){
    vitorias++;
}

void Time::SomaDerrotas(){
    derrotas++;
}

void Time::SomaEmpates(){
    empates++;
}

void Time::insJogador(Jogador Exemplo){
    int i = 0;
    while(jogadores[i] == nullptr){
        i++;
    }
    jogadores[i] = &Exemplo;
}
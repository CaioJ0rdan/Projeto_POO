#include "Time.h"

Time::Time(){
    nome = "";
    vitorias = 0;
    derrotas = 0;
    empates = 0;
    qjog = 5;
}

Time::Time(string nome){
    this->nome = nome;
    vitorias = 0;
    derrotas = 0;
    empates = 0; 
    qjog = 5;
}

string Time::GetNome(){
    return this->nome;
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
    for(int i=0;i<qjog;i++){
        jogadores.at(i)->printCard();
        cout << "==================================\n";
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

void Time::ins_Jogador(Jogador *Exemplo){
     if(jogadores.size() < qjog){
        jogadores.push_back(Exemplo);
    }
}

void Time::DefResultados(int v,int e,int d){
    vitorias = v;
    derrotas = d;
    empates = e;    
}

    void Time::SetNome(string n){
        nome = n;
    }

    Jogador Time::GetJogador(int posicão){
        return *jogadores.at(posicão);
    }


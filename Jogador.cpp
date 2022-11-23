#include "Jogador.h"

Jogador::Jogador(){
    nome = "";
    idade = 0;
    gols = 0;
    camisa = 0; 
}

Jogador::Jogador(string nome,int idade,int habilidade,int gols,int camisa){
    this->nome = nome;
    this->idade = idade;
    this->habilidade = habilidade;
    this->gols = gols;
    this->camisa = camisa; 
}


    string Jogador::GetNome(){
        return nome;
    }

    int Jogador::GetIdade(){
        return idade;
    }
    
    int Jogador::GetHabilidade(){
        return habilidade;
    }
    
    int Jogador::GetGols(){
        return gols;
    }
    
    int Jogador::GetCamisa(){
        return camisa;
    }

    void Jogador::SetNome(string nome){
        this->nome = nome;
    }

    void Jogador::SomaGol(){
        gols++;
    }

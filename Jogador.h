#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Jogador{

private: //ATRIBUTOS
    string nome;
    int idade;
    int habilidade;
    int gols;
    int camisa; 
    string posicao;
public:

/*==========CONSTRUTORES=========*/
    Jogador();

    Jogador(string nome,int idade,int habilidade,int gols,int camisa,string posicao); 

/*==========FUNÇÕES GET=========*/

    string GetNome();

    int GetIdade();
    
    int GetHabilidade();
    
    int GetGols();
    
    int GetCamisa();

/*==========FUNÇÕES SET=========*/

    void SetNome(string nome);

    void SomaGol();

    void virtual printCard();

    void SetPosicao(string p);

    string GetPosicao();

};

#endif //JOGADOR_H
#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jogador{

private: //ATRIBUTOS
    string nome;
    int idade;
    int habilidade;
    int gols;
    int camisa; 

public:

/*==========CONSTRUTORES=========*/
    Jogador();

    Jogador(string nome,int idade,int habilidade,int gols,int camisa); 

/*==========FUNÇÕES GET=========*/

    string GetNome();

    int GetIdade();
    
    int GetHabilidade();
    
    int GetGols();
    
    int GetCamisa();

/*==========FUNÇÕES SET=========*/

    void SetNome(string nome);

    void SomaGol();

};

#endif //JOGADOR_H
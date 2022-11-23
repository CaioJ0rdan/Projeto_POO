#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include "Jogador.h"

using namespace std;

class Time{

private: // ATRIBUTOS
    string nome;
    Jogador *jogadores[5];
    int vitorias;
    int derrotas;
    int empates;

public:

/*==========CONSTRUTORES==========*/

    Time();

    Time(string nome);    

/*==========FUNÇÕES GET=========*/

    string GetNome();

    int GetVitorias();

    int GetDerrotas();

    int GetEmpates();

    string GetResultados();

/*==========DEMAIS FUNÇÕES==========*/  

    void ImprimeJogadores();

    void SomaVitorias();

    void SomaDerrotas();

    void SomaEmpates();

    void insJogador(Jogador Exemplo);
};

#endif //TIME_H
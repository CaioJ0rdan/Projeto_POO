#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
#include "Jogador.h"

using namespace std;

class Time{

private: // ATRIBUTOS
    string nome;
    int qjog; //Quantidade de Jogadores
    vector <Jogador*> jogadores;
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

    void SetNome(string n);

    void ins_Jogador(Jogador *Exemplo);

    void DefResultados(int v,int e,int d);

    

};

#endif //TIME_H
#ifndef PARTIDA_H
#define PARTIDA_H


#include <iostream>
#include <string>
#include "Jogador.h"
#include "Time.h"
#include "Date.h"


using namespace std;

class Partida{

private: //ATRIBUTOS
    Date* data;
    Time timeCasa;
    Time timeVisitante;
    int placarCasa;
    int placarVisitante;

public:
/*==========CONSTRUTORES==========*/
    Partida();

    Partida(Date data,Time casa,Time visitante);

/*==========FUNÇÕES GET==========*/
    string GetDate();

    Time GetCasa();

    Time GetVisitante();

    string GetPlacar();

    Time GetGanhador();

    Time GetPerdedor();
/*==========DEMAIS FUNÇÕES==========*/

    void PlacarJogo(int a,int b);

};

#endif //PARTIDA_H
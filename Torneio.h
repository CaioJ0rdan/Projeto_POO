#ifndef TORNEIO_H
#define TORNEIO_H


#include <iostream>
#include <string>
#include "Partida.h"

using namespace std;

class Torneio{
private:
    string nome; 
    vector <Time*> times[4];
    vector <Partida*> partidas[3];
    Date* data = nullptr;
public:
    Torneio();

    Torneio(string nome,Time a,Time b, Time c, Time d,Date x);

    void addTime(Time* aux);

    Time GetGanhador();

    void RolarTorneio();
    
    void print();
};

#endif //TORNEIO_H
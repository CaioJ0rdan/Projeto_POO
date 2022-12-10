#include "Torneio.h"
    Torneio::Torneio(){
        nome = "";        
    }

    Torneio::Torneio(string nome,Time a,Time b, Time c, Time d,Date x){
        this->nome = nome;
        times->push_back(&a);
        times->push_back(&b);
        times->push_back(&c);
        times->push_back(&d);
        data = &x;
        Partida* y = new Partida(*data,a,b);
        partidas->push_back(y);
        Partida* z = new Partida(*data,c,d);
        partidas->push_back(z);
    }

    Time Torneio::GetGanhador(){
        return partidas->at(2)->GetGanhador();
    }


    void Torneio::RolarTorneio(){
        int a,b,c,d,e,f;
        cout << "Digite o resultado da primeira partida : \n";
        cin >> a >> b;
        partidas->at(0)->PlacarJogo(a, b);
        cout << "Digite o resultado da segunda partida : \n";
        cin >> c >> d;
        partidas->at(1)->PlacarJogo(c, d);
        Partida* aux = new Partida(*data,partidas->at(0)->GetGanhador(),partidas->at(1)->GetGanhador());
        partidas->push_back(aux);
        cout << "Digite o resultado da partida final: \n";
        cin >> e >> f; 
        partidas->at(2)->PlacarJogo(e, f);
    }

    void Torneio::print(){
        cout << "Partida 1 : " << partidas->at(0)->GetPlacar() << endl;
        cout << "Partida 2 : " << partidas->at(1)->GetPlacar() << endl;
        cout << "Final : "     << partidas->at(2)->GetPlacar() << endl;
    }
 


    void Torneio::addTime(Time* aux){
        int a = times->size();
        if(a >= 4){
            cout << "Cheio\n";
        }else{
            times->push_back(aux);
            if(a == 2){
                Partida* y = new Partida(*data,*times->at(0),*times->at(1));
                partidas->push_back(y);
            }
            if(a == 4){
                Partida* y = new Partida(*data,*times->at(2),*times->at(3));
                partidas->push_back(y);
            }
        }
    }
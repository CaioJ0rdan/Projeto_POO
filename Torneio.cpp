#include "Torneio.h"
    Torneio::Torneio(){
        nome = "";        
    }

    Torneio::Torneio(string nome,Time a,Time b, Time c, Time d,Date x){
        this->nome = nome;
        times[0] = &a;
        times[1] = &b;
        times[2] = &c;
        times[3] = &d;
        data = &x;
        partidas[0] = new Partida(*data,times[0],times[1]); 
        partidas[1] = new Partida(*data,times[2],times[3]);
    }

    Time Torneio::GetGanhador(){
        return *ganhador;
    }


    void Torneio::RolarTorneio(){
        int a,b,c,d,e,f;
        cout << "Digite o resultado da primeira partida : \n";
        cin >> a >> b;
        partidas[0]->PlacarJogo(a, b);
        cout << "Digite o resultado da segunda partida : \n";
        cin >> c >> d;
        partidas[1]->PlacarJogo(c, d);
        partidas[2] = new Partida(*data,partidas[0]->GetGanhador(),partidas[1]->GetGanhador());
        cout << "Digite o resultado da partida final: \n";
        cin >> e >> f; 
        partidas[2]->PlacarJogo(e, f);
    }

    void Torneio::print(){
        cout << "Partida 1 : " << partidas[0]->GetPlacar() << endl;
        //cout << "Partida 2 : " << partidas[1]->GetPlacar() << endl;
        //cout << "Final : "     << partidas[2]->GetPlacar() << endl;
    }
 


    void Torneio::addTime(Time* aux){
        if(times[3] != nullptr){
            cout << "Cheio\n";
        }else{
        for(int i=0;i<4;i++){
            if(times[i] == nullptr){
                times[i] == aux;
                if(i == 1){
                    partidas[0] = new Partida(*data,times[0],times[1]);
                }
                if(i==3){
                    partidas[1] = new Partida(*data,times[2],times[3]);
                }
                break;

            }
        }
        }
    }
#include "Partida.h"

Partida::Partida(){
    data = nullptr;
    timeCasa;
    timeVisitante;
}

Partida::Partida(Date data,Time casa,Time visitante){
    this->data = &data;
    timeCasa = casa;
    timeVisitante = visitante;
}
    string Partida::GetDate(){
        return data->data;
    }

    Time Partida::GetCasa(){
        return timeCasa;
    }

    Time Partida::GetVisitante(){
        return timeVisitante;
    }

    string Partida::GetPlacar(){
        return timeCasa.GetNome() + " " + to_string(placarCasa) + " X " + to_string(placarVisitante)+ " " + timeVisitante.GetNome();
    }

    void Partida::PlacarJogo(int a,int b){
        if(a == b){
            int c,d; 
            cout << "Quanto saiu nos penaltis? " << endl;
            cin >> c >> d;
            a = c;
            b = d;
            timeCasa.SomaEmpates();
            timeCasa.SomaEmpates();
        }else if(a > b){
            timeCasa.SomaVitorias();
            timeVisitante.SomaDerrotas();
        }else{
            timeVisitante.SomaVitorias();
            timeCasa.SomaDerrotas();
        }
        placarCasa = a;
        placarVisitante = b;
    }

    Time Partida::GetGanhador(){
        if(placarCasa > placarVisitante){
            return timeCasa;
        }else{
            return timeVisitante;
        }
    }

    Time Partida::GetPerdedor(){
        if(placarCasa < placarVisitante){
            return timeCasa;
        }else{
            return timeVisitante;
        } 
    }
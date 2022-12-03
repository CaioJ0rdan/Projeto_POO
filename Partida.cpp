#include "Partida.h"

Partida::Partida(){
    data = nullptr;
    timeCasa = nullptr;
    timeVisitante = nullptr;
}

Partida::Partida(Date data,Time casa,Time visitante){
    this->data = &data;
    timeCasa = &casa;
    timeVisitante = &visitante;
}
    string Partida::GetDate(){
        return data->data;
    }

    Time Partida::GetCasa(){
        return *timeCasa;
    }

    Time Partida::GetVisitante(){
        return *timeVisitante;
    }

    string Partida::GetPlacar(){
        return timeCasa->GetNome() + to_string(placarCasa) + " X " + to_string(placarVisitante) + timeVisitante->GetNome();
    }

    void Partida::PlacarJogo(int a,int b){
        placarCasa = a;
        placarVisitante = b;
        DefGanhador();
    }

    Time Partida::GetGanhador(){
        DefGanhador();
        return placarCasa > placarVisitante ? GetVisitante() : GetVisitante();
    }

    Time Partida::GetPerdedor(){
        DefGanhador();
        return placarCasa < placarVisitante ? GetCasa() : GetVisitante();
    }

    void Partida::DefGanhador(){
        int a;
         if(placarCasa == placarVisitante){
            cout << "Digite o resultado dos pênaltis :";
            cin >> a;
            placarCasa = a;
            int b;
            cin >> b;
            placarVisitante = b;
         }
    }
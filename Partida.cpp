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
    }

    Time Partida::GetGanhador(){
        return placarCasa >= placarVisitante ? GetCasa() : GetVisitante();
    }

    Time Partida::GetPerdedor(){
        return placarCasa <= placarVisitante ? GetCasa() : GetVisitante();
    }
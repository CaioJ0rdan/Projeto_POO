#include "Partida.h"

Partida::Partida(){
    data = nullptr;
    timeCasa = nullptr;
    timeVisitante = nullptr;
    placarCasa = 0;
    placarVisitante = 0; 
}

Partida::Partida(Date data,Time casa,Time visitante){
    this->data = &data;
    timeCasa = &casa;
    timeVisitante = &visitante;
    placarCasa = 0;
    placarVisitante = 0; 
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
        return to_string(placarCasa) + " X " + to_string(placarVisitante);
    }

    void Partida::golCasa(){
        placarCasa++;
    }

    void Partida::golVisitante(){
        placarVisitante++;
    }
#include "Date.h"

Date::Date(){
    dia = 0;
    mes = 0;
    ano = 0;
    data = "0/0/0";
}

Date::Date(int dia,int mes,int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
    data = to_string(dia) + "/" + to_string(mes) + "/" +to_string(ano);
}

void Date::ImprimeDate(){
    cout << data << endl;
}
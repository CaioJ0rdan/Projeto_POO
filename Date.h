#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;
/*==========DATE==========*/
class Date{
public:
    int dia;
    int mes;
    int ano;
    string data;

    Date();

    Date(int dia,int mes,int ano);

    void ImprimeDate();
};


#endif //DATE_H
#include <iostream>
#include "Partida.h"
#include "Atacante.h"
#include "Zagueiro.h"
#include "Goleiro.h"
#include "Torneio.h"

int main(){
    cout << "==================================================================================\n";
    cout << "= Instruções:                                                                    =\n";
    cout << "= Amistoso é uma partida de treino em que dois times disputam pela vitoria       =\n";
    cout << "= Torneio funciona com quatro times com duas partidas de semi-finais e uma final =\n";
    cout << "==================================================================================\n";
    
    while(true){  
    cout << "1 - Amistoso" << endl; 
    cout << "2 - Torneio" << endl;
    int aux;
    cin >> aux;
    if(aux == 1){

    }else if(aux == 2){

    }else{
        cout <<"Comando inválido\n";
    }
    }

    return 0;
}

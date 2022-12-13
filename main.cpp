#include <iostream>
#include "Time.h"
#include "Partida.h"
#include "Atacante.h"
#include "Zagueiro.h"
#include "Goleiro.h"
#include "Torneio.h" 
#include <chrono>
#include <ctime>




// Caio Jordan Oliveira de Siqueira - 509827
// Victor Veras Martins - 510324
// Lucas 'Titota' de Araujo Torres - 








 Date datad(20,10,1990);

void Mostrar_Vector(vector<Time*> team){
    cout << "Existem " <<  team.size() << " times definidos para uso:\n";
    for(int i=0;i<team.size();i++){
        cout << i << " - " << team.at(i)->GetNome() << endl;  
    }
}

void Mostrar_Vector(vector<Time*> team,int i){
    cout << team.at(i)->GetNome() << endl;
    cout << "Vitorias : " <<team.at(i)->GetVitorias() << endl;
    cout << "Empates : " <<team.at(i)->GetEmpates() << endl;
    cout << "Derrotas : " <<team.at(i)->GetDerrotas() << endl;
}

void Mostrar_Vector(vector<Partida> matches){
    cout << "Historico de partidas:\n";
    cout << "\n========================================================\n" << endl;
    for(int i=0;i<matches.size();i++){
        cout << i << " - " << matches.at(i).GetPlacar() << endl;  
        cout << "\n========================================================\n" << endl;
    }
}

void Mostrar_Vector(vector<Torneio> torneios){
    cout << "Historico de Torneios:\n";
    cout << "\n========================================================\n" << endl;
    for(int i=0;i<torneios.size();i++){
        cout << "Torneio " << i <<  " :" <<  endl;
        torneios.at(i).print();
        cout <<  "\n===================================================\n" << endl;
    }
}

int main(){

    cout << "==================================================================================\n";
    cout << "= Instruções:                                                                    =\n";
    cout << "= Amistoso é uma partida de treino em que dois times disputam pela vitoria       =\n";
    cout << "= Torneio funciona com quatro times com duas partidas de semi-finais e uma final =\n";
    cout << "==================================================================================\n";

    Time A("Brasil");
    Time B("Argentina");
    Time C("Alemanha");
    Time D("França");

    Atacante a1("Neymar",34,92,77,10,89,93);
    Atacante a2("Pedro",23,87,10,9,79,86);
    Zagueiro a3("Marquinhos",32,74,2,3,78,87);
    Zagueiro a4("Thiago Silva",36,79,5,2,81,96);
    Goleiro  a5("Ederson",25,65,1,1,87,1.89);
    A.ins_Jogador(&a1);
    A.ins_Jogador(&a2);
    A.ins_Jogador(&a3);
    A.ins_Jogador(&a4);
    A.ins_Jogador(&a5);

    Atacante B1("Lionel Messi",35,100,1000,10,100,100);
    B.ins_Jogador(&B1);
    B.ins_Jogador(&B1);
    B.ins_Jogador(&B1);
    B.ins_Jogador(&B1);
    B.ins_Jogador(&B1);

    Atacante c1("Marco Reus",33,90,50,10,91,94);
    Atacante c2("Kroos",30,90,26,8,83,90);
    Zagueiro c3("Swegsteiger",43,84,7,4,86,89);
    Zagueiro c4("Boateng",38,69,5,2,77,93);
    Goleiro  c5("Neuer",33,74,0,1,95,1.96);
    C.ins_Jogador(&c1);
    C.ins_Jogador(&c2);
    C.ins_Jogador(&c3);
    C.ins_Jogador(&c4);
    C.ins_Jogador(&c5);

    Atacante d1("Dembele",24,60,9,21,68,40);
    Atacante d2("Griezman",32,93,30,9,85,92);
    Zagueiro d3("Kanté",29,87,8,9,89,89);
    Zagueiro d4("Pavard",31,79,5,3,79,90);
    Goleiro  d5("Lloris",38,74,0,1,91,1.94);
    D.ins_Jogador(&d1);
    D.ins_Jogador(&d2);
    D.ins_Jogador(&d3);
    D.ins_Jogador(&d4);
    D.ins_Jogador(&d5);


    vector <Time*> team;
    vector <Torneio> torneios;
    vector <Partida> matches;
    team.push_back(&A);
    team.push_back(&B);
    team.push_back(&C);
    team.push_back(&D);
    


    while(true){
        //C
        cout << "Digite 'Criar_Time' para mostrar os times disponiveis" << endl;
        cout << "Digite 'Novo_Torneio' e os identificadores para criar um torneio " << endl; 
        cout << "Digite 'Nova_Partida' e os identificadores para criar uma nova partida" << endl;
        //R
        cout << "Digite 'Mostar_Time' e o identificador para mostrar os times disponiveis" << endl;
        cout << "Digite 'Mostrar_Jogadores' para ver os jogadores de um time" << endl;
        cout << "Digite 'Mostrar_Partidas' para ver o resultado de uma partida" << endl;
        cout << "Digite 'Mostrar_Torneios'para ver os torneios" << endl; 
        //U
        cout << "Digite 'Alterar_Time' e o identificador para alterar o nome de algum time" << endl;
        //D
        cout << "Digite 'Remover_Time' e o identificador para remover um time" << endl;
        
        cout << "Digite 'Mostrar_Data' para mostrar a data das partidas" << endl; 
        cout << "Digite 'Procurar_Jogador' para procurar um jogador\n"; 
        cout << "Digite 'EXIT' para  sair" << endl;

        
        string aux;
        cin >>aux;

        if(aux == "Criar_Time"){
            system("clear||cls");
            cout << "Digite o nome do time:" << endl;
            string nome;
            cin >> nome;
            Time* novo = new Time(nome);
            cout << "Digite o nome dos Jogadores :" << endl;
            cin >> nome;
            Atacante w1(nome,20+(rand()%20),40+(rand()%60),30+(rand()%40),7+rand()%3,60+(rand()%30),70+(rand()%25));
            cin >> nome;
            Atacante w2(nome,20+(rand()%20),40+(rand()%60),30+(rand()%40),10+rand()%2,60+(rand()%30),70+(rand()%25)); 
            cin >> nome;     
            Zagueiro w3(nome,20+(rand()%20),40+(rand()%60),30+(rand()%40),2+rand()%2,60+(rand()%30),70+(rand()%25));
            cin >> nome;
            Zagueiro w4(nome,20+(rand()%20),40+(rand()%60),30+(rand()%40),5+rand()%2,60+(rand()%30),70+(rand()%25));
            cin >> nome;
            Goleiro w5(nome,20+(rand()%20),40+(rand()%60),30+(rand()%40),1,70+(rand()%30)/100,70+(rand()%25));
            
            novo->ins_Jogador(&w1);
            novo->ins_Jogador(&w2);
            novo->ins_Jogador(&w3);
            novo->ins_Jogador(&w4);
            novo->ins_Jogador(&w5);
            team.push_back(novo);
        }else if(aux == "Novo_Torneio"){
            system("clear||cls");
            Mostrar_Vector(team);
            cout << "Digite o numero dos 4 times do torneio:" << endl;
            int k1,k2,k3,k4;
            cin >> k1 >> k2 >> k3 >> k4;
            Torneio* torn = new Torneio("",*team.at(k1),*team.at(k2),*team.at(k3),*team.at(k4),datad);
            torn->RolarTorneio();
            torneios.push_back(*torn);
            delete torn;
        }else if(aux == "Mostrar_Data"){
            system("clear||cls");
            chrono::system_clock::time_point hoje = chrono::system_clock::now();
            time_t tt  = chrono::system_clock::to_time_t(hoje);
            cout << ctime(&tt) << endl;

        }else if(aux == "Nova_Partida"){
            system("clear||cls");
            Mostrar_Vector(team);
            cout << "Digite o numero dos 2 times da partida:" << endl;
            int p1,p2;
            cin >> p1 >> p2;
            Partida* part = new Partida(datad,*team.at(p1),*team.at(p2));
            cout << "Quanto foi o jogo?" << endl;
            cin >> p1 >> p2; 
            part->PlacarJogo(p1,p2);
            matches.push_back(*part);
            delete part;
            
        }else if(aux == "Mostrar_Time"){
            system("clear||cls");
            Mostrar_Vector(team);
            cout << "Digite o numero do time : " << endl;
            int ntime;
            cin >> ntime;
            Mostrar_Vector(team,ntime);
        }else if(aux == "Mostrar_Torneio"){
            system("clear||cls");
            Mostrar_Vector(torneios);
        }else if(aux == "Mostrar_Jogadores"){
            system("clear||cls");
            Mostrar_Vector(team);
            cout << "Digite o numero do time : " << endl;
            int h1;
            cin >> h1;
            team.at(h1)->ImprimeJogadores();
        }else if(aux == "Mostrar_Partidas"){
            system("clear||cls");
            Mostrar_Vector(matches);
        }else if(aux == "Alterar_Time"){
            system("clear||cls");
            Mostrar_Vector(team);
            cout << "Digite o numero do time : " << endl;
            int h2;
            cin >> h2;
            cout << "Digite o novo nome :" << endl;
            string newname;
            cin >> newname;
            team.at(h2)->SetNome(newname);
        }else if(aux == "Remover_Time"){
            system("clear||cls");
            Mostrar_Vector(team);
            cout << "Digite o numero do time : " << endl;
            int h3;
            cin >> h3;
            team.erase(team.begin()+h3);
        }else if(aux == "Procurar_Jogador"){
            system("clear||cls");
            string player;
            bool teste = false;
            cout << "Qual o nome do Jogador:" << endl;
            cin >> player;
            for(int i=0;i<team.size();i++){
                for(int j=0;j<5;j++){
                    if(team.at(i)->GetJogador(j).GetNome() == player){
                        team.at(i)->GetJogador(j).printCard();
                        
                        teste = true;
                         break;
                         
                    }
                }
            }
            if(teste == false){
                system("clear||cls");
                cout << "\nNÃO ENCONTRADO\n" << endl;
            }
        }else if(aux == "EXIT" || aux == "exit"){
            return 0;
        }else{
            system("clear||cls");
            cout << "\nCOMANDO INVÁLIDO\n" << endl;
        }
    }
}

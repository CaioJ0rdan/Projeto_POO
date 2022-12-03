#include <iostream>
#include "Partida.h"
#include "Atacante.h"
#include "Zagueiro.h"
#include "Goleiro.h"

int main(){
    
/*     
    Time a("Gays");
    Time b("Lesbicas");
    Time c("Travestis");
    Time d("Panssexuais");
    Date ab(19,07,2003);
    Torneio dos_crias("dos_crias",a,b,c,d,ab);
    
    dos_crias.RolarTorneio();
    dos_crias.print();
    
     */


    Atacante a("Carlos",20,67,11,6,67,54);
    Zagueiro b("Bruno",39,45,35,31,34,65);
    Atacante c("Caiozin",19,100,50,9,100,100);
    Zagueiro d("Maycon",24,96,24,24,78,95);
    Goleiro e("Monitor",20,31,13,0,60,1.24);
    
    Time Putaria("Putaria_FC");
    Putaria.ins_Jogador(&a);
    Putaria.ins_Jogador(&b);
    Putaria.ins_Jogador(&c);
    Putaria.ins_Jogador(&d);
    Putaria.ins_Jogador(&e);
    Putaria.ImprimeJogadores();

    Time a2("Cabaré_FC");
    Date a1(19,07,2003);
    
    
    

    Partida Semifinal(a1,Putaria,a2);
    Semifinal.PlacarJogo(3,3);
    cout << "Ganhador = " << Semifinal.GetPerdedor().GetNome() << " e Perdedor = " << Semifinal.GetGanhador().GetNome() << endl;
    return 0;
}

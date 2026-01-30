
#include "funkcje.hpp"
#include "2.hpp"




gracz nowy_gracz; 
std::vector<gracz> tabela{};
int main() {
 
    int otwarcie = 0;
    polska();
    while (true) {

        if (otwarcie == 0) {
            title();
            otwarcie++;
        }
       
        int lewel;
    

     lewel = continiu(tabela);
     system("cls");
    
    
     
     
     
     if (lewel == 5) {

         tabela_wynikow(tabela); // wywolanie tabeli 
         system("cls");
         continue;
     } else {
     
     level(lewel); // wywoluje poziom trudnosci od na podstawie lewel
     }


        if (nowy_gracz.pkt > 0){
            if (tabela.size() > 15) {
                system("cls");

                tabela.back() = winner(nowy_gracz);
                tabela_wynikow(tabela);
                system("cls");
                continue;
            }
            else { tabela.push_back(winner(nowy_gracz)); }
           



            tabela_wynikow(tabela);
            system("cls");

            continue;
        }
        else if(nowy_gracz.pkt == 0 && !tabela.empty()) {
            system("cls");
            przegrales();
        }

    }

    


  

}
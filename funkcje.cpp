#include "2.hpp"
#include "funkcje.hpp"







//USTAW POLSKIE ZNAKI 
void polska() {
    // Wracamy do 1250, bo to najbezpieczniejsze dla polskich Windowsow
    SetConsoleOutputCP(1250);
    SetConsoleCP(1250);

    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof(cfi);
    GetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = 16;
    cfi.FontWeight = FW_NORMAL;
    wcscpy_s(cfi.FaceName, L"Consolas");
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
}






























//SZABLON 
std::string szablon =
R"(||                                                                                          ||
||           /$$$$$$$$  /$$$$$$   /$$$$$$  /$$$$$$$  /$$   /$$ /$$$$$$    /$$$$$            ||
||          |_____ $$  /$$__  $$ /$$__  $$| $$__  $$| $$$ | $$|_  $$_/   |__  $$            ||
||               /$$/ | $$  \__/| $$  \ $$| $$  \ $$| $$$$| $$  | $$        | $$            ||
||              /$$/  | $$ /$$$$| $$$$$$$$| $$  | $$| $$ $$ $$  | $$        | $$            ||
||             /$$/   | $$|_  $$| $$__  $$| $$  | $$| $$  $$$$  | $$   /$$  | $$            ||
||            /$$/    | $$  \ $$| $$  | $$| $$  | $$| $$\  $$$  | $$  | $$  | $$            ||
||           /$$$$$$$$|  $$$$$$/| $$  | $$| $$$$$$$/| $$ \  $$ /$$$$$$|  $$$$$$/            ||
||          |________/ \______/ |__/  |__/|_______/ |__/  \__/|______/ \______/             ||
||                                                                                          ||
||                                                                                          ||
||                /$$       /$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$$$                 ||
||               | $$      |_  $$_/ /$$__  $$|_____ $$ | $$__  $$| $$_____/                 ||
||               | $$        | $$  | $$  \__/     /$$/ | $$  \ $$| $$                       ||
||               | $$        | $$  | $$          /$$/  | $$$$$$$ | $$$$$                    ||
||               | $$        | $$  | $$         /$$/   | $$__  $$| $$__/                    ||
||               | $$        | $$  | $$    $$  /$$/    | $$  \ $$| $$                       ||
||               | $$$$$$$$ /$$$$$$|  $$$$$$/ /$$$$$$$$| $$$$$$$/| $$$$$$$$                 ||
||               |________/|______/ \______/ |________/|_______/ |________/                 ||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||==========================================================================================||                   
||//                                                                                      \\||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||                                                                                          ||
||\\                                                                                      //||
|| =========================================================================================||)";

//////////////////////////////////////////////////////////////////////////////////////////////////////

std::string pomocnicza1 = szablon; // zapisanie pustego szablonu 

void title() {                                                                  // pokazuje tutyl gry
    std::cout << R"(
||                                                                                           ||
||           /$$$$$$$$  /$$$$$$   /$$$$$$  /$$$$$$$  /$$   /$$ /$$$$$$    /$$$$$             ||
||          |_____ $$  /$$__  $$ /$$__  $$| $$__  $$| $$$ | $$|_  $$_/   |__  $$             ||
||               /$$/ | $$  \__/| $$  \ $$| $$  \ $$| $$$$| $$  | $$        | $$             ||
||              /$$/  | $$ /$$$$| $$$$$$$$| $$  | $$| $$ $$ $$  | $$        | $$             ||
||             /$$/   | $$|_  $$| $$__  $$| $$  | $$| $$  $$$$  | $$   /$$  | $$             ||
||            /$$/    | $$  \ $$| $$  | $$| $$  | $$| $$\  $$$  | $$  | $$  | $$             ||
||           /$$$$$$$$|  $$$$$$/| $$  | $$| $$$$$$$/| $$ \  $$ /$$$$$$|  $$$$$$/             ||
||          |________/ \______/ |__/  |__/|_______/ |__/  \__/|______/ \______/              ||
||                                                                                           ||
||                                                                                           ||
||                /$$       /$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$$$                  ||
||               | $$      |_  $$_/ /$$__  $$|_____ $$ | $$__  $$| $$_____/                  ||
||               | $$        | $$  | $$  \__/     /$$/ | $$  \ $$| $$                        ||
||               | $$        | $$  | $$          /$$/  | $$$$$$$ | $$$$$                     ||
||               | $$        | $$  | $$         /$$/   | $$__  $$| $$__/                     ||
||               | $$        | $$  | $$    $$  /$$/    | $$  \ $$| $$                        ||
||               | $$$$$$$$ /$$$$$$|  $$$$$$/ /$$$$$$$$| $$$$$$$/| $$$$$$$$                  ||
||               |________/|______/ \______/ |________/|_______/ |________/                  ||
||                                                                                           ||
||                                                                                           ||
||      __ _   __    ___  __  ____  __ _  __    __    ____  ____   __    ___    __  ____     ||
||     (  ( \ / _\  / __)(  )/ ___)(  ( \(  ) _(  )  / ___)(  _ \ / _\  / __) _(  )(  __)    ||
||     /    //    \( (__  )( \___ \/    / )( / \) \  \___ \ ) __//    \( (__ / \) \ ) _)     ||
||     \_)__)\_/\_/ \___)(__)(____/\_)__)(__)\____/  (____/(__)  \_/\_/ \___)\____/(____)    ||
||                                                                                           ||


)";
    char space = 0;


    while (space != ' ') {                //czeka na spacje inaczej nie wyjdzie z petli 


        space = _getch();
        
    }
    return;
}




//przegrales


void przegrales() {
    system("cls");

    szablon = pomocnicza1;

    zamiana("PRZEGRALES :c  MOZE NASTEPNYM RAZEM SIE UDA", 3);

    zamiana("NACISNIJ SPACJE ZEBY WROCIC DO MENU", 6);
    std::cout << szablon; 
    bool exit = true;
    while  (exit == true) {
        char c = _getch();

            if (c == ' ') {
                exit = false; 
            }

    }

    return;





}
































// funckja ekranu wyboru poziomu; 
int continiu(const std::vector<gracz>& tabela) {                                            // ekran wyboru poziomu

 
    system("cls");
    if (tabela.empty()) {

        std::cout << R"(
||                                                                                           ||
||           /$$$$$$$$  /$$$$$$   /$$$$$$  /$$$$$$$  /$$   /$$ /$$$$$$    /$$$$$             ||
||          |_____ $$  /$$__  $$ /$$__  $$| $$__  $$| $$$ | $$|_  $$_/   |__  $$             ||
||               /$$/ | $$  \__/| $$  \ $$| $$  \ $$| $$$$| $$  | $$        | $$             ||
||              /$$/  | $$ /$$$$| $$$$$$$$| $$  | $$| $$ $$ $$  | $$        | $$             ||
||             /$$/   | $$|_  $$| $$__  $$| $$  | $$| $$  $$$$  | $$   /$$  | $$             ||
||            /$$/    | $$  \ $$| $$  | $$| $$  | $$| $$\  $$$  | $$  | $$  | $$             ||
||           /$$$$$$$$|  $$$$$$/| $$  | $$| $$$$$$$/| $$ \  $$ /$$$$$$|  $$$$$$/             ||
||          |________/ \______/ |__/  |__/|_______/ |__/  \__/|______/ \______/              ||
||                                                                                           ||
||                                                                                           ||
||                /$$       /$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$$$                  ||
||               | $$      |_  $$_/ /$$__  $$|_____ $$ | $$__  $$| $$_____/                  ||
||               | $$        | $$  | $$  \__/     /$$/ | $$  \ $$| $$                        ||
||               | $$        | $$  | $$          /$$/  | $$$$$$$ | $$$$$                     ||
||               | $$        | $$  | $$         /$$/   | $$__  $$| $$__/                     ||
||               | $$        | $$  | $$    $$  /$$/    | $$  \ $$| $$                        ||
||               | $$$$$$$$ /$$$$$$|  $$$$$$/ /$$$$$$$$| $$$$$$$/| $$$$$$$$                  ||
||               |________/|______/ \______/ |________/|_______/ |________/                  ||
||                                                                                           ||
||                                                                                           ||
||                                                                                           ||
||                                                                                           ||
||                           ======================================                          ||
||                          //                                    \\                         ||
||                          ||      WYBIERZ POZIOM TRUDNOSCI      ||                         ||
||                          ||                                    ||                         ||
||                          ||                                    ||                         ||
||                          ||             1) LATWY               ||                         ||
||                          ||             2) SREDNI              ||                         ||
||                          ||             3) TRUDNY              ||                         ||
||                          ||             4) ZAKLAD              ||                         ||
||                          ||                                    ||                         ||
||                          \\                                    //                         ||
||                           ======================================                          ||
||                                                                                           ||)";

        int num = 0;
      
        while (num != '1' && num != '2' && num != '3' && num != '4') {
            num = _getch();
        }
        system("cls");

        return num - '0';




    }
    else {





        std::cout << R"(
||                                                                                           ||
||           /$$$$$$$$  /$$$$$$   /$$$$$$  /$$$$$$$  /$$   /$$ /$$$$$$    /$$$$$             ||
||          |_____ $$  /$$__  $$ /$$__  $$| $$__  $$| $$$ | $$|_  $$_/   |__  $$             ||
||               /$$/ | $$  \__/| $$  \ $$| $$  \ $$| $$$$| $$  | $$        | $$             ||
||              /$$/  | $$ /$$$$| $$$$$$$$| $$  | $$| $$ $$ $$  | $$        | $$             ||
||             /$$/   | $$|_  $$| $$__  $$| $$  | $$| $$  $$$$  | $$   /$$  | $$             ||
||            /$$/    | $$  \ $$| $$  | $$| $$  | $$| $$\  $$$  | $$  | $$  | $$             ||
||           /$$$$$$$$|  $$$$$$/| $$  | $$| $$$$$$$/| $$ \  $$ /$$$$$$|  $$$$$$/             ||
||          |________/ \______/ |__/  |__/|_______/ |__/  \__/|______/ \______/              ||
||                                                                                           ||
||                                                                                           ||
||                /$$       /$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$  /$$$$$$$$                  ||
||               | $$      |_  $$_/ /$$__  $$|_____ $$ | $$__  $$| $$_____/                  ||
||               | $$        | $$  | $$  \__/     /$$/ | $$  \ $$| $$                        ||
||               | $$        | $$  | $$          /$$/  | $$$$$$$ | $$$$$                     ||
||               | $$        | $$  | $$         /$$/   | $$__  $$| $$__/                     ||
||               | $$        | $$  | $$    $$  /$$/    | $$  \ $$| $$                        ||
||               | $$$$$$$$ /$$$$$$|  $$$$$$/ /$$$$$$$$| $$$$$$$/| $$$$$$$$                  ||
||               |________/|______/ \______/ |________/|_______/ |________/                  ||
||                                                                                           ||
||                                                                                           ||
||                                                                                           ||
||                                                                                           ||
||                           ======================================                          ||
||                          //                                    \\                         ||
||                          ||      WYBIERZ POZIOM TRUDNOSCI      ||                         ||
||                          ||                                    ||                         ||
||                          ||                                    ||                         ||
||                          ||             1) LATWY               ||                         ||
||                          ||             2) SREDNI              ||                         ||
||                          ||             3) TRUDNY              ||                         ||
||                          ||             4) ZAKLAD              ||                         ||
||                          ||         5) TABELA WYNIKOW          ||                         ||
||                          \\                                    //                         ||
||                           ======================================                          ||
||                                                                                           ||)";


        int num = 0;                                       // wybór levela

        while (num != '1' && num != '2' && num != '3' && num != '4' && num != '5') {
            num = _getch();
        }
        system("cls");


        return num - '0';
    }
}


/////////////////////////////////////// Funkcja zmiany szablonu 





// S = 2499 X = 2499 + 95                         dlugosc lini 90 
std::string zamiana(std::string x, int pozycja)
{
    std::string kopia = szablon;

    int start = 0;
    switch (pozycja) {
    case 0: start = 2405; break;
    case 1: start = 2499; break;
    case 2: start = 2594; break;
    case 3: start = 2689; break;
    case 4: start = 2784; break;
    case 5: start = 2879; break;
    case 6: start = 2974; break;
    default: start = 2499; break;
    }

    int leng = 74;
    leng = (leng - x.size()) / 2;
    leng = start + leng;

    std::copy(x.begin(), x.end(), kopia.begin() + leng);
    szablon = kopia;
    return szablon;
}




















// Wywo³anie levela


gracz level(int poziom) {
    srand(time(NULL));
    std::string zakres; 
    int szukana = 0;
    
    


    std::string miejsce_na_liczbe = "___      ";
    std::string wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
    std::string cala_liczba = "";
    std::string reset = "___      ";












   int lp = 10; // liczba prob
   
   switch (poziom) {                        // wybór poziomu 
   case 1: {
       szukana = rand() % 50 + 1;
       zakres = "Zgadnij liczbe od 1 do 50";
       nowy_gracz.trudnosc = 1;
       break;
   }
   case 2: {
       szukana = rand() % 250 + 1;
       zakres = "Zgadnij liczbe od 1 do 250";
       nowy_gracz.trudnosc = 2;
       break;
   }
   case 3: {
       szukana = rand() % 999 + 1;
       zakres = "Zgadnij liczbe od 1 do 999";
       nowy_gracz.trudnosc = 3;
       break;
   }
   case 4: {
       system("cls");
       szablon = pomocnicza1;
       szukana = rand() % 100 + 1;
       zakres = "Zgadnij liczbe od 1 do 100";
       nowy_gracz.trudnosc = 4;

       std::cout << zamiana("Nacisnij enter aby potwierdzic                    ESC powrot do menu", 6);
       std::cout << zamiana("WprowadŸ liczbê prób", 1);
       std::cout << zamiana(wprowadzanie_liczby, 3);  std::string pomocnicza3 = szablon;
       system("cls");
       
       std::cout << szablon;
       int x = 1;
       while (x != 0) {                   //wprowadzanie liczby 
           
         
           char cyfra = _getch();

           if (cyfra >= '0' && cyfra <= '9') {

               cala_liczba.push_back(cyfra);

               std::copy(cala_liczba.begin(), cala_liczba.end(), miejsce_na_liczbe.begin());

               wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
               szablon = pomocnicza3;

               std::cout << zamiana(wprowadzanie_liczby, 3);

               }

           if (cyfra == 13 && cala_liczba != "") {

                   lp = std::stoi(cala_liczba);

                   break;
               }

               if (cala_liczba.size() > 3) {

                   std::cout << zamiana("Maksymalnie 3 cyfry", 4);
                   cala_liczba.pop_back();
                   miejsce_na_liczbe = reset;
                   std::copy(cala_liczba.begin(), cala_liczba.end(), miejsce_na_liczbe.begin());
                   wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
                   system("cls");


                   std::cout << zamiana(wprowadzanie_liczby, 3);
               }


               if (cyfra == 8) {                   // usuwanie znaku; 
                   if (cala_liczba.length() > 0) {
                       cala_liczba.pop_back();
                       miejsce_na_liczbe = reset;
                       std::copy(cala_liczba.begin(), cala_liczba.end(), miejsce_na_liczbe.begin());
                       wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
                       szablon = pomocnicza3;
                       std::cout << zamiana(wprowadzanie_liczby, 3);
                   }
               }


               if (cyfra == 27) { //ESC 

                   nowy_gracz.pkt = 0;
                   return  nowy_gracz;





               }



           





       }

       break;
   }
   }
   system("cls");
   miejsce_na_liczbe = reset; 
   wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
   cala_liczba = "";
      
    
                    while (lp > 0) {
                       system("cls");
                       szablon = pomocnicza1; 
                       std::string ilosc_prob = std::to_string(lp);
                       std::string proby = "Ilosc prob: " + ilosc_prob; 
                       system("cls"); 
                       std::cout << zamiana("Nacisnij enter aby potwierdzic                    ESC powrot do menu", 6);
                       std::cout << zamiana(zakres, 1);
                       std::cout << zamiana(proby, 2); std::string pomocnicza3 = szablon; // Szablon z czysta 3 linia
                       std::cout << zamiana(wprowadzanie_liczby, 3); 

                      
                       std::string pomocnicza4 = szablon; // Szablon bez 4 lini


                       


                       int x = 1;
                                            while (x != 0) {                   //wprowadzanie liczby 
                                                system("cls");
                                     
                                                std::cout << szablon;
                                                char cyfra = _getch();

                                                if (cyfra >= '0' && cyfra <= '9') {
                                                   
                                                    cala_liczba.push_back(cyfra); 
                                                    
                                                    std::copy(cala_liczba.begin(), cala_liczba.end(), miejsce_na_liczbe.begin());
                                                  
                                                    wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
                                                    szablon = pomocnicza3;
                                                    
                                                    std::cout << zamiana(wprowadzanie_liczby, 3);

                                                }

                                                

                                                if (cyfra == 8) {                   // usuwanie znaku; 
                                                    if (cala_liczba.length() > 0) {
                                                        cala_liczba.pop_back();
                                                        miejsce_na_liczbe = reset;
                                                        std::copy(cala_liczba.begin(), cala_liczba.end(), miejsce_na_liczbe.begin());
                                                        wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
                                                        szablon = pomocnicza3;
                                                        std::cout << zamiana(wprowadzanie_liczby, 3);
                                                    }
                                                }
                                                
                                                
                                                
                                                
                                                
                                                
                                                if (cala_liczba.size() > 3) {
                                                    
                                                    std::cout << zamiana("Maksymalnie 3 cyfry", 4);
                                                    cala_liczba.pop_back(); 
                                                    miejsce_na_liczbe = reset;
                                                    std::copy(cala_liczba.begin(), cala_liczba.end(), miejsce_na_liczbe.begin());
                                                    wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;
                                                    system("cls");
                                                   
                                                    
                                                    std::cout << zamiana(wprowadzanie_liczby, 3);
                                                }

                                                if (cyfra == 13) {
                                                    if (cala_liczba.length() > 0) {
                                                        int liczba_gracza = std::stoi(cala_liczba);




                                                        if (liczba_gracza != szukana) {
                                                            system("cls");
                                                            std::cout << zamiana(komunikat(szukana, liczba_gracza), 4);
                                                            Sleep(1500);
                                                            lp--;
                                                            miejsce_na_liczbe = reset;
                                                            wprowadzanie_liczby = "Wprowadz liczbe:" + miejsce_na_liczbe;


                                                            cala_liczba = "";
                                                            szablon = pomocnicza3;
                                                            std::cout << zamiana(wprowadzanie_liczby, 3);


                                                            break;
                                                        }
                                                        else {
                                                            nowy_gracz.pkt = lp; 
                                                            return nowy_gracz;
                                                        }
                                                    }
                                                }

                                                if (cyfra == 27) { //ESC 

                                                    nowy_gracz.pkt = 0;
                                                    return  nowy_gracz;





                                                }

                                            }

                                            if (lp == 0) {
                                                nowy_gracz.pkt = 0;
                                                return nowy_gracz; 
                                             
                                            }





                                 
                                           
                     

                    }



                    nowy_gracz.pkt = 0;
                    return nowy_gracz;






}















/////////////////////////// Losowe komunikaty

std::string komunikat(int szukana, int wprowadzana) {
    srand(time(NULL));
    int losowy = rand() % 5 + 1;
    if (szukana < wprowadzana) {
        switch (losowy) {
        case 1:
            return  "Za duzo. Sprobuj mniejszej liczby.";

        case 2:

            return   "To za wysoko. Celuj nizej.";

        case 3:

            return   "Niestety nie. Liczba jest mniejsza.";

        case 4:

            return   "Przesadziles. Szukana liczba jest mniejsza.";

        case 5:

            return  "Za duzo.Odejmij troche.";
        default:
            return "Za du¿o";
        }
    }
    else {
        switch (losowy) {
        case 1:
            return "Za malo. Sprobuj wiekszej liczby.";
        case 2:
            return "To za nisko. Celuj wyzej.";
        case 3:
            return "Niestety nie. Liczba jest wieksza.";
        case 4:
            return "Jeszcze brakuje. Podaj wieksza liczbe.";
        case 5:
            return "Blisko, ale za malo. Dodaj troche.";
        default:
            return "Za malo.";
        }
    }
}
///////////////////////////////////// wprowadzanie nazwy po zwyciestwie 








gracz winner(gracz nowy_gracz) {
    system("cls");
    szablon = pomocnicza1;
    std::cout << zamiana("Brawo udalo ci sie odgadnac liczbe!!!", 2);
    
    
    
    std::string miejsce_na_nazwe = "____________ ";
std::string reset = "____________ ";
    std::string podaj_nazwe = "Podaj swoja nazwe:" + miejsce_na_nazwe;
    std::string cala_nazwa = "";
    std::cout << zamiana(podaj_nazwe, 3);

    int x = 0;
        while (x < 1) {
            
            
            char znak = _getch(); 
           
            
            if (znak == 8) {
                if (cala_nazwa.length() > 0) {
                    cala_nazwa.pop_back();
                    miejsce_na_nazwe = reset;
                    std::copy(cala_nazwa.begin(), cala_nazwa.end(), miejsce_na_nazwe.begin());

                    podaj_nazwe = "Podaj swoja nazwe:" + miejsce_na_nazwe;
                    system("cls");
                    std::cout << zamiana("Brawo udalo ci sie odgadnac liczbe!!!", 2);
                    std::cout << zamiana("Nacisnij enter aby potwierdzic", 4);
                    std::cout << zamiana(podaj_nazwe, 3);
                 
                }
                
            }
          
            
            else if  (znak == 13 && cala_nazwa.length() > 0) {
                break;
            }
            else {




              

                if (cala_nazwa.length() > 12) {
                    cala_nazwa.pop_back();

                    std::copy(cala_nazwa.begin(), cala_nazwa.end(), miejsce_na_nazwe.begin());

                    system("cls");
                    podaj_nazwe = "Podaj swoja nazwe:" + miejsce_na_nazwe;
                    std::cout << zamiana("Brawo udalo ci sie odgadnac liczbe!!!", 2);
                    std::cout << zamiana(podaj_nazwe, 3); std::string pomocnicza2 = szablon;

                    std::cout << zamiana("Maksymalna dlugosc nazwy to 12 znakow.", 4);
                    Sleep(2000);
                    szablon = pomocnicza2;
                    std::cout << szablon;


                }
               
                cala_nazwa.push_back(znak);
                std::copy(cala_nazwa.begin(), cala_nazwa.end(), miejsce_na_nazwe.begin());
                podaj_nazwe = "Podaj swoja nazwe:" + miejsce_na_nazwe;
                system("cls");
                std::cout << zamiana("Brawo udalo ci sie odgadnac liczbe!!!", 2);
                std::cout << zamiana(podaj_nazwe, 3);


            }
              
          

    

    }

        nowy_gracz.imie = cala_nazwa;
        
        return nowy_gracz;

}






//////////////////////////////// Tabela wynikow 




void tabela_wynikow(std::vector<gracz>& tabela) {
    system("cls");
    szablon = pomocnicza1;
    if (tabela.size() == 0) {
        system("cls");
        std::cout << zamiana("NIE MA JESZCZE ZADNYCH WYNIKOW", 3);
        std::cout << zamiana("NACISNIJ ESC ZEBY WROCIC", 6);
        char x = 0;
        while (x != 27) {
            x = _getch();

        }
        return; 
        system("cls");


    }










    zamiana("NACISNIJ ESC ABY WROCIC", 5);
    zamiana("ZOBACZ TABELE WYNIKOW", 0);
    zamiana("1. LATWY", 1);
    zamiana("2. SREDNI", 2);
    zamiana("3. BARDZO TRUDNY", 3);
    zamiana("4. ZAK£AD", 4);

    int swap = 0;






    bool x = true;
    std::cout << szablon;
    while (x == true) {
        char xy = _getch();

        if (xy == 27) {
            return;
        }


        if (xy >= '1' && xy <= '4') {

            swap = xy - '0';
            x = false;
        }

    }


    std::sort(tabela.begin(), tabela.end(), [swap](gracz a, gracz b) {
        bool a_first = (a.trudnosc == swap);
        bool b_first = (b.trudnosc == swap);
        if (a_first == true && b_first == false) {
            return true;
            }
        if (a_first == false && b_first == true) {
            return false; 
        }

       
        
        
        
        return a.pkt < b.pkt; });

    int znalezieni = 0;
    int linia = 1;

    
    
    system("cls");
    szablon = pomocnicza1;
    zamiana("Nacisnij ESC zeby wrocic do menu", 6);
    for (int x = 0; x < tabela.size(); x++) {
        if (tabela[x].trudnosc != swap) {
            continue;
        }

        znalezieni++;






        if (znalezieni != 0) {

            

            std::stringstream gracz_w_tabeli;
            gracz_w_tabeli << tabela[x].imie << " wynik: " << tabela[x].pkt << " punkty";

            std::string napis = gracz_w_tabeli.str();

           

            
            std::cout << zamiana(napis, linia);

            linia++;
            if (linia > 5) {
                break;
            }
        }

    }


        
       
    if (znalezieni == 0) {
        bool x = false;
        while (x != true) {
            system("cls");
            szablon = pomocnicza1; 
            zamiana("NIE MA JESZCZE GRACZY", 2);
            zamiana("NACISNIJ ESC ZEBY WROCIC DO MENU", 6);
            std::cout << szablon; 
            char znak = _getch();

            if (znak == 27) {
                return;
            }

        }
    }
    
    
    
    
    char znak = _getch();

        if (znak == 27) {
            return;
        }


    
}










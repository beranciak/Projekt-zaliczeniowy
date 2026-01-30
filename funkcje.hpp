
#pragma once
#include "2.hpp"

struct gracz {
    std::string imie;
    int pkt;
    int trudnosc;
};

void polska();
extern gracz nowy_gracz;
void title();                                                          // pokazuje tutyl gry

int continiu(const std::vector<gracz>& tabela);
void przegrales();
std::string komunikat(int szukana, int wprowadzana);
gracz level(int poziom);
std::string zamiana(std::string x, int pozycja);
extern std::string szablon;
void przegrales();

gracz winner(gracz);
void tabela_wynikow(std::vector<gracz>& tabela);

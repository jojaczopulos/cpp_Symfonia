#include <iostream>
#include <cstdlib>

void zwieksz_kilka(int *dl, int *wys, int *waga);


int main(int argc, char* argv[]){

    int dlugosc = 125;
    int wysokosc = 300;
    int waga = 20;

    //wskazniki do zmiennych

    int *wsk_dlugosc = &dlugosc;
    int *wsk_wysokosc = &wysokosc;
    int *wsk_waga = &waga;

    zwieksz_kilka(wsk_dlugosc, wsk_wysokosc, wsk_waga);

    std::cout << dlugosc << std::endl;
    std::cout << wysokosc << std::endl;
    std::cout << waga << std::endl;
    




}
void zwieksz_kilka(int *dl, int *wys, int *waga){

    //zmienna '*dl', '*wys', '*waga' nie sa kopiami
    //operowanie na nich zmienia ich wrtosc w "calym" programie
    //funkcja nie zwracanic = bo nie ma sensu

    *dl = *dl *2;
    *wys = *wys *2;
    *waga = *waga *2;

}
#include <iostream>
#include <cstdlib>


namespace zadanie_0{

int zwieksz(int liczba);
}
namespace zadanie_1{

void zmien(int &liczba);
}


int main(int argc, char* argv[]){

    int dlugosc = 125;
    int test=0;

    // przypisujemy nowa wartosc dla zmiennej
  //  dlugosc = zadanie_0::zwieksz(dlugosc);

  //  std::cout << dlugosc << std::sendl;

    zadanie_1::zmien(test);
    std::cout << test << std::endl;
    





}
namespace zadanie_0{

int zwieksz(int liczba){

    //zmienna ' liczba jest kopia zmiennej 'dlugosc' zadeklarowanej w main'ie'

    liczba = liczba *2;

    return liczba;
}
}
namespace zadanie_1{

void zmien(int &liczba){

    //mdyfikujac referencje modyfikujemy tez zmienna oryginalna
    liczba = 12345;
}
}
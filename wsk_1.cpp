#include <iostream>
#include <cstdlib>


int main(int argc, char* argv[]){

int zmienna = 8 ;
int drugi = 4;
int *wskaznik ;

wskaznik = &zmienna; 



std::cout << "zmienna = " << zmienna << "\n a odczytana przez wskaznik = " << *wskaznik << std::endl;

zmienna = 10;

std::cout << "zmienna = " << zmienna << "\n a odczytana przez wskaznik = " << *wskaznik << std::endl;

*wskaznik = 200 ;

std::cout << "zmienna = " << zmienna << "\n a odczytana przez wskaznik = " << *wskaznik << std::endl;

wskaznik = &drugi ;

std::cout << "zmienna = " << zmienna << "\n a odczytana przez wskaznik = " << *wskaznik << std::endl;




}

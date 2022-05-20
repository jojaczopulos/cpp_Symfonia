#include <iostream>
#include <cstdlib>


int main(int argc, char* argv[]){

 int *w; // w jest wskaźnikiem do pokazywania na obiekt typu int // W tym wskazniku możemy przechowywać adres jakiegoś obiektu typu int
 int k = 3; // definicja zwykłego obiektu typu int z liczbą 3

 w = &k ; // ustawienie wskaźnika na obiekt k

 std::cout << " w obiekcie pokazywanym przez wskaznik jest wartosc " << *w << std::endl;
 std::cout << k << std::endl;
 std::cout << *w << std::endl;




}

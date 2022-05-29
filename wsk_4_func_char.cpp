#include <iostream>
#include <cstdlib>

void przedzielacz_wsk(char *w);


int main(int argc, char* argv[]){

char ostrzezenie[80] = {"Alarm trzeciego stopnia "} ;

    std::cout << "wersja wskaznikowa" << std::endl;
    przedzielacz_wsk(ostrzezenie);

}
void przedzielacz_wsk(char *w){

    while(*w){
        std::cout << *(w++) << "-" ;
    }
}
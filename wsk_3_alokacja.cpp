#include <iostream>
#include <cstdlib>

void hydraulik(int *wsk_do_kranu);




int main(int argc, char* argv[]){

int kran = -1;
    std::cout << "Stan techniczny kranu = " << kran << std::endl;
    hydraulik (&kran);
    std::cout << "Po wezwaniu hydraulika stan techniczny kranu " <<kran << std::endl;


}

void hydraulik(int *wsk_do_kranu){

    *wsk_do_kranu = 100;
}
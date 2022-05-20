#include <iostream>
#include <cstdlib>


int main(int argc, char* argv[]){

int *wi;
float *wf;
int tabint[10] = {0,1,2,3,4,5,6,7,8,9};
float tabflo[10];

    wf = tabflo ;

    for(int i = 0 ; i < 10; i++){
        *wf = i / 10.0; // wpisanie liczby do elementu tablicy wskazywanego przez wskaźnik
         wf ++ ;
    }

     std::cout << "tresc tablic na pcozatku \n" << std::endl;
    wf = tabflo;
    wi = tabint;
    for(int i = 0; i < 10; i++){

        std::cout << i << " ) \t " << *wi << "\t\t\t\t" << *wf << std::endl;

        wi++;
        wf++;

    }

    wi = tabint + 4 ;
    wf = tabflo + 2;

    for(int i = 0; i < 4; i++){

        *(wi++) = - 222;
        *(wf++) = -777.5;
    }

    wf = tabflo;
    wi = tabint;

    for(int i = 0; i < 10; i++){

        std::cout << i << " ) \t " << *wi << "\t\t\t\t" << *wf << std::endl;

        wi++;
        wf++;

    }
 





}

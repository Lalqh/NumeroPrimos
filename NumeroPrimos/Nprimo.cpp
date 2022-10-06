#include "Nprimo.h"

bool Nprimo::nPrimo(int number)
{
    bool isPrimo{};
    if (number !=1 && number !=0 ) {
        for (int i = 2; i <= number; i++)
        {
            if(number % i == 0){
                if (number == i) {
                    isPrimo = true;
                }
                else {
                    isPrimo = false;
                    return isPrimo;
                }
            }
        }
    }
    else {
        isPrimo = false;
    }
    return isPrimo;
}

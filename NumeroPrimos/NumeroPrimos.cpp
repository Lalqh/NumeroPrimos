#include <iostream>
#include "Nprimo.h"
using namespace std;

int main()
{
    Nprimo primo;
    int number, op;

    cout << "\tBienvenido a el programa.\n";

    do
    {
        cout << "\t1. Mostrar numeros primos.\n";
        cout << "\t2. Salir.\n";
        cout << "\tDiguite su opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "\tDigite el numero hasta el que desea buscar: ";
            cin >> number;
            for (int i = 1; i <= number; i++) {
                if (primo.nPrimo(i)) {
                    cout << "\tEl numero es: " << i<<endl;
                }
            }
            break;
        default:
            cout << "\tOpcion incorrecta.";
            break;
        }
    } while (op!=2);
}
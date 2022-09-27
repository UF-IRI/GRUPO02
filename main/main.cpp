#include <cstdlib>
#include <iostream>

#include "funciones.h"

using namespace std;

int main(int argc, char** argv)
{
    int n = 0, i = 0;

    cout << "Ingrese cantidad de elementos : " << endl;
    cin >> n;

    int* p = new int[n];

    for (i = 0; i < n; i++)
    {
        cout << "Ingrese un numero: " << endl;
        cin >> p[i];

    }

    cout << "La suma de los elementos del array es: " << suma_valores(p, n);

    delete[] p;

    return EXIT_SUCCESS;
}
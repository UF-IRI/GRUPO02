#include <cstdlib>
#include <iostream>
#include "funciones.h"

int main(int argc, char** argv)
{
	int n;

	cout << "ingrese cantidad de elementos: " << endl;
	cin >> n;

	int* p = new int[n];

	for (int i = 0; i < n; i++)
	{
		cout << "ingrese un numero: " << endl;
		cin >> p[i];
	}

	cout << "La suma de los elementos de array es: " << suma_valores(p, n);

	delete[] p;


    return EXIT_SUCCESS;
}

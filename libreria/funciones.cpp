#include "funciones.h"

int suma_valores(int* array, int n)
{
	int suma = 0;

	for (int i = 0; i < n; i++)
	{
		suma += array[i];
	}
	return suma;	
}

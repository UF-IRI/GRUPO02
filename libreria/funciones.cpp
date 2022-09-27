#include "funciones.h"

int suma_valores(int* array, int n)
{
	int suma = 0;
	int i = 0;

	for (i = 0; i < n; i++)
	{
		suma += array[i];
	}

	return suma;
}

float distancia(float num1, float num2, float num3, float num4)
{
	float* x1 = nullptr;
	float* x2 = nullptr;
	float* y1 = nullptr;
	float* y2 = nullptr;

	x1 = &num1;
	x2 = &num2;
	y1 = &num3;
	y2 = &num4;

	float distancia = 0;

	distancia = sqrt((pow(*x2 - *x1, 2), pow(*y2 - *y1, 2)));

	return distancia;

}



#include "funciones.h"

float distancia(float x1, float x2, float y1, float y2)
{
	float x1, x2, y1, y2;
	float distancia = 0;
		
	cout << "Ingrese coordenara x1: ";
	cin >> x1;
	cout<< "Ingrese coordenara x2: ";
	cin >> x2;
	cout << "Ingrese coordenara y1: ";
	cin << y1;
	cout << "Ingrese coordenara y2: ";
	cin >> y2;

	distancia = sqrt((pow(x2 - x1, 2) + (pow(y2 - y1, 2))));
	cout << "Distancia entre (" << x1 << " , " << x2 << ") y (" << y1 << ", " << y2 << ") es: " << distancia << endl;
}

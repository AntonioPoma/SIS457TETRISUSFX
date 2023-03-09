#include "Bloque.h"

Bloque::Bloque()
{
	forma = "Cuadrado pequeño";
	posicion_X = 0;
	posicion_Y = 0;
	color = "-----";
	velocidad = 0;
	enMovimiento = true;
}

Bloque::Bloque(string _nombre, string _color)
{
}

Bloque::Bloque(float)
{
}

void Bloque::rotar(int _angulo)
{
	cout << "Función que permite la rotación de los bloques" << endl;

}

void Bloque::mover(int _posicion)
{
	cout << "Función que permite el movimiento horizontal del bloque" << endl;

}

void Bloque::acelerar(float _velocidad)
{
	cout << "Función que permite la aceleración y velocidad continua del bloque" << endl;

}

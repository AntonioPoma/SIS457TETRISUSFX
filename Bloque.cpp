#include "Bloque.h"

Bloque::Bloque()
{
	forma = "Cuadrado peque�o";
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
	cout << "Funci�n que permite la rotaci�n de los bloques" << endl;

}

void Bloque::mover(int _posicion)
{
	cout << "Funci�n que permite el movimiento horizontal del bloque" << endl;

}

void Bloque::acelerar(float _velocidad)
{
	cout << "Funci�n que permite la aceleraci�n y velocidad continua del bloque" << endl;

}

#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Bloque
{
private:
	string nombre;
	string forma;
	string color;
	int sentidoRotacion;
	int alto;
	int ancho;
	float velocidad;
	int posicionX;
	int posicionY;
	int numeroTiles;
	int angulo;
public:
	void rotar(int _angulo);
	void mover(int _posicion);
	void acelerar(float _velocidad);

protected:
};


#pragma once
#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Bloque
{
private:
	string forma;
	string color;
	float velocidad;
	int alto;
	int ancho;
	int posicion_X;
	int posicion_Y;
	//velocidad de flotación;
	bool enMovimiento;
	int anguloRotacion;
	bool conRotacion;
	int gradosRotacionHorizontal;
	int gradosRotacionVertical;
	int numeroTiles;
	vector<vector<bool>> apariencia;
public:
	Bloque();
	Bloque(string _nombre, string _color);
	Bloque(float);
	void rotar(int _angulo);
	void mover(int _posicion);
	void acelerar(float _velocidad);

protected:
};


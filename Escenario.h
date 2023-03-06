#pragma once
#include <iostream>
#include "Tablero.h"
using namespace std;

class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string TipoBorde;
	string imagenFondo;
	int puntaje;
	int MejorPuntaje;
	int novel;
	int numerodevidas;
	Tablero tablero;



public:
	Escenario() {
		puntaje = 0;
	}


	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }

	void setTablero(string _tablero) { tablero = _tablero; }
	string getTablero() { return tablero; }
};


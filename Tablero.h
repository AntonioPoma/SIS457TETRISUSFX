//SE MODIFICARON ALGUNOS COMENTARIOS
#pragma once
#include"Bloques.h"
#include <iostream>
using namespace std;
class Tablero
{
private:
	string nombre;
	int filaLimiteSuperior;
	int filaActual;
	int numeroFilasEliminadas;
	Bloques bloqueSiguiente;

public:
	Tablero() {
		nombre = "Tablero sin nombre";
	}
	void inicializarTablero();
	bool rotarBloque();
	void bajarBloque();
	bool moverBloque(int direccion);


	//Metodos accesores
	void setNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }


};


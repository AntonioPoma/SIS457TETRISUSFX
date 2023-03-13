#include <iostream>
#include "Escenario.h"
#include"Bloque.h"

using namespace std;



int main() {
	Bloque objetoBloque;
	objetoBloque.mostrar();
	cout << "Hola bienvenido al mundo de Tetris." << endl;

	Escenario escenarioInicial;

	cout << "El nombre del tablero que tiene este escenario es:" << escenarioInicial.getTablero().getNombre() << endl;
	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;
	escenarioInicial.setNombre("Inicia la historia tetris");

	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;

}
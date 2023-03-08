#pragma once
#include<iostream>

using namespace std;
class GameManager
{
private:
	bool filaCompleta;
	float gravedad;
	bool finalDelJuego;

public:
	void EliminarFilaCompleta(bool filaCompleta);
	void caidaDelBloque(float Gravedad);
	void finalizarElJuego(bool finaldeljuego);
};


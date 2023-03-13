#pragma once
#include "Bloque.h"
#include<iostream>

using namespace std;
class BloqueMutante :
    public Bloque
{
private:
    int cambiarForma;
    int detenerBloque;
    int duplicarBloque;

public:
    BloqueMutante(int, bool);
    BloqueMutante(string _nombre, string _color, int _duplicarBloque, bool _cambiarForma);
    int getNumeroCopias() { return duplicarBloque; }
    bool getModificarForma() { return cambiarForma; }


    // Metodos de la clase

    void copiarPieza(int _numeroCopias);
    void detenerPieza(int _tiempo);
    void cambiarForma(int _nuevaforma);
};


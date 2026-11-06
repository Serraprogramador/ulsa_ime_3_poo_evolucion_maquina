#include "Fresadora.h"
#include <cstdio>

Fresadora::Fresadora(const std::string& nombre) : Maquina(nombre) {}

void Fresadora::procesar() {
    printf("%s: fresando pieza\n", getNombre().c_str());
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Fresadora::tiempoCicloSeg() const {
    return 60;
}
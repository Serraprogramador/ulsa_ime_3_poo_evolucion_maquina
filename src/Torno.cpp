#include "Torno.h"
#include <cstdio>

Torno::Torno(const std::string& nombre) : Maquina(nombre) {}

void Torno::procesar() {
    printf("%s: torneando pieza\n", getNombre().c_str());
    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Torno::tiempoCicloSeg() const {
    return 45;
}
#include "Fresadora.h"
#include <cstdio>

Fresadora::Fresadora(const std::string& nombre)
    : Maquina(nombre) {}

void Fresadora::ejecutarCiclo() {
    printf("%s: fresando pieza\n", getNombre().c_str());
}

int Fresadora::tiempoCicloSeg() const {
    return 60;
}
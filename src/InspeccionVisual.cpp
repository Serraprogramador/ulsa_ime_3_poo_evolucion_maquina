#include "InspeccionVisual.h"
#include <cstdio>

InspeccionVisual::InspeccionVisual(const std::string& nombre)
    : Maquina(nombre) {}

void InspeccionVisual::ejecutarCiclo() {
    printf("%s: inspeccionando pieza con camara\n",
           getNombre().c_str());
}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15;
}
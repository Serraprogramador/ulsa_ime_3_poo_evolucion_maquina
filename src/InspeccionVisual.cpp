#include "InspeccionVisual.h"
#include <cstdio>

InspeccionVisual::InspeccionVisual(const std::string& nombre)
    : Maquina(nombre) {}

void InspeccionVisual::procesar() {
    printf("%s: inspeccionando pieza con camara\n",
           getNombre().c_str());

    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15;
}
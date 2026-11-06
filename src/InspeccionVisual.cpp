#include "InspeccionVisual.h"
#include <cstdio>

namespace planta {

InspeccionVisual::InspeccionVisual(const std::string& nombre)
    : Maquina(nombre) {}

int InspeccionVisual::tiempoCicloSeg() const {
    return 15;
}

void InspeccionVisual::ejecutarCiclo() {
    printf("%s: inspeccionando pieza\n", getNombre().c_str());
}

} // namespace planta
#include "Fresadora.h"
#include <cstdio>

namespace planta {

Fresadora::Fresadora(const std::string& nombre)
    : Maquina(nombre) {}

int Fresadora::tiempoCicloSeg() const {
    return 60;
}

void Fresadora::ejecutarCiclo() {
    printf("%s: fresando pieza\n", getNombre().c_str());
}

} // namespace planta
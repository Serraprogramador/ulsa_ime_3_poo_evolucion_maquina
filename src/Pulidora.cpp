#include "Pulidora.h"
#include <cstdio>

namespace planta {

Pulidora::Pulidora(const std::string& nombre)
    : Maquina(nombre) {}

int Pulidora::tiempoCicloSeg() const {
    return 30;
}

void Pulidora::ejecutarCiclo() {
    printf("%s: puliendo pieza\n", getNombre().c_str());
}

} // namespace planta
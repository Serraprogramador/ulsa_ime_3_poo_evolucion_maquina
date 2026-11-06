#include "Pulidora.h"
#include <cstdio>

Pulidora::Pulidora(const std::string& nombre)
    : Maquina(nombre) {}

void Pulidora::ejecutarCiclo() {
    printf("%s: puliendo pieza\n", getNombre().c_str());
}

int Pulidora::tiempoCicloSeg() const {
    return 30;
}
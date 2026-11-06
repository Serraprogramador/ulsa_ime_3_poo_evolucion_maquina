#include "Pulidora.h"
#include <cstdio>

Pulidora::Pulidora(const std::string& nombre)
    : Maquina(nombre) {
}

void Pulidora::procesar() {
    printf("%s: puliendo pieza\n", getNombre().c_str());

    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Pulidora::tiempoCicloSeg() const {
    return 30;
}
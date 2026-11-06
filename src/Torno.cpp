#include "Torno.h"
#include <cstdio>

Torno::Torno(const std::string& nombre)
    : Maquina(nombre), husillo(3000.0) {}

void Torno::ejecutarCiclo() {
    husillo.fijarVelocidad(1200.0);

    printf("%s: torneando pieza a %.0f rpm\n",
           getNombre().c_str(),
           husillo.getVelocidad());
}

int Torno::tiempoCicloSeg() const {
    return 45;
}
#include "BandaTransportadora.h"
#include <cstdio>

BandaTransportadora::BandaTransportadora(const std::string& nombre)
    : Maquina(nombre), motor(1800.0) {
}

void BandaTransportadora::ejecutarCiclo() {
    motor.fijarVelocidad(900.0);

    printf("%s: moviendo pieza a %.0f rpm\n",
           getNombre().c_str(),
           motor.getVelocidad());
}

int BandaTransportadora::tiempoCicloSeg() const {
    return 20;
}
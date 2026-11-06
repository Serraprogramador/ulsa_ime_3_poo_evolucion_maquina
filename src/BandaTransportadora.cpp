#include "BandaTransportadora.h"
#include <cstdio>

namespace planta {

BandaTransportadora::BandaTransportadora(const std::string& nombre)
    : Maquina(nombre),
      motor(1800.0) {}

int BandaTransportadora::tiempoCicloSeg() const {
    return 20;
}

void BandaTransportadora::ejecutarCiclo() {
    motor.fijarVelocidad(900.0);

    printf("%s: transportando pieza a %.0f rpm\n",
           getNombre().c_str(),
           motor.getVelocidad());
}

} // namespace planta
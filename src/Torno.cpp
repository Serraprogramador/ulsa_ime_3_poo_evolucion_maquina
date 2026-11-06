#include "Torno.h"
#include <cstdio>

namespace planta {

Torno::Torno(const std::string& nombre)
    : Maquina(nombre),
      motor(3000.0) {}

int Torno::tiempoCicloSeg() const {
    return 45;
}

void Torno::ejecutarCiclo() {
    motor.fijarVelocidad(1200.0);

    printf("%s: torneando pieza a %.0f rpm\n",
           getNombre().c_str(),
           motor.getVelocidad());
}

} // namespace planta
#include "Motor.h"
#include <algorithm>

namespace planta {

Motor::Motor(double velocidadMaxima)
    : velocidad(0.0),
      velocidadMaxima(velocidadMaxima) {}

void Motor::fijarVelocidad(double nuevaVelocidad) {
    velocidad = std::clamp(nuevaVelocidad, 0.0, velocidadMaxima);
}

double Motor::getVelocidad() const {
    return velocidad;
}

} // namespace planta
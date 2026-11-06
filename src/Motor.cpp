#include "Motor.h"
#include <cstdio>
#include <stdexcept>

Motor::Motor(double velocidadMaxRpm) {
    if (velocidadMaxRpm <= 0) {
        throw std::invalid_argument(
            "La velocidad maxima debe ser positiva"
        );
    }

    this->velocidadMaxRpm = velocidadMaxRpm;
    velocidadActualRpm = 0;
}


void Motor::fijarVelocidad(double rpm) {
    if (rpm < 0) {
        velocidadActualRpm = 0;
    } else if (rpm > velocidadMaxRpm) {
        velocidadActualRpm = velocidadMaxRpm;
    } else {
        velocidadActualRpm = rpm;
    }
}

double Motor::getVelocidad() const {
    return velocidadActualRpm;
}
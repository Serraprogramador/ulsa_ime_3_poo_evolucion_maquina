#ifndef MOTOR_H
#define MOTOR_H

namespace planta {

class Motor {
private:
    double velocidad;
    double velocidadMaxima;

public:
    explicit Motor(double velocidadMaxima);

    void fijarVelocidad(double nuevaVelocidad);

    double getVelocidad() const;
};

} // namespace planta

#endif
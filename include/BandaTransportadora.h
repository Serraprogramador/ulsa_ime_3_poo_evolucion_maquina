#ifndef BANDA_TRANSPORTADORA_H
#define BANDA_TRANSPORTADORA_H

#include "Maquina.h"
#include "Motor.h"

namespace planta {

class BandaTransportadora : public Maquina {
private:
    Motor motor;

protected:
    void ejecutarCiclo() override;

public:
    explicit BandaTransportadora(const std::string& nombre);

    int tiempoCicloSeg() const override;
};

} // namespace planta

#endif
#ifndef INSPECCION_VISUAL_H
#define INSPECCION_VISUAL_H

#include "Maquina.h"

namespace planta {

class InspeccionVisual : public Maquina {
protected:
    void ejecutarCiclo() override;

public:
    explicit InspeccionVisual(const std::string& nombre);

    int tiempoCicloSeg() const override;
};

} // namespace planta

#endif
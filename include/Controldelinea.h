#ifndef CONTROL_DE_LINEA_H
#define CONTROL_DE_LINEA_H

#include <vector>

#include "Maquina.h"

namespace planta {

class ControlDeLinea {
private:
    std::vector<Maquina*> maquinas;

public:
    bool agregar(Maquina* maquina);

    void ejecutarTurno(int ciclos);

    void imprimirReporte() const;
};

} // namespace planta

#endif
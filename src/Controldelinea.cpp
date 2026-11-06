#include "ControlDeLinea.h"
#include <cstdio>
#include <stdexcept>

namespace planta {

bool ControlDeLinea::agregar(Maquina* maquina) {
    if (maquina == nullptr) {
        return false;
    }

    maquinas.push_back(maquina);
    return true;
}

void ControlDeLinea::ejecutarTurno(int ciclos) {
    if (ciclos <= 0) {
        throw std::invalid_argument(
            "La cantidad de ciclos debe ser mayor que cero"
        );
    }

    for (int i = 0; i < ciclos; i++) {
        for (Maquina* maquina : maquinas) {
            maquina->procesar();
        }
    }
}

void ControlDeLinea::imprimirReporte() const {
    printf("\n--- Reporte de la linea ---\n");

    int totalPiezas = 0;

    for (const Maquina* maquina : maquinas) {
        maquina->mostrarEstado();
        totalPiezas += maquina->getPiezasProcesadas();
    }

    printf("Total de piezas procesadas: %d\n", totalPiezas);
}

} // namespace planta
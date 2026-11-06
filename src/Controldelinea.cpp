#include "ControlDeLinea.h"
#include <cstdio>

bool ControlDeLinea::agregar(Maquina* maquina) {
    if (maquina == nullptr) {
        return false;
    }

    maquinas.push_back(maquina);
    return true;
}

void ControlDeLinea::ejecutarTurno(int ciclos) {
    for (Maquina* m : maquinas) {
        for (int i = 0; i < ciclos; i++) {
            m->procesar();
        }
    }
}

void ControlDeLinea::imprimirReporte() const {
    if (maquinas.empty()) {
        printf("La linea no tiene maquinas\n");
        return;
    }

    printf("\n--- Reporte de la linea ---\n");

    int totalPiezas = 0;

    for (const Maquina* m : maquinas) {
        m->mostrarEstado();
        totalPiezas += m->getPiezasProcesadas();
    }

    printf("Total de piezas procesadas: %d\n", totalPiezas);
}
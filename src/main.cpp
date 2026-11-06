#include <cstdio>
#include <exception>

#include "ControlDeLinea.h"
#include "Torno.h"
#include "Fresadora.h"
#include "Pulidora.h"
#include "InspeccionVisual.h"

int main() {
    try {
        Torno torno("Torno T-01");
        Fresadora fresadora("Fresadora F-01");
        Pulidora pulidora("Pulidora P-01");
        InspeccionVisual inspeccion("Inspeccion I-01");

        ControlDeLinea linea;

        linea.agregar(&torno);
        linea.agregar(&fresadora);
        linea.agregar(&pulidora);
        linea.agregar(&inspeccion);

        printf("--- Ejecutando linea de produccion ---\n");

        linea.ejecutarTurno(2);
        linea.imprimirReporte();
    }
    catch (const std::exception& e) {
        printf("Error: %s\n", e.what());
        return 1;
    }

    return 0;
}
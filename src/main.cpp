#include <cstdio>
#include <exception>

#include "ControlDeLinea.h"
#include "Torno.h"
#include "Fresadora.h"
#include "Pulidora.h"
#include "InspeccionVisual.h"
#include "BandaTransportadora.h"

int main() {
    try {
        planta::Torno torno("Torno T-01");
        planta::Fresadora fresadora("Fresadora F-01");
        planta::Pulidora pulidora("Pulidora P-01");
        planta::InspeccionVisual inspeccion("Inspeccion I-01");
        planta::BandaTransportadora banda("Banda B-01");

        planta::ControlDeLinea linea;

        linea.agregar(&torno);
        linea.agregar(&fresadora);
        linea.agregar(&pulidora);
        linea.agregar(&inspeccion);
        linea.agregar(&banda);

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
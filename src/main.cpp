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
        // Crear las maquinas
        Torno torno("Torno T-01");
        Fresadora fresadora("Fresadora F-01");
        Pulidora pulidora("Pulidora P-01");
        InspeccionVisual inspeccion("Inspeccion I-01");

        // Crear banda transportadora
        BandaTransportadora banda("Banda B-01");

        // Crear linea de produccion
        ControlDeLinea linea;

        // Agregar maquinas a la linea
        linea.agregar(&torno);
        linea.agregar(&fresadora);
        linea.agregar(&pulidora);
        linea.agregar(&inspeccion);
        linea.agregar(&banda);

        // Ejecutar linea de produccion
        printf("--- Ejecutando linea de produccion ---\n");

        linea.ejecutarTurno(2);

        // Mostrar reporte
        printf("\n--- Reporte de la linea ---\n");

        linea.imprimirReporte();
    }
    catch (const std::exception& e) {
        printf("Error: %s\n", e.what());
        return 1;
    }

    return 0;
}
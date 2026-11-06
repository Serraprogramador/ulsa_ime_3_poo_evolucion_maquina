#include <cstdio>

#include "ControlDeLinea.h"
#include "Torno.h"
#include "Fresadora.h"
#include "Pulidora.h"
#include "InspeccionVisual.h"

int main() {

    // Crear las maquinas
    Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");
    Pulidora pulidora("Pulidora P-01");
    InspeccionVisual inspeccion("Inspeccion I-01");

    // Crear la linea de produccion
    ControlDeLinea linea;

    // Agregar las maquinas a la linea
    linea.agregar(&torno);
    linea.agregar(&fresadora);
    linea.agregar(&pulidora);
    linea.agregar(&inspeccion);

    // Ejecutar el turno
    printf("--- Ejecutando linea de produccion ---\n");

    linea.ejecutarTurno(2);

    // Mostrar reporte
    printf("\n--- Reporte de la linea ---\n");

    linea.imprimirReporte();

    return 0;
}
#include "ControlDeLinea.h"
#include "Torno.h"
#include "Fresadora.h"
#include <cstdio>

int main() {
    Torno torno("Torno T-01");
    Fresadora fresadora("Fresadora F-01");

    ControlDeLinea linea;

    linea.agregar(&torno);
    linea.agregar(&fresadora);

    printf("--- Ejecutando linea de produccion ---\n");

    linea.ejecutarTurno(2);

    linea.imprimirReporte();

    

    return 0;
}
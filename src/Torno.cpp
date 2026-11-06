#include "Torno.h"
#include <cstdio>

Torno::Torno(const std::string& nombre) : Maquina(nombre) {}

void Torno::procesar() {
    printf("%s: torneando pieza\n", nombre.c_str());
    piezasProcesadas++;
    tiempoTrabajadoSeg += 45;
}
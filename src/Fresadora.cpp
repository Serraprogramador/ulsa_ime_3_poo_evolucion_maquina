#include "Fresadora.h"
#include <cstdio>

Fresadora::Fresadora(const std::string& nombre) : Maquina(nombre) {}

void Fresadora::procesar() {
    printf("%s: fresando pieza\n", nombre.c_str());
    piezasProcesadas++;
    tiempoTrabajadoSeg += 60;
}
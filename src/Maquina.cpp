#include "Maquina.h"
#include <cstdio>

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre), piezasProcesadas(0), tiempoTrabajadoSeg(0) {}

void Maquina::procesar() {
    printf("%s: procesamiento generico\n", nombre.c_str());
    piezasProcesadas++;
    tiempoTrabajadoSeg += 10;
}

void Maquina::mostrarEstado() const {
    printf("%s | piezas: %d | tiempo: %d s\n",
           nombre.c_str(), piezasProcesadas, tiempoTrabajadoSeg);
}
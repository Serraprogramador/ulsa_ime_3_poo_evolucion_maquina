#include "Maquina.h"
#include <cstdio>
#include <stdexcept>

Maquina::Maquina(const std::string& nombre) {
    if (nombre.empty()) {
        throw std::invalid_argument("El nombre no puede estar vacio");
    }

    this->nombre = nombre;
    piezasProcesadas = 0;
    tiempoTrabajadoSeg = 0;
}

void Maquina::registrarPieza() {
    piezasProcesadas++;
}

void Maquina::agregarTiempo(int segundos) {
    if (segundos <= 0) {
        throw std::invalid_argument("El tiempo debe ser mayor que cero");
    }

    tiempoTrabajadoSeg += segundos;
}

void Maquina::procesar() {
    printf("%s: procesamiento generico\n", nombre.c_str());

    registrarPieza();
    agregarTiempo(tiempoCicloSeg());
}

int Maquina::tiempoCicloSeg() const {
    return 10;
}

double Maquina::capacidadPorHora() const {
    return 3600.0 / tiempoCicloSeg();
}

void Maquina::mostrarEstado() const {
    printf("%s | piezas: %d | tiempo: %d s\n",
           nombre.c_str(),
           piezasProcesadas,
           tiempoTrabajadoSeg);
}

std::string Maquina::getNombre() const {
    return nombre;
}

int Maquina::getPiezasProcesadas() const {
    return piezasProcesadas;
}

int Maquina::getTiempoTrabajadoSeg() const {
    return tiempoTrabajadoSeg;
}
#include "Maquina.h"
#include <cstdio>
#include <stdexcept>

namespace planta {

Maquina::Maquina(const std::string& nombre)
    : nombre(nombre),
      piezasProcesadas(0),
      tiempoTrabajadoSeg(0) {}

void Maquina::registrarPieza() {
    piezasProcesadas++;
}

void Maquina::agregarTiempo(int segundos) {
    tiempoTrabajadoSeg += segundos;
}

int Maquina::tiempoCicloValidado() const {
    int tiempo = tiempoCicloSeg();

    if (tiempo <= 0) {
        throw std::logic_error(
            nombre + ": tiempoCicloSeg() debe ser mayor que cero"
        );
    }

    return tiempo;
}

void Maquina::procesar() {
    int tiempo = tiempoCicloValidado();

    ejecutarCiclo();

    registrarPieza();
    agregarTiempo(tiempo);
}

double Maquina::capacidadPorHora() const {
    return 3600.0 / tiempoCicloValidado();
}

const std::string& Maquina::getNombre() const {
    return nombre;
}

int Maquina::getPiezasProcesadas() const {
    return piezasProcesadas;
}

int Maquina::getTiempoTrabajadoSeg() const {
    return tiempoTrabajadoSeg;
}

void Maquina::mostrarEstado() const {
    printf("%s | piezas: %d | tiempo: %d s | capacidad: %.0f pzas/h\n",
           nombre.c_str(),
           piezasProcesadas,
           tiempoTrabajadoSeg,
           capacidadPorHora());
}

} // namespace planta
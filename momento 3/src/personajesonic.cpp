#include "personajesonic.h"

PersonajeSonic::PersonajeSonic(double xInicial, double yInicial)
    : EntidadFisica(xInicial, yInicial, 40.0, 48.0, 1.0),
      vidas(3), anillos(0), enSuelo(true), mirandoDerecha(true) {
}

PersonajeSonic::~PersonajeSonic() {
}

void PersonajeSonic::actualizarFisica(double dt) {
    x += vx * dt;
    y += vy * dt;
}

void PersonajeSonic::moverHorizontal(int direccion) {
    double velocidadBase = 240.0;
    vx = direccion * velocidadBase;
    if (direccion > 0) {
        mirandoDerecha = true;
    } else if (direccion < 0) {
        mirandoDerecha = false;
    }
}

void PersonajeSonic::agregarAnillo() {
    anillos++;
}

void PersonajeSonic::recibirDano() {
    if (vidas > 0) {
        vidas--;
    }
}

int PersonajeSonic::getVidas() const { return vidas; }
int PersonajeSonic::getAnillos() const { return anillos; }
bool PersonajeSonic::estaEnSuelo() const { return enSuelo; }
bool PersonajeSonic::estaMirandoDerecha() const { return mirandoDerecha; }
void PersonajeSonic::setEnSuelo(bool estado) { enSuelo = estado; }

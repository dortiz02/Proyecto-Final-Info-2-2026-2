#include "entidadfisica.h"

EntidadFisica::EntidadFisica()
    : x(0.0), y(0.0), vx(0.0), vy(0.0), activa(true) {
}

EntidadFisica::EntidadFisica(double x, double y)
    : x(x), y(y), vx(0.0), vy(0.0), activa(true) {
}

EntidadFisica::~EntidadFisica() {
}

double EntidadFisica::getX() const { return x; }
double EntidadFisica::getY() const { return y; }
double EntidadFisica::getVx() const { return vx; }
double EntidadFisica::getVy() const { return vy; }
bool EntidadFisica::estaActiva() const { return activa; }

void EntidadFisica::setPosicion(double nx, double ny) {
    x = nx;
    y = ny;
}

void EntidadFisica::setVelocidad(double nvx, double nvy) {
    vx = nvx;
    vy = nvy;
}

void EntidadFisica::setActiva(bool estado) {
    activa = estado;
}

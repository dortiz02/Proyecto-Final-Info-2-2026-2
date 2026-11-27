#include "entidadfisica.h"
#include "excepcionjuego.h"

EntidadFisica::EntidadFisica()
    : x(0.0), y(0.0), vx(0.0), vy(0.0), ancho(32.0), alto(32.0), masa(1.0), activa(true) {
}

EntidadFisica::EntidadFisica(double x, double y, double ancho, double alto, double masa)
    : x(x), y(y), vx(0.0), vy(0.0), ancho(ancho), alto(alto), masa(masa), activa(true) {
    if (ancho <= 0.0 || alto <= 0.0 || masa <= 0.0) {
        throw ExcepcionJuego("Dimensiones o masa invalidas en EntidadFisica", ExcepcionJuego::ERR_PARAMETRO_FISICO);
    }
}

EntidadFisica::~EntidadFisica() {
}

bool EntidadFisica::colisionaCon(const EntidadFisica& otra) const {
    if (!activa || !otra.activa) {
        return false;
    }
    bool solapaX = (x < otra.x + otra.ancho) && (x + ancho > otra.x);
    bool solapaY = (y < otra.y + otra.alto) && (y + alto > otra.y);
    return solapaX && solapaY;
}

double EntidadFisica::getX() const { return x; }
double EntidadFisica::getY() const { return y; }
double EntidadFisica::getVx() const { return vx; }
double EntidadFisica::getVy() const { return vy; }
double EntidadFisica::getAncho() const { return ancho; }
double EntidadFisica::getAlto() const { return alto; }
double EntidadFisica::getMasa() const { return masa; }
bool EntidadFisica::estaActiva() const { return activa; }

void EntidadFisica::setPosicion(double nx, double ny) {
    x = nx;
    y = ny;
}

void EntidadFisica::setVelocidad(double nvx, double nvy) {
    vx = nvx;
    vy = nvy;
}

void EntidadFisica::setDimensiones(double nancho, double nalto) {
    if (nancho <= 0.0 || nalto <= 0.0) {
        throw ExcepcionJuego("Las dimensiones deben ser positivas", ExcepcionJuego::ERR_PARAMETRO_FISICO);
    }
    ancho = nancho;
    alto = nalto;
}

void EntidadFisica::setMasa(double nmasa) {
    if (nmasa <= 0.0) {
        throw ExcepcionJuego("La masa debe ser mayor que cero", ExcepcionJuego::ERR_PARAMETRO_FISICO);
    }
    masa = nmasa;
}

void EntidadFisica::setActiva(bool estado) {
    activa = estado;
}

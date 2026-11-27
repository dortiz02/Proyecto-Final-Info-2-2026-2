#ifndef ENTIDADFISICA_H
#define ENTIDADFISICA_H

class EntidadFisica {
protected:
    double x;
    double y;
    double vx;
    double vy;
    double ancho;
    double alto;
    double masa;
    bool activa;

public:
    EntidadFisica();
    EntidadFisica(double x, double y, double ancho, double alto, double masa = 1.0);
    virtual ~EntidadFisica();

    virtual void actualizarFisica(double dt) = 0;

    bool colisionaCon(const EntidadFisica& otra) const;

    double getX() const;
    double getY() const;
    double getVx() const;
    double getVy() const;
    double getAncho() const;
    double getAlto() const;
    double getMasa() const;
    bool estaActiva() const;

    void setPosicion(double nx, double ny);
    void setVelocidad(double nvx, double nvy);
    void setDimensiones(double nancho, double nalto);
    void setMasa(double nmasa);
    void setActiva(bool estado);
};

#endif

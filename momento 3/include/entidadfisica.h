#ifndef ENTIDADFISICA_H
#define ENTIDADFISICA_H

class EntidadFisica {
protected:
    double x;
    double y;
    double vx;
    double vy;
    bool activa;

public:
    EntidadFisica();
    EntidadFisica(double x, double y);
    virtual ~EntidadFisica();

    virtual void actualizarFisica(double dt) = 0;

    double getX() const;
    double getY() const;
    double getVx() const;
    double getVy() const;
    bool estaActiva() const;

    void setPosicion(double nx, double ny);
    void setVelocidad(double nvx, double nvy);
    void setActiva(bool estado);
};

#endif

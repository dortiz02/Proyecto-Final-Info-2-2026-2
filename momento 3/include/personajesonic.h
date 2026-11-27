#ifndef PERSONAJESONIC_H
#define PERSONAJESONIC_H

#include "entidadfisica.h"

class PersonajeSonic : public EntidadFisica {
private:
    int vidas;
    int anillos;
    bool enSuelo;
    bool mirandoDerecha;

public:
    PersonajeSonic(double xInicial = 60.0, double yInicial = 360.0);
    virtual ~PersonajeSonic();

    virtual void actualizarFisica(double dt) override;

    void moverHorizontal(int direccion);
    void agregarAnillo();
    void recibirDano();

    int getVidas() const;
    int getAnillos() const;
    bool estaEnSuelo() const;
    bool estaMirandoDerecha() const;
    void setEnSuelo(bool estado);
};

#endif

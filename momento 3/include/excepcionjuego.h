#ifndef EXCEPCIONJUEGO_H
#define EXCEPCIONJUEGO_H

#include <stdexcept>
#include <string>

class ExcepcionJuego : public std::runtime_error {
private:
    int codigoError;

public:
    static const int ERR_RECURSO = 1;
    static const int ERR_PARAMETRO_FISICO = 2;
    static const int ERR_ARCHIVO = 3;

    ExcepcionJuego(const std::string& mensaje, int codigo = ERR_PARAMETRO_FISICO);
    int getCodigoError() const;
};

#endif

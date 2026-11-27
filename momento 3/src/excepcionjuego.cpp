#include "excepcionjuego.h"

ExcepcionJuego::ExcepcionJuego(const std::string& mensaje, int codigo)
    : std::runtime_error(mensaje), codigoError(codigo) {
}

int ExcepcionJuego::getCodigoError() const {
    return codigoError;
}

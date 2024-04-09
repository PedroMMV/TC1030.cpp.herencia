#pragma once

#include "Persona.hpp"

class Maestro : public Persona {
public:
    Maestro();
    Maestro(std::string nom, int, std::string dep);

    std::string getDepartamento();
    void setDepartamento(std::string);
    void muestraDatos();
private:
    std::string departamento;
};

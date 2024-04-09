#include "Maestro.hpp"
#include <iostream>

Maestro::Maestro():Persona {} {
    departamento="N/A";
}

Maestro::Maestro(std::string nom, int ed, std::string dep) : Persona {nom,ed} {
    departamento=dep;
}

std::string Maestro::getDepartamento() {
    return departamento;
}

void Maestro::setDepartamento(std::string dep) {
    departamento = dep;
}

void Maestro::muestraDatos()
{
    std::cout << "Nombre: " << nombre << " Edad: " << edad << " Departamento: " << departamento << "\n";
}


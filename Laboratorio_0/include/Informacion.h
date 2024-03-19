#pragma once
#include <iostream>
#include <stdlib.h>
#include <stl>
#include <string>
#include "DTFecha.h"
#include "Estudiante.h"
using namespace std;

class Informacion
{
private:
    int Identificador;
    *DTFecha Fecha;

public:
    int getIdentificador();
    *DTFecha getFecha();
    virtual string toString();
}
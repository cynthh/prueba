#ifndef INFORMACION_H
#define INFORMACION_H

#include <iostream>
#include <stdlib.h>
#include <set>
#include <string>
#include "DTFecha.h"
#include "Estudiante.h"
using namespace std;

class Informacion{
protected:
    int Identificador;
    DTFecha Fecha;
    
public:
    Informacion(int id, const DTFecha& fecha);
    //virtual ~Informacion();
    int getIdentificador();
    DTFecha getFecha();
    virtual string toString() = 0;
};

#endif
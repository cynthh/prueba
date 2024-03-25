#ifndef DTFECHA_H
#define DTFECHA_H

#include<iostream>
#include<stdlib.h>
#include <string>
//#include "Informacion.h"
//#include "DTInfoEstudiante.h"
using namespace std;
class DTFecha{
    private:
	    int dia, mes, anio;
    public:
        DTFecha(int dia, int mes, int anio);
        ~DTFecha();
        string toString();
};

#endif // DTFECHA_H
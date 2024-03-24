#pragma once
#include<iostream>
#include<stdlib.h>
#include <string>
#include "Informacion.h"
#include "DTInfoEstudiante.h"
using namespace std;
class DTFecha{
    private:
	    int dia, mes, anio;
    public:
        DTFecha(int dia, int mes, int anio);
        ~DTFecha();
        string toString();
        int compararDTFechas(DTFecha fecha1, DTFecha fecha2);
};


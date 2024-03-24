#pragma once
#include<iostream>
#include<stdlib.h>
#include <string>
#include <stl>
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
#include "Informacion.h"
using namespace std;
class DTInfoEstudiante{
private:
    int ci, identificadorInfo;
    string NombreEst;
public:
    DTInfoEstudiante(int ci, int identificadorInfo, string NombreEst);
};


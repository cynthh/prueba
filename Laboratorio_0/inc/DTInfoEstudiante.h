#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H
#include<iostream>
#include<stdlib.h>
#include <string>
#include <set>
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
#endif

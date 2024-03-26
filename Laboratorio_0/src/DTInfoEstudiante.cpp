#include "../inc/DTInfoEstudiante.h"


DTInfoEstudiante::DTInfoEstudiante(int ci, int identificadorInfo, string NombreEst){
	this->ci = ci;
	this->identificadorInfo = identificadorInfo;
	this->NombreEst = NombreEst;
}
/* #ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H
#include <iostream>
#include <stdlib.h>
#include <string>
#include <set>
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
#include "Informacion.h"
using namespace std;
class DTInfoEstudiante
{
private:
	int ci, identificadorInfo;
	string NombreEst;
	*Informacion Arr[3];

public:
	DTInfoEstudiante(int ci, int identificadorInfo1, int identificadorInfo2, int identificadorInfo3, string NombreEst);
	Informacion **Guardado(Informacion *info1, Informacion *info2, Informacion *info3);
};

// implementacion de las operaciones:
Informacion **DTInfoEstudiante()::Guardado(Informacion *info1, Informacion *info2, Informacion *info3);
{
	Arr[0] = info1;
	Arr[1] = info2;
	Arr[2] = info3;
	return Arr;
}

#endif */

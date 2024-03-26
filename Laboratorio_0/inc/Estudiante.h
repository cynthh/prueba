#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include<iostream>
#include<stdlib.h>
#include <set>
#include <string>
#include "DTFecha.h"
#include "Informacion.h"
using namespace std;

class Informacion;

class Estudiante{
	private: 
		string nombre, email;
		int ci;
		*Informacion Arr[3];
	public:
		Estudiante(string nombre, int ci, string email);
		//~Estudiante();
		string getNombre();
		void setNombre(string nombre);
		int getCi();
		void setCi(int ci);
		string getEmail();
		void setEmail(string email);
		string toString();
		set<string> listarInfo(DTFecha& Desde);
		Informacion** Guardado(Informacion *info1, Informacion *info2, Informacion *info3);
};
#endif

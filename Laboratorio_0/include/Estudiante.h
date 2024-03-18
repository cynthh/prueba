#pragma once
#include<iostream>
#include<stdlib.h>
#include <set>
#include <string>
#include "DTFecha.h"
using namespace std;

class Estudiante{
	private: 
		string nombre, email;
		int ci;
	public:
		Estudiante(string nombre, int ci, string email);
		string getNombre();
		void setNombre(string nombre);
		int getCi();
		void setCi(int ci);
		string getEmail();
		void setEmail(string email);

		string toString();

		set<string> listarInfo(DTFecha& Desde);

};

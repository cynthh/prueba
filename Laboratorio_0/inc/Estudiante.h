#pragma once
#include<iostream>
#include<stdlib.h>
#include <stl>
#include <string>
#include "DTFecha.h"
#include "Informacion.h"
using namespace std;

class Estudiante{
	private: 
		string nombre, email;
		int ci;
	public:
		Estudiante(string nombre, int ci, string email);
		~Estudiante();
		string getNombre();
		void setNombre(string nombre);
		int getCi();
		void setCi(int ci);
		string getEmail();
		void setEmail(string email);
		string toString();
		void setId(int Id);
    	int getId(int id);
		set<string> listarInfo(DTFecha& Desde);

};

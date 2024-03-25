#include "../inc/Informacion.h"
#include "Informacion.h"

Informacion::Informacion(int id, DTFecha* fecha){
	this->id = id;
	this->fecha = fecha;
}
int Informacion::getIdentificador(){
   return this->id;
}

DTFecha Informacion::getFecha(){
    return this->fecha;
}

string Informacion::toString(){
    return " ";
}

#include "../inc/Informacion.h"

Informacion::Informacion(int id, const DTFecha& fecha){
	this->Identificador = id;
	this->Fecha = fecha;
}
int Informacion::getIdentificador(){
   return this->Identificador;
}

DTFecha Informacion::getFecha(){
    return this->Fecha;
}

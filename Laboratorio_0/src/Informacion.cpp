#include "Informacion.h"

Informacion::Informacion(int id, DTFecha* fecha){
	this->id = id;
	this->fecha = fecha;
}
int getIdentificador(){
	return this->id;
}
DTFecha* getFecha(){
	return this->fecha;
}

#include "Libro.h"

// void resumen(string resumen);
// string toString();

Libro::Libro(int id, DTFecha fecha, string titulo, set<string>& autores, string resumen):Informacion(id, fecha){
	this->titulo = titulo;
	this->autores = autores;
	this->resumen = resumen;
}

Libro::~Libro(){
	
}

string Libro::getTitulo(){
	return this->titulo;
}

void Libro::setTitulo(string titulo){
	this->titulo = titulo;
}

/*string Libro::getAutores(){
	return this->autores;
}

void Libro::setAutores(string autores){
	this->autores = autores;
}*/

string Libro::getResumen(){
	return this->resumen;
}

void Libro::setResumen(string resumen){
	this->resumen = resumen;
}

string Libro::toString(){
	return " " + to_string(getIdentificador()) "," + getFecha()->toString() + "," + this->titulo + "," + this->autores + "," + this->resumen;
}
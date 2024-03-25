#include "../inc/Libro.h"

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


const set<string>& Libro::getAutores(){
	return this->autores;
}

string Libro::getResumen(){
	return this->resumen;
}

string Libro::toString(){
	string autoresStr;
        for (const string& autor : autores) {
            autoresStr += autor + ", ";
        }
        autoresStr.pop_back();
        autoresStr.pop_back();

	return "Libro: " + to_string(getIdentificador()) + "," + getFecha().toString() + "," + this->titulo + "," + autoresStr + "," + this->resumen;
}
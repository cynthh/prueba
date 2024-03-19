#include "Informacion.h"
#include "Libro.h"
#include "Estudiante.h"
#include "DTFecha.h"

// void resumen(string resumen);
// string toString();

Libro::Libro(string titulo, string autores, string resumen);
{
	this->titulo = titulo;
	this->autores = autores;
	this->resumen = resumen;
}

Libro::~Libro()
{
}

string Libro::getTitulo()
{
	return this->titulo;
}

void Libro::setTitulo(string titulo)
{
	this->titulo = titulo;
}

string Libro::getAutores()
{
	return this->autores;
}

void Libro::setAutores(string autores)
{
	this->autores = autores;
}

string Libro::getResumen()
{
	return this->resumen;
}

void Libro::setResumen(string resumen)
{
	this->resumen = resumen;
}

void Libro::resumen()
{
}

string Libro::toString()
{
	return " " + getIdentificador() "," + getFecha() + "," + this->titulo + "," + this->autores + "," + this->resumen;
}
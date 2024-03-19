#include "Informacion.h"
#include "Libro.h"
#include "Estudiante.h"
#include "DTFecha.h"

// Libro(string titulo, string autores, string resumen);
// string getTitulo();
// void setTitulo();
// string getAutores();
// void setAutores();
// string getResumen();
// void getResumen();
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

string getTitulo(string titulo)
{
	return titulo;
}

string getAutores(string autores)
{
	return autores;
}
string getResumen(string resumen)
{
	return resumen;
}
#pragma once
#include <iostream>
#include <stdlib.h>
#include <stl>
#include <string>
#include "Informacion.h"
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
using namespace std;

class Libro
{
private:
    string titulo, autores, resumen;

public:
    Libro(string titulo, string autores, string resumen);
    string getTitulo();
    void setTitulo();
    string getAutores();
    void setAutores();
    string getResumen();
    void getResumen();
    void resumen(string resumen);
    string toString();
}
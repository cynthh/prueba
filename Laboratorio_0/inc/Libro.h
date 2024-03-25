#pragma once
#include <iostream>
#include <stdlib.h>
#include <stl>
#include <string>
#include "Informacion.h"
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
using namespace std;

class Libro: public Informacion{
private:
    string titulo,resumen;
    set<string> autores;

public:
    Libro(int id, DTFecha fecha, string titulo, set<string>& autores, string resumen);
    string getTitulo();
    void setTitulo(string titulo);
    //string getAutores();
    //void setAutores(string autores);
    string getResumen();
    void setResumen(string resumen);
    //bool resumen(string resumen);
    string toString();
    //void setId(int Id);
    //int getId(int id);
}
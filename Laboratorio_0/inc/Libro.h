#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <stdlib.h>
#include <set>
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
    //void setTitulo(string titulo);
    set<string> getAutores();
    //void setAutores(string autores);
    string getResumen();
    //void setResumen(string resumen);
    //bool resumen(string resumen);
    string toString();
    //void setId(int Id);
    //int getId(int id);
};

#endif
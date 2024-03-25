#ifndef PAGINAWEB_H
#define PAGINAWEB_H

#include<iostream>
#include<stdlib.h>
#include <string>
#include <stl>
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
#include "Informacion.h"
using namespace std;
class PaginaWeb: public Informacion{
    private:
    string Titulo, Link, Text;
    Estudiante *GuardadoPor_PaginaWeb;
    public: 
    string toString();
    PaginaWeb(string Titulo, Link, Text, int Identificador, *DTFecha Fecha);
    void setTitulo();
    string getTitulo();
    void setLink();
    string getLink();
    void setText();
    String getText();
};
#endif

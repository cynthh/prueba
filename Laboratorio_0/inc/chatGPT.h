#pragma once
#include<iostream>
#include<stdlib.h>
#include <string>
#include <stl>
#include "DTFecha.h"
#include "DTInfoEstudiante.h"
#include "Informacion.h"
using namespace std;

class chatGPT : public Informacion{
private:
    string pregunta, respuesta;
    Estudiante *GuardadoPor_chatGpt;
public:
    chatGPT(int id, DTFecha* fecha, string pregunta, string respuesta);
    ~chatGPT();
    string getPregunta();
    string getRespuesta();
    void setPregunta(string);
    void setRespuesta(string);
    string toString();
    void setId(int Id);
    int getId(int id);
};


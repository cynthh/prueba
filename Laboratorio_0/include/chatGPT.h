#pragma once
#include<iostream>
#include<stdlib.h>
#include <string>
#include "Informacion.h"
using namespace std;

class chatGPT : public Informacion{
private:
    string pregunta, repuesta;
public:
    chatGPT(int id, DTFecha* fecha, string pregunta, string respuesta);
    ~chatGPT();
    string getPregunta();
    string getRespuesta();
    void setPregunta(string);
    void setRespuesta(string);
    string toString();
};


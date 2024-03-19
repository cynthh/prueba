#include "chatGPT.h"

chatGPT::chatGPT(int id, DTFecha* fecha, string pregunta, string respuesta) : Informacion(id, fecha){
    this->pregunta = pregunta;
    this->respuesta = respuesta;
    
}

chatGPT::~chatGPT(){ 
    
}

string chatGPT::getPregunta() {
    return this->pregunta;
}

string chatGPT::getRespuesta() {
    return this->respuesta;
}
void chatGPT::setPregunta(string pregunta) {
    this->pregunta = pregunta;
}
void chatGPT::setRespuesta(string respuesta) {
    this->respuesta = respuesta;
 }
 string chatGPT::toString(){
     return " " + getIdentificador() "," + getFecha() + "," + this->pregunta + "," + this->respuesta;
 }

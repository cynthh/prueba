#include "../inc/chatGPT.h"

chatGPT::chatGPT(int id,const DTFecha& fecha, string pregunta, string respuesta) : Informacion(id, fecha){
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
/* void chatGPT::setPregunta(string pregunta) {
    this->pregunta = pregunta;
} */
/* void chatGPT::setRespuesta(string respuesta) {
    this->respuesta = respuesta;
 } */
 string chatGPT::toString(){
     return "chatGPT: " + to_string(getIdentificador()) + ", " + getFecha().toString() + ", " + this->pregunta + ", " + this->respuesta;
 }

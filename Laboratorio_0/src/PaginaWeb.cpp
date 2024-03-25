#include "../inc/PaginaWeb.h"
#include <stl>
#include "PaginaWeb.h"

PaginaWeb::PaginaWeb(string Titulo, string Link, string Text, int Identificador, DTFecha Fecha): Informacion(id, DTFecha){
    this->Titulo = Titulo;
    this->Link = Link;
    this->Text = Text;
}

string PaginaWeb::toString(){
    return "PaginaWeb: " + to_string(getIdentificador(pagina)) +", "+ to_string(getFecha(pagina)) +", "+ this->Titulo +", "+ this->Link +", "+ this->Text +".";
    
}

string PaginaWeb::getTitulo(){
    return this->Titulo;;
}

string PaginaWeb::getLink(){
    return this->Link;
}

String PaginaWeb::getText(){
    return this->Text;
}

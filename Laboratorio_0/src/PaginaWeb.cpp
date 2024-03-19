#include "PaginaWeb.h"
#include <stl>

PaginaWeb()
void setTitulo(string Titulo, PaginaWeb pagina){
    this->Titulo = Titulo;
}

string getTitulo(PaginaWeb pagina){
    return this->Titulo;
}

void setLink(string Titulo, PaginaWeb pagina){
    this->Link = Titulo;
}

string getLink(PaginaWeb pagina){
    return this->Link;
}

void setText(string Text, PaginaWeb pagina){
    this->Text = Text;
}

string getText(PaginaWeb pagina){
    return this->Text;
}

string toString(PaginaWeb pagina){
    string res = "PáginaWeb: " + this->Identificador +", "+ this->Fecha +", "+ this->Titulo +", "+ this->Link +", "+ this->Text +".";
    return res;
}
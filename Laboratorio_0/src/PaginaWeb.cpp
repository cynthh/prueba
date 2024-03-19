#include "PaginaWeb.h"
#include <stl>

PaginaWeb : PaginaWeb(string Titulo, Link, Text) : Informacion(id, DTFecha){
    this->Titulo = Titulo;
    this->Link = Link;
    this->Text = Text;
}

void setTitulo(string Titulo, PaginaWeb pagina){
    this->Titulo = Titulo;
}

string getTitulo(PaginaWeb pagina)
{
	return this->Titulo;
}

void setLink(string Titulo, PaginaWeb pagina)
{
	this->Link = Titulo;
}

string getLink(PaginaWeb pagina)
{
	return this->Link;
}

void setText(string Text, PaginaWeb pagina)
{
	this->Text = Text;
}

string getText(PaginaWeb pagina)
{
	return this->Text;
}

string toString(PaginaWeb pagina){
    return "PáginaWeb: " + to_string(getIdentificador(pagina)) +", "+ to_string(getFecha(pagina)) +", "+ this->Titulo +", "+ this->Link +", "+ this->Text +".";
    
    
}

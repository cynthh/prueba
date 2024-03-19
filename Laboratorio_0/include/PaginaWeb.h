#include <string>
#include "Informacion.h"

class PaginaWeb: public Informacion{
    private:
    string Titulo, Link, Text;
    public: 
    string toString();
    PaginaWeb(string Titulo, Link, Text);\
    void setTitulo();
    string getTitulo();
    void setLink();
    string getLink();
    void setText();
    String getText();
};
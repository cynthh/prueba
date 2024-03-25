#pragma once
#include <iostream>
#include "Libro.h"

int main() {
    // Crear un conjunto de autores
    set<string> autores = {"Autor1", "Autor2", "Autor3"};

    // Crear un objeto DTFecha
    DTFecha fecha(2024, 3, 17);

    // Crear un objeto Libro
    Libro libro(1, fecha, "Título del Libro", autores, "Resumen del Libro");

    // Imprimir los detalles del libro
    cout << "Detalles del Libro:" << endl;
    cout << "Identificador: " << libro.getIdentificador() << endl;
    cout << "Fecha: " << libro.getFecha().toString() << endl;
    cout << "Título: " << libro.getTitulo() << endl;
    cout << "Autores:" << endl;
    for (const string& autor : libro.getAutores()) {
        cout << "- " << autor << endl;
    }
    cout << "Resumen: " << libro.getResumen() << endl;

    // Llamar al método toString() para imprimir los detalles del libro
    cout << "toString(): " << libro.toString() << endl;

    return 0;
}

#include <iostream>
#include "inc/Informacion.h"
#include "inc/Libro.h"
#include "inc/DTFecha.h"
#include "inc/ChatGPT.h"
#include "inc/PaginaWeb.h"
#include "inc/Estudiante.h"
#include <set>

int main()
{

    // Parte A

PaginaWeb Informacion1(1, “7/03/2024” , “Programación 4 Guía Semana 1 (4/3)” ,  “https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf” , “ El objetivo de esta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, así como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++.”);

PaginaWeb Informacion2(2, “05/03/2024” , “ Programación orientada a objetos” , “https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf” ,”La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de "objetos" como base, los cuales contienen información en forma de campos (a veces también referidos como atributos o propiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento.”);


//Fin de parte A


//Parte B


ChatGPT Informacion3(3, “ 8/3/2024 ” , “¿Qué es el polimorfismo en orientación a objetos?” , “El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código.” );

ChatGPT Informacion4(4,”5/3/2024”,”¿Qué es el acoplamiento en orientación a objetos?”,”El acoplamiento en programación orientada a objetos se refiere al grado
de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es
deseable, ya que implica que las clases son independientes entre sí, lo que facilita la
modificación, mantenimiento y reutilización del código. Por otro lado, un alto
acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer
que el sistema sea más difícil de entender, modificar y mantener.”);


//Fin parte B


//Parte C


Libro Informacion5(5,”15/3/2024”, “Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development” , “Craig Larman ” , “Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world objectoriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices.
” );


// Fin parte C


//Parte D


cout << “PaginaWeb1.toString() << endl”;
cout << “PaginaWeb2.toString() << endl”;
cout << “ChatGPT1.toString() << endl”;
cout << “ChatGPT2.toString() << endl”;
cout << “Libro1.toString() << endl”;


//Fin parte D


//Parte E


Estudiante Estudiante1(“Alex García”,”52365899”,”ag5678@gmail.com ”);
Estudiante Estudiante2 (“Betina Gonzalez” , “ 49891239” , “beg999@gmail.com”);


//Fin de Parte E


//Parte F


DTInfoEstudiante Estudiante1(52365899, 1 , 2 , 3 ,”Alex García”);
Informacion *Registro1=Guardado(Informacion1, Informacion 2, Informacion3);

DTInfoEstudiante Estudiante2(49891239 , 3 , 4 , 5 ,”Betina Gonzalez”);
Informacion *Registro2=Guardado(Informacion3, Informacion4, Informacion5);


//Fin Parte F


//Parte G




return 0;
}

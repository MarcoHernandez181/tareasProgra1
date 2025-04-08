#include <iostream>
#include "Estudiante.h"
#include <iostream>
using namespace std;

int main() {
    // Creación de objetos Estudiante
    Estudiante estudiante1("Juan Perez", 7.5f);
    Estudiante estudiante2("Maria Gomez",  5.8f);

    // Mostrar información
    cout << "Informacion del estudiante 1:" <<endl;
    estudiante1.mostrarInformacion();


    cout << "\nInformacion del estudiante 2:" << endl;
    estudiante2.mostrarInformacion();


    // Modificar datos
    estudiante2.setPromedio(6.2f);
    cout << "\nNuevo promedio de Maria: " << estudiante2.getPromedio() << endl;


    return 0;
}

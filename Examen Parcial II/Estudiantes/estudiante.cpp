#include "Estudiante.h"
#include <iostream>
#include <iostream>
#include <string>
using namespace std;

// Implementaci�n del constructor
Estudiante::Estudiante(string nombre, float promedio) {
    this->nombre = nombre;
    this->promedio = promedio;
}

// Implementaci�n de los getters
string Estudiante::getNombre() const {
    return nombre;
}


float Estudiante::getPromedio() const {
    return promedio;
}

// Implementaci�n de los setters
void Estudiante::setNombre(string nuevoNombre) {
    nombre = nuevoNombre;
}



void Estudiante::setPromedio(float nuevoPromedio) {
    if (nuevoPromedio >= 0.0f && nuevoPromedio <= 10.0f) {
        promedio = nuevoPromedio;
    }
}

// M�todo para mostrar informaci�n
void Estudiante::mostrarInformacion() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Promedio: " << promedio << endl;
}


#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

class Estudiante {
private:
    std::string nombre;

    float promedio;

public:
    // Constructor
    Estudiante(std::string nombre, float promedio);

    // M�todos para obtener datos (getters)
    std::string getNombre() const;
    float getPromedio() const;

    // M�todos para modificar datos (setters)
    void setNombre(std::string nuevoNombre);
    void setPromedio(float nuevoPromedio);

    // M�todo para mostrar informaci�n
    void mostrarInformacion() const;


};

#endif // ESTUDIANTE_H

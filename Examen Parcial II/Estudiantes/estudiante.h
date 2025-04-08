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

    // Métodos para obtener datos (getters)
    std::string getNombre() const;
    float getPromedio() const;

    // Métodos para modificar datos (setters)
    void setNombre(std::string nuevoNombre);
    void setPromedio(float nuevoPromedio);

    // Método para mostrar información
    void mostrarInformacion() const;


};

#endif // ESTUDIANTE_H

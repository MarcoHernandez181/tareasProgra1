#include <iostream>
using namespace std;

const int ALUMNOS_MAX = 5;
const int CLASES_MAX = 4;
const int totalPuntos[CLASES_MAX] = {20, 25, 20, 35};

void ingreseNotaAlumno(float clases[][CLASES_MAX], int alumno) {
    for (int i = 0; i < CLASES_MAX; ++i) {
        cout << "ingrese notas de alumno " << i + 1 << " Nota no mayor a :" << totalPuntos[i] << endl;
        cin >> clases[alumno][i];
    }
}

void calcularNotaFinal(float clases[][CLASES_MAX], float notasFinales[]) {
    for (int i = 0; i < ALUMNOS_MAX; ++i) {
        notasFinales[i] = 0;
        for (int j = 0; j < CLASES_MAX; ++j) {
            notasFinales[i] += clases[i][j];
        }
    }
}

void calcularPorcentaje(float notasFinales[], float porcentajes[]) {
    float totalMax = 0;
    for (int i = 0; i < CLASES_MAX; ++i) {
        totalMax += totalPuntos[i];
    }

    for (int i = 0; i < ALUMNOS_MAX; ++i) {
        porcentajes[i] = (notasFinales[i] / totalMax) * 100;
    }
}

void mostrarResultados(float notasFinales[], float porcentajes[]) {
    for (int i = 0; i < ALUMNOS_MAX; ++i) {
        cout << "Estudiante " << i + 1 << " - Nota Final: " << notasFinales[i] << ", Porcentaje: " << porcentajes[i] << "%" << endl;
    }
}

int main() {
    float clases[ALUMNOS_MAX][CLASES_MAX];
    float notasFinales[ALUMNOS_MAX];
    float porcentajes[ALUMNOS_MAX];

    for (int i = 0; i < ALUMNOS_MAX; ++i) {
        cout << "Ingresando notas para el alumno " << i + 1 << ":" << endl;
        ingreseNotaAlumno(clases, i);
    }

    calcularNotaFinal(clases, notasFinales);
    calcularPorcentaje(notasFinales, porcentajes);
    mostrarResultados(notasFinales, porcentajes);

    return 0;
}

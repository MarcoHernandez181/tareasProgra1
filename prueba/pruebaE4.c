#include <iostream>

//PROGRAMA DE NOTAS
using namespace std;

const int ALUMNOS_MAX = 5;
const int CLASES_MAX = 4;
const int totalPuntos[CLASES_MAX] = {20, 25, 20, 35};


void ingreseNotaAlumno(float clases[][CLASES_MAX], int alumno) {
    for (int i = 0; i < CLASES_MAX; ++i) {
        cout << "Ingrese la nota para la clase " << i + 1 << " (máximo " << totalPuntos[i] << " puntos): ";
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

void calculoPorcentaje (float notasFinales[], int porcentaje[]) {
    for(int i = 0; i < totalPuntos[CLASES_MAX], ++i) {
        porcentaje[i] = 0;
        for
    }

}


int main(){
   float clases[ALUMNOS_MAX][CLASES_MAX];
    float notasFinales[ALUMNOS_MAX];

    for (int i = 0; i < ALUMNOS_MAX; ++i) {
        cout << "Ingresando notas para el alumno " << i + 1 << ":" << endl;
        ingreseNotaAlumno(clases, i);
    }



return 0;
}

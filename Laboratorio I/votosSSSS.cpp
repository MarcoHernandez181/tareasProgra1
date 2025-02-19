#include <iostream> // la basic la buena
#include <cstdlib> //generador numeros aleatorios
#include <ctime> //inicia numeros aleatorios en diferentes tiempos
#include <string> //string y manipular textos
using namespace std;

//constantes

const int VOTANTES = 50;
const int VUELTAS = 5;
const int CANDIDATOS = 3;

// Prototipos
void datos(string presidenciables[], int votos[CANDIDATOS][VUELTAS], int numCandidatos);
void mostrarResultados(string presidenciables[], int votos[CANDIDATOS][VUELTAS], int numCandidatos);//calcula la resultados
int calcularGanador(int votos[CANDIDATOS][VUELTAS], int numCandidatos); //MAYOR CANTIDAD DE VOTOS
int calcularMenosVotos(int votos[CANDIDATOS][VUELTAS], int numCandidatos); //MENOR
void reiniciarDatos(int votos[CANDIDATOS][VUELTAS]); //reinicio

int main() {
    srand(time(0));  //ctime y cstdlib
    string presidenciables[CANDIDATOS];
    int votos[CANDIDATOS][VUELTAS] = {0};
    int numCandidatos = 0;  //se guardad el nombre de los candidatos
    char opcion;


    do {
        cout << "Ingrese el número de presidenciables: ";
        cin >> numCandidatos;

        if (numCandidatos < 1 || numCandidatos > CANDIDATOS) {
            cout << "No se puede, 1 - 3 unicamente" << endl;
        }
    } while (numCandidatos < 1 || numCandidatos > CANDIDATOS);

    // Ingresar los nombres de los candidatos
    cin.ignore();
    for (int i = 0; i < numCandidatos; ++i) {
        cout << "Ingrese el nombre del presidenciable " << i + 1 << ": ";
        getline(cin, presidenciables[i]);
    }

    do {
        // Ingresar votos aleatorios
        datos(presidenciables, votos, numCandidatos);

        // Mostrar resultados
        mostrarResultados(presidenciables, votos, numCandidatos);

        // Calcular el ganador y el candidato con menos votos
        int ganador = calcularGanador(votos, numCandidatos);
        int menosVotos = calcularMenosVotos(votos, numCandidatos);

        cout << "Presidenciable ganador es: " << presidenciables[ganador] << endl;
        cout << "El presidenciable con menos votos es: " << presidenciables[menosVotos] << endl;


        cout << "\n¿Desea realizar otra elección? (s/n): ";
        cin >> opcion;

        // Reiniciar los votos si se desea otra elección
        if (opcion == 's' || opcion == 'S') {
            reiniciarDatos(votos);
        }

    } while (opcion == 's' || opcion == 'S');

    return 0;
}

void datos(string presidenciables[], int votos[CANDIDATOS][VUELTAS], int numCandidatos) {
    // Generar votos aleatorios
    for (int ronda = 0; ronda < VUELTAS; ++ronda) {
        for (int afiliado = 0; afiliado < VOTANTES; ++afiliado) {
            int voto = rand() % numCandidatos;  // Voto aleatorio entre 0 y numCandidatos-1
            votos[voto][ronda]++;  // Incrementa el voto para el presidenciables correspondiente
        }
    }
}

void mostrarResultados(string presidenciables[], int votos[CANDIDATOS][VUELTAS], int numCandidatos) {
    cout << "\nResultados de las votaciones:\n";
    cout << "Candidato\t";
    for (int ronda = 0; ronda < VUELTAS; ++ronda) {
        cout << "Ronda " << ronda + 1 << "\t";
    }
    cout << endl;

    for (int i = 0; i < numCandidatos; ++i) {
        cout << presidenciables[i] << "\t\t";
        for (int j = 0; j < VUELTAS; ++j) {
            cout << votos[i][j] << "\t\t";
        }
        cout << endl;
    }
}

int calcularGanador(int votos[CANDIDATOS][VUELTAS], int numCandidatos) {
    int maxVotos = -1;
    int ganador = -1;

    for (int i = 0; i < numCandidatos; ++i) {
        int totalVotos = 0;
        for (int j = 0; j < VUELTAS; ++j) {
            totalVotos += votos[i][j];
        }
        if (totalVotos > maxVotos) {
            maxVotos = totalVotos;
            ganador = i;
        }
    }
    return ganador;
}

int calcularMenosVotos(int votos[CANDIDATOS][VUELTAS], int numCandidatos) {
    int minVotos = 10000;  // Valor alto para comparación
    int menosVotos = -1;

    for (int i = 0; i < numCandidatos; ++i) {
        int totalVotos = 0;
        for (int j = 0; j < VUELTAS; ++j) {
            totalVotos += votos[i][j];
        }
        if (totalVotos < minVotos) {
            minVotos = totalVotos;
            menosVotos = i;
        }
    }
    return menosVotos;
}

void reiniciarDatos(int votos[CANDIDATOS][VUELTAS]) {
    for (int i = 0; i < CANDIDATOS; ++i) {
        for (int j = 0; j < VUELTAS; ++j) {
            votos[i][j] = 0;
        }
    }
}

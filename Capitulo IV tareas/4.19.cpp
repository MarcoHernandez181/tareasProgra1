//4.19
#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero, mayor = 0, segundoMayor = 0;

    while (contador < 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (contador == 0) {
            mayor = numero;
        } else if (numero > mayor) {
            segundoMayor = mayor;
            mayor = numero;
        } else if (numero > segundoMayor) {
            segundoMayor = numero;
        }

        ++contador;
    }

    cout << "Los dos numeros mas grandes son: " << mayor << " y " << segundoMayor << endl;
    return 0;
}

//4.17

#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero, mayor = 0;

    while (contador < 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (contador == 0 || numero > mayor) {
            mayor = numero;
        }

        ++contador;
    }

    cout << "El numero mas grande es: " << mayor << endl;
    return 0;
}

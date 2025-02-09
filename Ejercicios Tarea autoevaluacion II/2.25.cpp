
#include <iostream>
using namespace std;

int main() {
    int numUno, numDos;

    cout << "Introduzca dos enteros: ";
    cin >> numUno >> numDos;

    if (numDos != 0) {
        if (numUno % numDos == 0) {
            cout << numUno << " es múltiplo de " << numDos << endl;
        } else {
            cout << numUno << " no es múltiplo de " << numDos << endl;
        }
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
    }

    return 0;
}

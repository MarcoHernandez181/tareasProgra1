//4.15

#include <iostream>
using namespace std;

int main() {
    double ventas;

    while (true) {
        cout << "Ingrese las ventas en dolares (-1 para salir): ";
        cin >> ventas;
        if (ventas == -1) break;

        double salario = 200 + 0.09 * ventas;
        cout << "El salario es: $" << salario << endl;
    }

    return 0;
}

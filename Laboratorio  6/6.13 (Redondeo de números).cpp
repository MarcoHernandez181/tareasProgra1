#include <iostream>
#include <cmath>  // Para usar floor()

using namespace std;

int main() {
    double x;

    cout << "Ingrese un n�mero (0 para salir): ";
    cin >> x;

    while (x != 0) {
        // Redondeo usando floor(x + 0.5)
        int y = floor(x + 0.5);


        cout << "N�mero original: " << x << " | Redondeado: " << y << endl;


        cout << "Ingrese otro n�mero (0 para salir): ";
        cin >> x;
    }

    cout << "Programa finalizado." << endl;
    return 0;
}


//4.27


#include <iostream>
using namespace std;

int main() {
    int binario, decimal = 0, base = 1;
    cout << "Ingrese un numero binario: ";
    cin >> binario;

    while (binario > 0) {
        int digito = binario % 10;
        decimal += digito * base;
        binario /= 10;
        base *= 2;
    }

    cout << "El equivalente decimal es: " << decimal << endl;
    return 0;
}

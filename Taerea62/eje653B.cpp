#include <iostream>
#include <cstdlib>

using namespace std;


void imprimirResultado(int x, int y) {
    cout << "Resultado es: " << x + y << endl;
} //protitipos y funciones

int main() {
    int x, y;

    cout << "Ingrese 2 numeros seguidos: "; cin >> x >> y;


    imprimirResultado(x, y); //llama al prototipo

    system("Pause");
    return 0;
}







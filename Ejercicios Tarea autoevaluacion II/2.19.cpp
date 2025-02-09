#include <iostream>
using namespace std;

int main() {
    int numUno, numDos, numTres;

    cout << "Introduzca tres numeros enteros: ";
    cin >> numUno >> numDos >> numTres;

    // Cálculo de la suma, promedio y producto
    int suma = numUno + numDos + numTres;
    int promedio = suma / 3;
    int producto = numUno * numDos * numTres;

    // Determinar el menor
    int menor = numUno;
    if (numDos < menor) menor = numDos;
    if (numTres < menor) menor = numTres;

    // Determinar el mayor
    int mayor = numUno;
    if (numDos > mayor) mayor = numDos;
    if (numTres > mayor) mayor = numTres;

    // Mostrar los resultados
    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int numUno, numDos, numTres, numCuatro, numCinco
    ;

    cout << "Introduzca cinco enteros: ";
    cin >> numUno >> numDos >> numTres >> numCuatro >> numCinco;


    int menor = numUno;
    int mayor = numUno;


    if (numDos < menor) menor = numDos;
    if (numTres < menor) menor = numTres;
    if (numCuatro < menor) menor = numCuatro;
    if (numCinco < menor) menor = numCinco;


    if (numDos > mayor) mayor = numDos;
    if (numTres > mayor) mayor = numTres;
    if (numCuatro > mayor) mayor = numCuatro;
    if (numCinco > mayor) mayor = numCinco;


    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}

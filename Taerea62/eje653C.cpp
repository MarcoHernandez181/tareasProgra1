#include <iostream>
#include <cstdlib>

using namespace std;


    template <class A>
    A multi(A numero1, A numero2, A numero3) {
    return numero1 * numero2 * numero3; // Devuelve el producto
}


int main(){


    int numero1, numero2, numero3, resultado = 0;


    cout <<  "ingrese 3 numero seguidos: "; cin >> numero1 >> numero2 >> numero3;

    resultado = multi(numero1, numero2, numero3);

    cout << "\nEl resultado es: "<< resultado;




return 0;
}

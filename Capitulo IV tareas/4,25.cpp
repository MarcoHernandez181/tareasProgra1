//4.25


#include <iostream>
using namespace std;

int main() {
    int lado;
    cout << "Ingrese el tama�o del lado del cuadrado (1-20): ";
    cin >> lado;

    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
            if (i == 0 || i == lado - 1 || j == 0 || j == lado - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

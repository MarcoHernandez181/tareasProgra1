//4.33


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese tres enteros distintos de cero: ";
    cin >> a >> b >> c;

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        cout << "Pueden ser los lados de un triangulo recto." << endl;
    else
        cout << "No pueden ser los lados de un triangulo recto." << endl;

    return 0;
}

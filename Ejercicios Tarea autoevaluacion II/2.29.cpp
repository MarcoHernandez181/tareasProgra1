#include <iostream>
using namespace std;

int main() {

    cout << "Número\tCuadrado\tCubo\n";


    for (int i = 0; i <= 10; i++) {
        cout << i << "\t" << (i * i) << "\t\t" << (i * i * i) << endl;
    }

    return 0;
}

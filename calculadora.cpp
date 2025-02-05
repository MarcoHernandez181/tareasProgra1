#include <iostream>
using namespace std;

int main()
{
double primerValor;
double segundoValor;
double resultado;
char tipoOperacion;

cout << "Hola bienvenidos a calcu2k25" << endl;
cout << "Estos son los unicos operadores permitidos (+ , - , * , /)" << endl;

cout << "Ingrese un primer valor: ";
cin >> primerValor;

cout << "Ingrese un operador: ";
cin >> tipoOperacion;

cout << "Ingrese un segundo valor: ";
cin >> segundoValor;

switch (tipoOperacion)
{
    case '+':
        resultado = primerValor + segundoValor;
        cout << "El resultado de la suma es: " << resultado << endl;
        break;

    case '-':
        resultado = primerValor - segundoValor;
        cout << "El resultado de la resta es: " << resultado << endl;
        break;

    case '*':
        resultado = primerValor * segundoValor;
        cout << "El resultado de la multiplicacion es: " << resultado << endl;
        break;

    case '/':
        if (segundoValor != 0)
        {
            resultado = primerValor / segundoValor;
            cout << "El resultado de la division es: " << resultado << endl;
            break;
        }
}
return 0;
}

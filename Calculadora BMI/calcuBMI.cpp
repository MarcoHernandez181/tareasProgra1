#include <iostream>
#include <cstdlib>
//Programa para indice BMI
//05/02/25 by Marco Hernandez
using namespace std;

int main()
{
    //Variables operadores

    float pesokilo=0;
    float pesoLibra=0;
    float alturaPulgada=0;
    float alturaMetro=0;
    float resultadoBmi;
    int opcionSeleccionada;
    char salidaMenu;

    //inicia el ciclo
    do
    {
        system("cls");
        //Ingreso de datos
        opcionSeleccionada=0;
        resultadoBmi=0;
        cout << "Indice BMI" << endl;
        //Menu de opciones en calculadora
        cout << "1. Libras (1)" << endl;
        cout << "2. Kilogramos (2)" << endl;
        cin >> opcionSeleccionada;

        // Estructuras condicionales
        if (opcionSeleccionada==1)
        {
            cout << "Ingrese su peso en libras" << endl;
            cin >> pesoLibra;
            cout << "Ingrese su altura en pulgadas" << endl;
            cin >> alturaPulgada;
        }
        else if (opcionSeleccionada==2)
        {
            cout << "Ingrese su peso en kilogramos" << endl;
            cin >> pesokilo;
            cout << "Ingrese su altura en metros" << endl;
            cin >> alturaMetro;
        }
        switch  (opcionSeleccionada)
        {
            case 1:
                resultadoBmi = (pesoLibra*703)/(alturaPulgada*alturaPulgada);
                break;

            case 2:
                resultadoBmi = (pesokilo)/(alturaMetro*alturaMetro);
                break;

            default:
                cout << "Error opcion seleccionada" << endl;
        }
        cout << "Su resultado es el siguiente: " << resultadoBmi << endl;
        if (resultadoBmi <= 18.5) {
            cout << "Apreciacion BMI: Peso bajo" << endl;
        } else if (resultadoBmi >= 18.6 && resultadoBmi <= 24.9) {
            cout << "Apreciacion BMI: Normal" << endl;
        } else if(resultadoBmi >= 25 && resultadoBmi <= 29.9) {
            cout << "Apreciacion BMI: Sobrepeso"<< endl;
        } else if (resultadoBmi >= 30){
            cout << "Apreciacion BMI: Obeso" << endl;
        }

        cout << "Desea realizar otra operacion Si=S o No=N" << endl;
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');
    return 0;
}

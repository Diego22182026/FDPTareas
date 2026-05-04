#include <iostream>
using namespace std;

int main (){

// Declarando variables

    int edad, cobro1 = 0, cobro2 = 5, cobro3 = 10;

// Se le solicita al usuario ingresar la edad del cliente
    
    cout << "Por favor ingrese la edad del menor: " << endl;
    cin >> edad;

// Calculo de cobro

    if (edad < 5){

        cout << "El precio de su boleto de entrada es de: $" << cobro1 << endl;
    }

        else if (edad >=5 && edad <=12){

        cout << "El precio de su boleto de entrada es de: $" << cobro2 << endl;
    }

        else {

        cout << "El precio de su boleto de entrada es de $" << cobro3 << endl;
        }

return 0;
}
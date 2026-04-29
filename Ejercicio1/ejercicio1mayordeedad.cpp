// Ejercicio 1
// Este programa mostrará si una persona es mayor de de edad (18 años) o menor de edad (<18)


#include <iostream>
using namespace std;

int main () {

    //Declaración de variables
    int edad;

    // Se le da la bienvenida al usuario y se le solicita que ingrese su edad

    cout << "Welcome!" << endl << "Please enter your age: " << endl;
    cin >> edad;

    // Verificar si es mayor de edad o no

    if (edad >=18){

        cout << "You are of legal age" << endl;
    }
    else {

        cout << "You are underage" << endl;
    } 

    return 0;
}


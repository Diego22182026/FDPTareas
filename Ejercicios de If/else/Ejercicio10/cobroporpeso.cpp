#include <iostream>
using namespace std;

int main (){

    // Declaracion de variables 
    float peso;

    cout << "Ingrese el peso de su paquete: " << endl;
    cin >> peso;

    // Calculo del cobro

    if (peso <= 5){

        cout << "Su monto a pagar es de $5" << endl;

    }
    else if (peso >=6 && peso <= 10){

        cout << "Su monto a pagar es de $10" << endl;
    }
    else{

        cout << "Su monto a pagar es de $15" << endl;
    }

    return 0;
}
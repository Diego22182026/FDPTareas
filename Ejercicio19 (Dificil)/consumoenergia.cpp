#include <iostream>
using namespace std;

int main (){

    // Declaracion de variables
    double consumo;

    // Bienvenida al usuario y solicitar datos a este

    cout << "Bienvenido al servicio de calculo de tarifa de luz electrica. " << endl << endl;
    cout << "Por favor, ingresa tu consumo electrico en kWh: " << endl;
    cin >> consumo;


    // Calculo de tarifas

    if (consumo < 100){

        cout << "Su tarifa es de: $25 (Baja)" << endl;
    }

    else if (consumo >= 100 && consumo <= 200){

        cout << "Su tarifa es de: $50 (Media)" << endl;

    }

    else if (consumo > 200){

        cout << "Su tarifa es de: $180 (Alta)" << endl;
    }

return 0;
}
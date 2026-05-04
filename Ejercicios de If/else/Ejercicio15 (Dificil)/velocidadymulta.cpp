#include <iostream>
using namespace std;

int main (){

    //Declarando variables

    int velocidad, multa1 = 100, multa2 = 150;

    cout << "Ingrese la velocidad a la que iba, por favor: " << endl;
    cin >> velocidad;

    // Analisis de resultados

    if (velocidad >60 && velocidad <80){

        cout << "Su multa a pagar es de $" << multa1 << endl;

    }
    else if (velocidad > 80){

        cout << "Su multa a pagar es de $" << multa2 << endl;

    }

    else {
    
        cout << "Usted esta libre de multa " << endl;
    }

    return 0;
}
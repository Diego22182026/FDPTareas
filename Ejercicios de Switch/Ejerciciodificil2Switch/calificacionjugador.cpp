#include <iostream>
using namespace std;

int main (){

    int numero;

    // Se le solicita al usuario ingresar su puntaje en estrellas
    cout << "Hola!" << endl << "Por favor ingresa tu puntaje en estrellas (del 1 al 5)" << endl;
    cin >> numero;


    if (numero < 1 || numero >5){

        cout << "Datos incorrectos, por favor ingresa un valor del 1 al 5. " << endl;
    
        return 1;
    }

    // Inicio del switch 

    switch (numero){

        case 1:

            cout << "Nivel bajo" << endl;
            break;

        case 2:
            cout << "Puedes mejorar!" << endl;
            break;

        case 3:
            cout << "Se podria decir que eres un jugador casual" << endl;
            break;
        
        case 4:
            cout << "Eres un jugador muy habilidoso!" << endl;
            break;

        case 5:
            cout << "Casi un profesional!" << endl;
            break;
        
        default:
            cout << " Datos incorrectos. " << endl; 
    }
    return 0;
}
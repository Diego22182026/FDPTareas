#include <iostream>
using namespace std;

int main() {
    int opcion, num1, num2, resultado;
    
    
    
    //Inicio del while//
        while (opcion != 4){

        cout << "---MENU---" << endl;
        cout << "1. Saludar" << endl;
        cout << "2. Suma" << endl;
        cout << "3. Mostrar mensaje" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            cout << "Hola!" << endl << endl << endl;
        }
        else if (opcion == 2) {
            cout << "Ingresa un numero: " << endl;
            cin >> num1;
            cout << "Ingresa el segundo numero: " << endl;
            cin >> num2;
            resultado = num1 + num2;
            cout << "El resultado es: " << resultado << endl << endl << endl;
        }
        else if (opcion == 3) {
            cout << "Bienvenido al programa" << endl << endl << endl;
        }
        else if (opcion == 4) {
            cout << "Saliendo del programa..." << endl;
        }
    
        else {
            cout << "Opcion invalida" << endl;
        }
    }


    return 0;
}
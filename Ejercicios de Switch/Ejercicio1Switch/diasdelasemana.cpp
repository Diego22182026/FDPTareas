#include <iostream>
using namespace std;

int main (){

    char D;
    cout << "Ingresa un numero del 1 al 7 \n";
    cin >> D;
    switch (D){

        case '1':
        cout << "Lunes" << endl;

        break;

        case '2':
        cout << "Martes" << endl;

        break;

        case '3':
        cout << "Miercoles" << endl;

        break;

        case '4':
        cout << "Jueves" << endl;

        break;

        case '5':
        cout << "Viernes" << endl;

        break;

        case '6':
        cout << "Sabado" << endl;

        break;

        case '7':
        cout << "Domingo" << endl;

        break;

        default:
        cout<< "Datos incorrectos" << endl;
    }
    return 0;
}
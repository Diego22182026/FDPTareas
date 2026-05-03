#include <iostream>
using namespace std;

int main (){

    //Declaracion de variables

    string user = "administrador2026", password = "uca2026admin";
    int intentos = 3;

    // Se le solicita al usuario ingresar las credenciales

    cout << "Por favor, ingrese las credenciales: " << endl;
    cin >> user >> password;

    // Autenticacion de credenciales

    if (user == "administrador2026" && password == "uca2026admin"){

        cout << "Credenciales verificadas. Bienvenido" << endl;

    }

    else {

        cout << "Por favor intente de nuevo." << endl;
        int contador = intentos - 1;
        cout << "Le restan" << " " << contador << " " << "intentos" << endl;

        cout << "Por favor, ingrese las credenciales: " << endl;
        cin >> user >> password;

        if (user == "administrador2026" && password == "uca2026admin"){
            cout << "Credenciales verificadas. Bienvenido" << endl;
        }
            else {
                cout << "Por favor intente de nuevo." << endl;
                int contador = intentos - 2;
                cout << "Le restan" << " " << contador << " " << "intentos" << endl;

                cout << "Por favor, ingrese las credenciales: " << endl;
                cin >> user >> password;

                if (user == "administrador2026" && password == "uca2026admin"){
                    cout << "Credenciales verificadas. Bienvenido" << endl;
                }
            
                else {
                    cout << "Por favor intente de nuevo." << endl;
                    int contador = intentos - 3;
                    cout << "Le restan" << " " << contador << " " << "intentos" << endl;
                } 
            }
            
    }
    return 0;
}
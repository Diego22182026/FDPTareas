#include <iostream>
using namespace std;

int main (){

    // Declarando credenciales predefinidas

    string usuarioCorrecto = "admin1234";
    string contrasenaCorrecta = "uca2026FDP";

    // Declarando variables introducidas por el usuario

    string usuario, contrasena;

    // Solicitar datos

    cout << "Welcome!" << "Please insert the credentials: " << endl << endl;

    cout << "Username: " << endl;
    cin >> usuario;

    cout << "Password: " << endl;
    cin >> contrasena;

    // Verificacion

    if (usuario == usuarioCorrecto && contrasena == contrasenaCorrecta){

        cout << "Identity confirmed. Welcome" << endl;
    }  

    else{

        cout << "Wrong username or password. Please try again" << endl;
    }


    return 0;
}

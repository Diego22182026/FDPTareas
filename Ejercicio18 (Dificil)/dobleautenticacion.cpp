#include <iostream>
using namespace std;

int main (){

    // Declarando variables
    string password, password2;

    // Se le solicita al usuario 

    cout << "Por favor, digite su clave: " << endl;
    cin >> password;

    cout << "Por favor, reescriba su clave: " << endl;
    cin >> password2;

    // Autenticacion de claves

    if (password == password2){

        cout << "Los datos han sido verificados. Bienvenido" << endl;

    }
    
    else
        cout << "Las claves no coinciden. Por favor revisar" << endl;

    return 0;
}
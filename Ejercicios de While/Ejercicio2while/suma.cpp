#include <iostream>
using namespace std;

int main (){

    int numero, suma = 0;
    cout << "Ingresa un numero. Ten en cuenta que al ingresar 0, los numeros se sumaran." << endl;
    cin >> numero;

    while (numero !=0){

        cout << "Ingresa otro numero. " << endl;
        cin >> numero;

        suma = suma+numero;
    }
            cout <<  "Ingresaste el numero 0, ahora, la suma de todos los numeros anteriormente ingresados es: " << suma << endl;
    return 0;
}
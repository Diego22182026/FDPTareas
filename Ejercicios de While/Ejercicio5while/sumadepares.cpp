#include <iostream>
using namespace std;

int main (){

    int N, i = 2, suma = 0;

    cout << "Ingresa un numero: " << endl;
    cin >> N;

    while (i<=N){

            suma = suma + i;
            i = i + 2;

    }

    cout << "La suma de los numeros pares es: " << suma << endl;

    
    return 0;

}

#include <iostream>
using namespace std;

int main (){

    // Declarando variables

    int a,b;

    // Se le da la bienvenida al usuario y se le solicita ingresar dos numeros

    cout << "Welcome! " << endl << "Please enter a number: " << endl;
    cin >> a;

    cout << "Please enter another number: " << endl;
    cin >> b;

    // Operaciones

    if (a>b){

        cout << a <<" " << "is bigger than" << " " << b << endl;
    }
    else if (a<b){

        cout << a << " " << "is smaller than" << " " << b << endl;
    }

    else {

        cout << a <<" " << "and" << " " << b << " " << "are equal" << endl;
    }

    return 0;
}
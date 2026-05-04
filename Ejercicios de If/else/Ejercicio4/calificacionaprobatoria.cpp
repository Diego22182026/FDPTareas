#include <iostream>
using namespace std;

int main (){

    //Declarando variables

    int a;

    // Se le da la bienvenida al usuario y se le solicita ingresar una calificacion

    cout << "Welcome to the grades assistant!" << endl << "Please enter your grade: " << endl << endl << endl << "Note: The grade must be on a 100-point scale" << endl;
    cin >> a;

    // Analisis y muestra de resultados

    if (a>=60){

        cout << "You have succesfully passed!" << endl;
    }

    else if (a<60){

        cout << "You have not passed" << endl;
    }

    return 0;
}
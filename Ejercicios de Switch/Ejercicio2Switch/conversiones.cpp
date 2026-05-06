#include <iostream>
using namespace std;

int main (){

    char o;
    float usd, eur, jpy, gpb;
    cout << "Por favor, selecciona una opcion: " << endl << endl << "1. USD A EUR" << endl << "2. USD A JPY" << endl << "3. USD a GPB" << endl;
    cin >> o;

    if (o < 2 || o > 4){

        cout << "Opcion no valida, elija una opcion del 1 al 3. " << endl;
        return 1; //Salida temprana del programa si la opcion no es valida
    }

    switch (o){

        case '1':
        cout << "Ingresa el valor en USD" << endl;
        cin >> usd;

        // Operacion de USD a EUR
        eur = usd * 0.86;
        
        cout << "Tu resultado es: " << eur << "EUR" << endl;
        break;


        case '2':

        cout <<"Ingresa el valor en USD" << endl;
        cin >> usd;

        // Operacion de USD a JPY
        jpy = (usd * 157.0);
        cout << "Tu resultado es: " << jpy << "JPY" << endl;
        break;

        case '3':
        cout << "Ingresa el valor en USD" << endl;
        cin >> usd;
        // Operacion de USD a GPB
        gpb = usd * 0.74;
        cout << "Tu resultado es: " << gpb << "GPB" << endl;
        break;
    }
        return 0;
}
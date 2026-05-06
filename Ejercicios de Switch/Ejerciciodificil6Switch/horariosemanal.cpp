#include <iostream>
using namespace std;

int main (){

    int opcion;

    cout << "Bienvenido al horario semanal. " << endl << "Por favor selecciona el dia para el que quieras ver el horario. " << endl;
    cout << "1. Lunes" << endl;
    cout << "2. Martes" << endl;
    cout << "3. Miercoles" << endl;
    cout << "4. Jueves" << endl;
    cout << "5. Viernes" << endl;
    cout << "6. Salir" << endl;
    cout << "Dia elegido: " << endl;
    cin >> opcion;

    if (opcion < 1 || opcion > 6){

        cout << "Datos incorrectos, por favor selecciona un dia de lunes a viernes. " << endl;
        
        return 1;
    }


    switch (opcion){

        case 1:
            cout << "Lunes:" << endl << "Precalculo - 7 A.M a 9 A.M " << endl << "Fundamentos de programacion - 11 A.M a 1 P.M" << endl;
            break;

        case 2:
            cout << "Martes:" << endl << "Elementos para el estudio de la ciencia y tecnologia - 9 A.M a 11 A.M" << endl << "Matematica discreta - 1:30 P.M a 3:30 P.M" << endl;
            break;

        case 3:
            cout << "Miercoles: " << endl << "Precalculo - 7 A.M a 9 A.M " << endl << "Fundamentos de programacion - 11 A.M a 1 P.M" << endl;
            break;

        case 4:
            cout << "Jueves: " << endl << "Elementos para el estudio de la ciencia y tecnologia - 9 A.M a 11 A.M" << endl << "Matematica discreta - 1:30 P.M a 3:30 P.M" << endl;
            break;

        case 5:
            cout << "Viernes: " << endl << "Precalculo - 7 A.M a 8 A.M " << endl << "Matematica discreta - 8 A.M a 9 A.M" << endl;
            break;

        case 6:
            cout << "Saliendo del programa. Hasta luego." << endl;
            break;

}
    return 0;
}
#include <iostream>
using namespace std;

int main (){

    // Declarando variables

    string calificacion1 =  "Principiante", calificacion2 = "Intermedio", calificacion3 = "Avanzado";
    int infracciones, edad, tiempodeexperiencia;

    // Se le solicita al usuario ingresar sus datos

    cout <<"Por favor, ingrese su edad: " << endl;
    cin >> edad;
    cout << "Por favor, ingrese el total de infracciones que posee (maximo 20): " << endl;
    cin >> infracciones;
    cout << "Por favor, ingrese hace cuanto tiempo empezo a conducir (maximo 10): " << endl;
    cin >> tiempodeexperiencia;

    // Criterios

    if (edad < 18 ){

        cout << "Usted no cuenta con la mayoria de edad, por lo tanto no puede aplicar a este cuestionario." << endl;
    }

    else if (edad >= 18 && edad <=21 || infracciones >= 15 && infracciones <=20 || tiempodeexperiencia >= 1 && tiempodeexperiencia <=3){
        cout << "En base a su edad, numero de infracciones y su tiempo de experiencia, su calificacion es: " << " " << calificacion1 << endl;

    }

    else if (edad >= 22 && edad <=30 || infracciones >=10 && infracciones <=14 || tiempodeexperiencia >=4 && tiempodeexperiencia <=6){

        cout << "En base a su edad, numero de infracciones y su tiempo de experiencia, su calificacion es: " << " " << calificacion2 << endl;
    }

    else if (edad >=31 || infracciones >=1 && infracciones <= 9 || tiempodeexperiencia >=7 && tiempodeexperiencia <=10){

        cout << "En base a su edad, numero de infracciones y tiempo de experiencia, su calificacion es: " << " " << calificacion3 << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main (){

    int fibo = 0, x = 1;

    while (fibo<=50){
        fibo = fibo + x;


        cout << fibo << endl;
        x = fibo + x;
        cout << x << endl;

    }


    return 0;
}

//Para el ciclo "1", fibo = 0 y x = 1, por ende = 0 + 1 = 1. Entonces fibo gana el valor de 1
//Luego se imprime el nuevo valor de fibo
//Para el ciclo "2", fibo = 1 y x = 1, por ende = 1 + 1 = 2. Entonces x gana el valor de 2
//Luego se imprime el nuevo valor de x
//Para el ciclo "3", fibo = 1 y x = 2, por ende 1 + 2 = 3. Entonces fibo gana el valor de 3.
//Para el ciclo "4", fibo = 3 y x =2, por ende 3 + 2 = 5. Entonces x gana el valor de 5.
//Y asi sucesivamente hasta que fibo vale 50 o mas
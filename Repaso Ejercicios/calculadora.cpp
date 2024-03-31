#include <iostream>
#include <math.h>

using namespace std;

int main(){

    //Declaracion de variables
    double numUno, numDos, suma, resta, multi, div, raiz, raizDos, potencia, potenciaDos;
    int calc;

    //Ingreso de elección de cálculo
    cout<<"--------------------------------------------------"<<endl;
    cout<<"    Bienvenido a la calculadora de dos números    "<<endl;
    cout<<"                                                  "<<endl;
    cout<<"   (0) Suma     (1) Resta    (2) Multiplicación   "<<endl;
    cout<<"   (3) División (4) Raíz cuadrada (5) Potencia    "<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cin>>calc;

    //Ingreso de números a calcular
    cout<<"Ingrese el primer número a calcular: ";
    cin>>numUno;
    cout<<"Ingrese el segundo número a calcular: ";
    cin>>numDos;

    //Condicional para determinar el cálculo a realizar
    switch(calc){
        case 0:
            //Calculo de la suma
            suma = numUno + numDos;
            cout<<"El resultado de la suma es: "<<suma<<endl;
            break;
        case 1:
            //Calculo de la resta
            resta = numUno - numDos;
            cout<<"El resultado de la resta es: "<<resta<<endl;
            break;
        case 2:
            //Calculo de la multiplicación
            multi = numUno * numDos;
            cout<<"El resultado de la multiplicación es: "<<multi<<endl;
            break;
        case 3:
            //Calculo de la división
            div = numUno/numDos;
            cout<<"El resultado de la división es: "<<div<<endl;
            break;
        case 4:
            //Calculo de la raíz cuadrada
            raiz = sqrt(numUno);
            raizDos = sqrt(numDos);
            cout<<"El resultado de la raíz del primer número es: "<<raiz<<"."<<"Y del segundo número es: "<<raizDos<<endl;
            break;
        case 5:
            //Calculo de la potencia
            potencia = pow(numUno,2);
            potenciaDos = pow(numDos, 2);
            cout<<"El resultado de la potencia del primer número es: "<<potencia<<"."<<"Y del segundo número es: "<<potenciaDos<<endl;
            break;
        default:
        //Mensaje de error
        cout<<"Error. Número incorrecto";
        system("pause");
        
    }
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double numUno, numDos, suma, resta, multi, div, raiz, raizDos, potencia, potenciaDos;
    int calc;

    cout<<"--------------------------------------------------"<<endl;
    cout<<"(0) Suma     (1) Resta    (2) Multiplicación"<<endl;
    cout<<"(3) División (4) Raíz cuadrada (5) Potencia "<<endl;
    cout<<"--------------------------------------------------"<<endl;
    cin>>calc;

    cout<<"Ingrese el primer número a calcular: ";
    cin>>numUno;
    cout<<"Ingrese el segundo número a calcular: ";
    cin>>numDos;

    switch(calc){
        case 0:
            suma = numUno + numDos;
            cout<<"El resultado de la suma es: "<<suma<<endl;
            break;
        case 1:
            resta = numUno - numDos;
            cout<<"El resultado de la resta es: "<<resta<<endl;
            break;
        case 2:
            multi = numUno * numDos;
            cout<<"El resultado de la multiplicación es: "<<multi<<endl;
            break;
        case 3:
            div = numUno/numDos;
            cout<<"El resultado de la división es: "<<div<<endl;
            break;
        case 4:
            raiz = sqrt(numUno);
            raizDos = sqrt(numDos);
            cout<<"El resultado de la raíz del primer número es: "<<raiz<<"."<<"Y del segundo número es: "<<raizDos<<endl;
            break;
        case 5:
            potencia = pow(numUno,2);
            potenciaDos = pow(numDos, 2);
            cout<<"El resultado de la potencia del primer número es: "<<potencia<<"."<<"Y del segundo número es: "<<potenciaDos<<endl;
            break;
        default:
        cout<<"Error. Número incorrecto";
        system("pause");
        
    }
    return 0;
}

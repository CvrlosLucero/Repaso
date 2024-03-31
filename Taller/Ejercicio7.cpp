#include <iostream>

using namespace std;

int main() {

    //Declaracion de variables
    int num;

    //Ingreso de número
    cout<<"Ingrese el número para verificación: ";
    cin>>num;

    //Condicional para determinar si el número es par o impar
    if(num % 2 == 0){
        cout<<"El número "<<num<<" es par."<<endl;
    }else{
        cout<<"El número "<<num<<" es impar."<<endl;
    }

  return 0;
}
#include <iostream>

using namespace std;

int main(){

    //Declaracion de variables
    float temp, res;

    //Ingreso de temperatura en Fahrenheit
    cout<<"Ingrese la temperatura Fahrenheit en números: ";
    cin>>temp;

    //Calculo de la temperatura en Centigrados
    res = (temp-32) /1.8;

    //Impresion de resultado
    cout<<"Su temperatura en Centigrados es: "<<res<<endl;

    return 0;
}
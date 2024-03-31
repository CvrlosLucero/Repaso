#include <iostream>

using namespace std;

int main(){

    //Declaracion de variables
    double tiempo, velocidadUno, velocidadDos, distancia;

    //Ingreso de datos
    cout<<"Ingrese la velocidad del primer auto en Km/h: ";
    cin>>velocidadUno;
    cout<<"Ingrese la velocidad del segundo auto en Km/h: ";
    cin>>velocidadDos;
    cout<<"Ingrese la distancia entre las 2 ciudades: ";
    cin>>distancia;

    //Calculo del tiempo que se demoran los 2 autos en cruzarse
    tiempo = distancia / (velocidadUno-velocidadDos);

    //Impresion de resultado
    cout<<"El tiempo que se demoran los 2 autos en cruzarse es de: "<<tiempo;

}
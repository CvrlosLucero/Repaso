#include <iostream>

using namespace std;

int main(){

    double tiempo, velocidadUno, velocidadDos, distancia;

    cout<<"Ingrese la velocidad del primer auto en Km/h: ";
    cin>>velocidadUno;
    cout<<"Ingrese la velocidad del segundo auto en Km/h: ";
    cin>>velocidadDos;
    cout<<"Ingrese la distancia entre las 2 ciudades: ";
    cin>>distancia;

    tiempo = distancia / (velocidadUno-velocidadDos);

    cout<<"El tiempo que se demoran los 2 autos en cruzarse es de: "<<tiempo;

}
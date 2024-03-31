#include <iostream>

using namespace std;

int main() {
  //Declaracion de variables
  int suma=0;
  int cuenta=1;

  //Ciclo para sumar los números enteros del 1 al 100
  while(cuenta <= 100){
    suma += cuenta;
    cuenta++;
  }

  //Impresion de resultado
  cout<<"La suma de los números enteros del 1 al 100 es: "<<suma<<endl;

  return 0;
}
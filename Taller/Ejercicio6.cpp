#include <iostream>

using namespace std;

int main() {
  int suma = 0;
  int cuenta = 1;

  while (cuenta <= 100) {
    suma += cuenta;
    cuenta++;
  }

  cout << "La suma de los números enteros del 1 al 100 es: "<<suma<<endl;

  return 0;
}
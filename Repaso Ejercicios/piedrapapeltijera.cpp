#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
  
  //Declaracion de vector de opciones
  vector<string> opciones = {"Piedra", "Papel", "Tijera"};

  //Declaracion de eleccion
  int eleccion;
  cout << "Elige tu opción (0: Piedra, 1: Papel, 2: Tijera): ";
  cin >> eleccion;

  //Generacion de eleccion de la maquina
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> distr(0, 2);
  int maquinaEleccion = distr(gen);

  //Impresion de elecciones
  cout << "Yo: " << opciones[eleccion] << endl;
  cout << "Máquina: " << opciones[maquinaEleccion] << endl;

  //Condicional para determinar el ganador
  if (eleccion == maquinaEleccion) {
    cout << "Empate!" << endl;
  } else if ((eleccion == 0 && maquinaEleccion == 2) ||
               (eleccion == 1 && maquinaEleccion == 0) ||
               (eleccion == 2 && maquinaEleccion == 1)) {
      cout << "Ganaste!" << endl;
    } else {
      cout << "Perdiste!" << endl;
    }

  return 0;
}

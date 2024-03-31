#include <iostream>
#include <random>

using namespace std;

int main(){
    
  srand(time(NULL));

  //Declaracion de variables
  int round = 1;
  bool next = true;

  //Inicio del juego
  while (next) {
    
    //Inicio de ronda
    cout << "** Round " << round << " **" << endl;

    //Tirada de dados del jugador y PC
    int throwPlayer = (rand() % 6) + 1;
    cout << "Your throw: " << throwPlayer << endl;
    
    int throwPC = (rand() % 6) + 1;
    cout << "PC's throw: " << throwPC << endl;

    //Determinar ganador de la ronda
    if (throwPlayer > throwPC) {
      cout << "You win!" << endl;
    } else if (throwPlayer < throwPC) {
      cout << "PC won the round." << endl;
    } else {
      cout << "Draw." << endl;
    }

    round++;

    //Preguntar si desea continuar
    cout << "Do you want to continue? (Y/N): ";
    char answer;
    cin >> answer;

    next = (answer == 'Y');
  }
    return 0;
}

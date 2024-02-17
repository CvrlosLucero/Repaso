#include <iostream>
#include <random>

using namespace std;

int main()
{
    srand(time(NULL));

  int round = 1;
  bool next = true;

  while (next) {
    
    cout << "** Round " << round << " **" << endl;

    int throwPlayer = (rand() % 6) + 1;
    cout << "Your throw: " << throwPlayer << endl;
    
    int throwPC = (rand() % 6) + 1;
    cout << "PC's throw: " << throwPC << endl;

    if (throwPlayer > throwPC) {
      cout << "You win!" << endl;
    } else if (throwPlayer < throwPC) {
      cout << "PC won the round." << endl;
    } else {
      cout << "Draw." << endl;
    }

    round++;

    cout << "Do you want to continue? (Y/N): ";
    char answer;
    cin >> answer;

    next = (answer == 'Y');
  }
    return 0;
}

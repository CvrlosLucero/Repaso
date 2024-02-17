#include <iostream>

using namespace std;

int main() {
  int num;

    cout << "Ingrese el número para verificación: ";
    cin >> num;

  if (num % 2 == 0) {
        cout << "El número " <<num<<" es par."<<endl;
  } else {
        cout << "El número " <<num<<" es impar."<<endl;
  }

  return 0;
}
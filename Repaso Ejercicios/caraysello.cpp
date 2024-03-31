#include <iostream>
#include <random>

using namespace std;

int main(){

    //Declaracion de variables
    int eleccion, rnd;
    char res;

    //Ingreso de elección
    cout<<"Elije una: [1] Cara [2] Sello"<<endl;
    cin>>eleccion;
    
    //Condicional para determinar si la elección es válida
    if (eleccion < 1 || eleccion > 2) {
      cout << "Elección no válida. Intente de nuevo." <<endl;
	    return 0;
    }
	
    //Generación de número aleatorio
	  rnd = rand() % 2;
	
    //Condicional para determinar el resultado
	  if (eleccion == 1) {
      res = rnd ? 'S' : 'C';
    } else {
      res = rnd ? 'C' : 'S';
    }
    
    //Impresión de resultado
    cout<<"Le tocó: "<<res<<endl;

    return 0;
}

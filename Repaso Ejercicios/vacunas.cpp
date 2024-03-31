#include <iostream>

using namespace std;

int main(){

    //Declaracion de variables
    float pesobebe, mesesbebe, dosisvacuna;

    //Ingreso de peso y edad del bebe
    cout<<"Ingrese el peso del bebé en Kg: "<<endl;
    cin>>pesobebe;
    cout<<"Ingrese la edad en meses del bebe: "<<endl;
    cin>>mesesbebe;

    //Calculo de la dosis de la vacuna
    dosisvacuna = ((pesobebe+10)/(mesesbebe*10))*8;

    //Impresion de la dosis de la vacuna
    cout<<"La dosis del bebe es de: "<<dosisvacuna<<" mL."<<endl;
    return 0;
}
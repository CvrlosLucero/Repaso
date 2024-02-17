#include <iostream>

using namespace std;

int main(){

    double salario, aumentoSalario;

    cout<<"Ingrese el salario del trabajador: ";
    cin>>salario;

    if(salario<1000000){
        aumentoSalario = salario * 1.15;
        cout<<"El nuevo salario del trabajador es de: "<<aumentoSalario<<endl;
    }else{
        cout<<"El trabajador no cuenta con la posibilidad de aumento."<<endl;
    }
    return 0;
}
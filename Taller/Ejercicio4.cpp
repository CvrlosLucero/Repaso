#include <iostream>

using namespace std;

int main(){

    double salario, horasTrabajadas, horasExtras, pagoAdicional;

    cout<<"Ingrese la cantidad de horas trabajadas: "<<endl;
    cin>>horasTrabajadas;

    if(horasTrabajadas<=35){
        salario = horasTrabajadas * 40000;
        cout<<"El salario semanal del trabajador es de: "<<salario;
    }else{
        horasExtras = horasTrabajadas - 35;
        pagoAdicional = horasExtras * 45000;
        salario = 1400000 + pagoAdicional;
        cout<<"El salario semanal del trabajador es de: "<<salario;


        
    }
    return 0;
}
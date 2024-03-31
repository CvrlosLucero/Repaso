#include <iostream>

using namespace std;

int main(){

    //Declaracion de variables
    double salario, horasTrabajadas, horasExtras, pagoAdicional;

    //Ingreso de horas trabajadas
    cout<<"Ingrese la cantidad de horas trabajadas: "<<endl;
    cin>>horasTrabajadas;

    //Condicional para determinar el salario semanal teniendo en cuenta que la hora trabajada se paga a $40.000 y las horas extras a $45.000
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
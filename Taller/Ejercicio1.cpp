#include <iostream>

using namespace std;

int main(){

    double deuda, descuento, deudaTotal;

    cout<<"Ingrese la deuda a analizar: ";
    cin>>deuda;

    if(deuda>60000 && deuda<150000){

        descuento = deuda * 0.20;

        deudaTotal = deuda - descuento;
    }else if(deuda>150000 && deuda<300000){
        descuento = deuda * 0.30;

        deudaTotal = deuda - descuento;

    }else if(deuda>300000 && deuda<800000){
        descuento = deuda * 0.40;

        deudaTotal = deuda - descuento;
    }else if(deuda>800000){
        descuento = deuda * 0.50;

        deudaTotal = deuda - descuento;
    }

    cout<<"El descuento a realizar de su deuda es de: "<<descuento<<"y su deuda total es de: "<<deudaTotal;

    return 0;
    }
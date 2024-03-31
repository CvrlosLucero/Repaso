#include <iostream>

using namespace std;

int main(){

    int plan;
    double valorEquipo, descuento, valorNeto;

    cout<<"Ingrese el tipo de plan que tiene (0 para prepago, 1 para postpago): "<<endl;
        cin>>plan;

    switch(plan){
        case 0:
            cout<<"Ingrese el valor del equipo a comprar: "<<endl;
                cin>>valorEquipo;
            if(valorEquipo>100000 && valorEquipo<900000){
                descuento = valorEquipo * 0.10;
                valorNeto = valorEquipo - descuento;
                cout<<"El valor con descuento de su equipo es de: "<<valorNeto<<endl;
            }else if (valorEquipo>1000000)
            {
                descuento = valorEquipo *0.20;
                valorNeto = valorEquipo - descuento;
                cout<<"El valor con descuento de su equipo es de: "<<valorNeto<<endl;
            }else{
                cout<<"Su equipo no tiene descuento o no existe.";
            }
          break;
        case 1:
            cout<<"Ingrese el valor del equipo a comprar: "<<endl;
                cin>>valorEquipo;
            if(valorEquipo<500000){
                descuento = valorEquipo * 0.15;
                valorNeto = valorEquipo - descuento;
                cout<<"El valor con descuento de su equipo es de: "<<valorNeto<<endl;
            }else if (valorEquipo>500000 && valorEquipo<1000000)
            {
                descuento = valorEquipo * 0.20;
                valorNeto = valorEquipo - descuento;
                cout<<"El valor con descuento de su equipo es de: "<<valorNeto<<endl;
            }else if(valorEquipo>1000000)
            {
                descuento = valorEquipo * 0.25;
                valorNeto = valorEquipo - descuento;
                cout<<"El valor con descuento de su equipo es de: "<<valorNeto<<endl;

            }
          break;
        default:
            cout<<"Error. Plan no encontrado, intentelo de nuevo.";
          break;
    }
    return 0;
}
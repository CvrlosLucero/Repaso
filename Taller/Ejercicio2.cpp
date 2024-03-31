#include <iostream>

using namespace std;

int main(){

    //Declaracion de variables
    int plan;
    double valorEquipo, descuento, valorNeto;

    //Ingreso de tipo de plan
    cout<<"Ingrese el tipo de plan que tiene (0 para prepago, 1 para postpago): "<<endl;
        cin>>plan;

    //Condicional para determinar el descuento a realizar según el plan
    switch(plan){
        case 0:
            //Ingreso valor del equipo
            cout<<"Ingrese el valor del equipo a comprar: "<<endl;
                cin>>valorEquipo;
            //Condicional para determinar el descuento a realizar segun el valor del equipo
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
            //Ingreso valor del equipo
            cout<<"Ingrese el valor del equipo a comprar: "<<endl;
                cin>>valorEquipo;
            //Condicional para determinar el descuento a realizar segun el valor del equipo
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
            //Mensaje de error
            cout<<"Error. Plan no encontrado, intentelo de nuevo.";
          break;
    }
    return 0;
}
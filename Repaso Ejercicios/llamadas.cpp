# include <iostream>
# include <string.h>
using namespace std;

int main()
{
		//Declaracion de variables
		int tipoLlamada, duracion, costoLlamada;
		string continuar, confirm;
		
		//Inicio del programa
		cout<< "MENU: Elija el tipo de llamada que va a realizar."<<endl;
		cout<< "1. Llamada fija."<<endl;
		cout<< "2. Llamada celular."<<endl;
		cout<< "3. Llamada internacional."<<endl;
		
		cin>> tipoLlamada;
		
		//Condicional para determinar el tipo de llamada
		switch(tipoLlamada) {
			case 1:
				//Calculo de costo de llamada fija
				cout<<"Su eleccion fue llamada fija..."<<endl;
				cout<<"Digite la duracion en minutos de su llamada."<<endl;
				cin>>duracion;
				
				costoLlamada = duracion * 200;
				
				cout<<"Su llamada tiene un costo de: "<<costoLlamada<<endl;
			break;
			case 2:
				//Calculo de costo de llamada celular
				cout<<"Su eleccion fue llamada celular..."<<endl;
				cout<<"Digite la duracion en minutos de su llamada."<<endl;
				cin>>duracion;
				
				costoLlamada = duracion * 300;
				
				cout<<"Su llamada tiene un costo de: "<<costoLlamada<<endl;
				
			break;
			case 3:
				//Calculo de costo de llamada internacional
				cout<<"Su eleccion fue llamada internacional..."<<endl;
				cout<<"Digite la duracion en minutos de su llamada."<<endl;
				cin>>duracion;
				
				costoLlamada = duracion * 500;
				
				cout<<"Su llamada tiene un costo de: "<<costoLlamada<<endl;
			break;
			
			default:
			//Mensaje de error
			cout<<"\nOpcion no valida intente denuevo\n";
			return main();
			break;
		}
	system("pause");	
}

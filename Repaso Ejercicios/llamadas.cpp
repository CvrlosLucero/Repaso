# include <iostream>
# include <string.h>
using namespace std;

int main()
{

		int tipoLlamada, duracion, costoLlamada;
		string continuar, confirm;
		
		cout<< "MENU: Elija el tipo de llamada que va a realizar."<<endl;
		cout<< "1. Llamada fija."<<endl;
		cout<< "2. Llamada celular."<<endl;
		cout<< "3. Llamada internacional."<<endl;
		
		cin>> tipoLlamada;
		
		switch(tipoLlamada) {
			case 1:
				cout<<"Su eleccion fue llamada fija..."<<endl;
				cout<<"Digite la duracion en minutos de su llamada."<<endl;
				cin>>duracion;
				
				costoLlamada = duracion * 200;
				
				cout<<"Su llamada tiene un costo de: "<<costoLlamada<<endl;
			break;
			case 2:
				cout<<"Su eleccion fue llamada celular..."<<endl;
				cout<<"Digite la duracion en minutos de su llamada."<<endl;
				cin>>duracion;
				
				costoLlamada = duracion * 300;
				
				cout<<"Su llamada tiene un costo de: "<<costoLlamada<<endl;
				
			break;
			case 3:
				cout<<"Su eleccion fue llamada internacional..."<<endl;
				cout<<"Digite la duracion en minutos de su llamada."<<endl;
				cin>>duracion;
				
				costoLlamada = duracion * 500;
				
				cout<<"Su llamada tiene un costo de: "<<costoLlamada<<endl;
			break;
			
			default:
			cout<<"\nOpcion no valida intente denuevo\n";
			return main();
			break;
		}
	system("pause");	
}

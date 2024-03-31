#include <iostream>

using namespace std;

//Declaracion de constantes (Usuario y contraseña)
const string USUARIO = "Test123";
const string CONTRASENA = "gatitos001";

//Funcion para verificar el login
bool login(string username, string password) {
	
    return (username == USUARIO && password == CONTRASENA);
}

int main() {
    //Declaracion de variables
    string username, password;

    //Ingreso de usuario y contraseña
    cout << "Digite su nombre de usuario: ";
    cin >> username;

    cout << "Digite su contraseña: ";
    cin >> password;

    //Verificacion de login
    if (login(username, password)) {
        cout << "¡Bienvenido!, " << username << "!" << endl;
    } else {
        cout << "Usuario desconocido. Intentelo de nuevo." << endl;
    }

    return 0;
}
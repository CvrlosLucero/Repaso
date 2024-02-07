#include <iostream>

using namespace std;

const string USUARIO = "Test123";
const string CONTRASENA = "gatitos001";

bool login(string username, string password) {
	
    return (username == USUARIO && password == CONTRASENA);
}

int main() {
    string username, password;

    cout << "Digite su nombre de usuario: ";
    cin >> username;

    cout << "Digite su contraseña: ";
    cin >> password;

    if (login(username, password)) {
        cout << "¡Bienvenido!, " << username << "!" << endl;
    } else {
        cout << "Usuario desconocido. Intentelo de nuevo." << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

void acceso()
{
    //Variables de acceso al sistema
    bool login = false;
    string usuario = " ";
    string contrasena = " ";

    //Usuario y contraseña (editar de ser necesario)
    string usr = "prz";
    string pwd = "holamundo";

    while(login == false)
    {   
        system("cls");
        cout << "Ingrese nombre de usuario: ";
        cin >> usuario;
        cout << endl;
        cout << "Ingrese la clave de acceso -> ";
        cin >> contrasena;

        if(usuario == usr && contrasena == pwd)
        {
            system("cls");
            cout << "Bienvenido al sistema!" << endl;
            break;
        } 
        
    }
}
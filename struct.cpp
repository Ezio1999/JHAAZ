#include <iostream>
#include <string>
using namespace std;

struct trabajo
{
    char nombre[20];
    int edad;
    char sexo[20];
    char trabajo[20];

};


int main()
{
    trabajo user;
    cout<<"Ingresa Tu Nombre: ";
    cin>>user.nombre;
    cout<<"Ingresa Tu Edad: ";
    cin>>user.edad;
    cout<<"Ingresa Tu Genero: ";
    cin>>user.sexo;
    cout<<"Ingresa Tu Puesto: ";
    cin>>user.trabajo;

    cout<<"**INFORMACION DEL EMPLEADO**\n";

    cout<< "NOMBRE: "<< user.nombre <<endl;
    cout<< "EDAD: "<< user.edad <<endl;
    cout<< "GENERO: "<< user.sexo <<endl;
    cout<< "PUESTO: "<< user.trabajo <<endl;

    return 0;
}

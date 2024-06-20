#include <iostream>
#include <cstring>
using namespace std;
const int reser_maxi=100;
char nom[reser_maxi][100];
char mes[reser_maxi][100];
int diass[reser_maxi];
int hora[reser_maxi];
int com[reser_maxi];
int cont=0;
void crearR()
{
    cout<<" RESERVACIONES\n ";
    cout<<" Para realizar su reservacion conteste el pequeño formulario "<<endl;
    cout<<" Ingrese el nombre a quien quedaria la reservacion\n ";
    cin>>nom[cont];
    cout<<" ¿Para que fecha le gustaria asignar su reservacion?, especifique el dia "<<endl;
    cin>>diass[cont];
    cout<<" Por favor ingrese el mes deseado "<<endl;
    cin>>mes[cont];
    cout<<" Ahora seleccione el horario, es importante que lo seleccione EN FORMATO 24HRS "<<endl;
    cin>>hora[cont];
    cout<<" ¿Para cuantos comensales seria su mesa?"<<endl;
    cin>>com[cont];
    cout<<" Reservacion agendada\n";
    cont++;
}

void listR()
{ int i;
    for( i=0; i<=cont; i++)
    {
        cout<<" RESERVACION "<<i+1<<nom[i]<<" el dia "<<diass[i]<<" de "<<mes[i]<<" a las "<<hora[i]<<" horas con una mesa para "<<com[i]<<" comenzales"<<endl;   
    }
}

void actR()
{
    int ind;
    cout<<" Ingrese el numero de reservacion que desee actualizar\n ";
    cin>>ind;
    if(ind-1<cont && ind>0)
    {
        cout<<" Has seleccionado CONSULTAR TU RESERVACION "<<endl;
        cout<<" Para reagendar le solicitamos llenar el formulario nuevamente con sus cambios corespondientes\n ";
        cout<<" Ingrese el nombre a quien quedaria la reservacion\n ";
        cin>>nom[ind-1];
        cout<<" ¿Para que fecha le gustaria asignar su reservacion?, especifique el dia "<<endl;
        cin>>diass[ind-1];
        cout<<" Por favor ingrese el mes deseado "<<endl;
        cin>>mes[ind-1];
        cout<<" Ahora seleccione el horario, es importante que lo seleccione EN FORMATO 24HRS "<<endl;
        cin>>hora[ind-1];
        cout<<" ¿Para cuantos comensales seria su mesa?"<<endl;
        cin>>com[ind-1];
        cout<<" Okay, reservacion actualizada para visualizar sus cambios vea sus reservaciones\n "; 
    }
    else
    {
        cout<<" Ups la reservacion no fue encontrada "<<endl;
    }
}

void eliR()
{
    int ind;
    cout<<" Ingresa el numero de reservacion que quieras eliminar\n ";
    cin>>ind;
    if(ind-1<cont && ind>0)
    {
        for( int i= ind-1; i<=cont-1; i++)
        {
            strcpy(nom[i], nom[i+1]);
            diass[i]=diass[i+1];
            strcpy(mes[i], mes[i+1]);
            hora[i]=hora[i+1];
            com[i]=com[i+1];
        }
        cont--;
        cout<<" Reservacion eliminada\n";
    }
    else
    {
       cout<<" Ups la reservacion no fue encontrada "<<endl; 
    }
}

int main()
{
    int op;
    do
    {
      cout<<" Bienvenido al restaurante JHAAZ\n";
      cout<<" este es un sitio de reservaciones de ultima generacion\n ";
      cout<<" A continuacion estos son los servicios que ofrecemos, seleccione la opcion que desee\n ";
      cout<<" 1) RESERVACIONES\n ";
      cout<<" 2) VER TUS RESERVACIONES\n ";
      cout<<" 3) CONSULTAR TUS RESERVACIONES\n ";
      cout<<" 4) CANCELAR RESERVACION\n ";
      cout<<" 5) CONFIRMAR RESERVACION\n ";
      cin>>op;
      switch(op)
      {
        case 1:
         crearR();
         break;
        case 2:
         listR();
         break;
        case 3:
         actR();
         break;
        case 4:
         eliR();
         break;
        case 5:
         cout<<" Perfecto, has confirmado tu reservacion y ha sido agendada correctamente\n ";
         cout<<" Gracias por reservar en JHAAZ vuelva pronto :) ";
         break;
        default:
         cout<<" Ups ha ocurrido un error la opcion no coincide con ninguno de nuestros servicios "<<endl;
         break;
      }
    } while ( op!=5 );
    return 0;
}

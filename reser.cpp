#include <iostream>
using namespace std;
int main()
{
    int op, dia, hora, personas,Co, o;
    char nombre[100];
    char mes[50];
    cout<<" Bienvenido a el restaurante JHAAZ\n ";
    cout<<" Este es un sitio de reservaciones de ultima generacion "<<endl;
    cout<<" Para realizar su reservacion conteste el pequeño formulario "<<endl;
    cout<<" RESERVACIONES ";
    cout<<" Por favor, introduzca el nombre de la persona a quien quedaria la reservacion "<<endl;
    cin>>nombre;
    cout<<" ¿Para que fecha le gustaria asignar su reservacion? "<<nombre<<endl;
    cout<<" Por favor, especifique el dia deseado"<<endl;
    cin>>dia;
    cout<<" Por favor ingrese el mes deseado "<<endl;
    cin>>mes;
    cout<<" Ahora seleccione el horario, es importante que lo seleccione EN FORMATO 24HRS "<<endl;
    cin>>hora;
    cout<<" ¿Para cuantos comensales seria su mesa?"<<endl;
    cin>>personas;
    cout<<" Perfecto, para hacer la confirmacion\n ";
    cout<<" su reservacion quedaria a nombre de "<<nombre<<" el dia "<<dia<<" de "<<mes<<" a las "<<hora<<" horas con una mesa para "<<personas<<" comenzales"<<endl;
    cout<<" ¿Sus datos serian los correctos?, en caso de no serlos no te preocupes para todo hay una solucion ";   
    cout<<" 1) SI"<<" 2) NO "<<endl;
    cin>>op;
    if(op==2)
    {
      char nombre2[100];
      cout<<" Has seleccionado CONSULTAR TU RESERVACION "<<endl;
      cout<<" ingrese el nombre de la persona con la que se registro su reservacion "<<endl;
      cin>>nombre2;
      if(nombre2==nombre){
        cout<<" su reservacion es: "<<" el dia "<<dia<<" de "<<mes<<" a las "<<hora<<" con una mesa para "<<personas<<" comenzales"<<endl;
        cout<<"¿Desea hacer algun cambio? "<<endl;
        cout<<" 1) SI"<<" 2) NO "<<endl;
        cin>>o;
        if(o==1){
            char mes2[50];
            cout<<" Para reagendar le solicitamos llenar el formulario nuevamente con sus cambios corespondientes ";
            cout<<" Por favor, introduzca el nombre de la persona a quien quedaria la reservacion "<<endl;
            cin>>nombre2;
            cout<<" ¿Para que fecha le gustaria asignar su reservacion? "<<nombre2<<endl;
            cout<<" Por favor, especifique el dia deseado"<<endl;
            cin>>dia;
            cout<<" Por favor ingrese el mes deseado "<<endl;
            cin>>mes2;
            cout<<" Ahora seleccione el horario, es importante que lo seleccione EN FORMATO 24HRS "<<endl;
            cin>>hora;
            cout<<" ¿Para cuantos comensales seria su mesa?"<<endl;
            cin>>personas;
            cout<<" Perfecto, para hacer la confirmacion\n ";
            cout<<" su reservacion quedaria a nombre de "<<nombre2<<" el dia "<<dia<<" de "<<mes2<<" a las "<<hora<<" horas con una mesa para "<<personas<<" comenzales"<<endl;
           cout<<" Perfecto se ha reagendado su reservacion, que tenga un buen dia "<<nombre2<<" vuelva prontoo";
        }
        else if(o==2){
            cout<<" Okay su reservacion quedaria completamente igual a nombre de "<<nombre<<" el dia "<<dia<<" de "<<mes<<" a las "<<hora<<" horas con una mesa para "<<personas<<" comenzales"<<endl;
            cout<<" que tenga un bonito dia"<<nombre<<" vuelva pronto!!";
        }
      }
      else
      {
        cout<<" Ups el nombre que acaba de ingresar no coincide con ninguna reservacion registrada ";
      }
    }
    else if(op==1)
    {
        cout<<" Reservacion registrada, que tenga un buen dia "<<nombre<<" vuelva pronto ";
    }
    return 0;
}
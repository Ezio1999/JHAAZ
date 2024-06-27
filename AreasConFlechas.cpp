//codigo de hellen//
#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;
#define PI 3.14
#define COLOR_ROJO  12
#define COLOR_BLANCO 15
#define COLOR_OTROS 13

void LimpiarHam()
{
	system("cls");	
}

int main()
{

    while (true) 
    {
        int opcion = 1;
        double area;
        bool selected = false;

        while (!selected) {

            cout << "Seleccione la figura:" << endl;
            cout << (opcion == 1 ? "> " : "  ") << "1. Circulo" << endl;
            cout << (opcion == 2 ? "> " : "  ") << "2. Rectangulo" << endl;
            cout << (opcion == 3 ? "> " : "  ") << "3. Triangulo" << endl;
            cout << (opcion == 4 ? "> " : "  ") << "4. Cuadrado" << endl;
            cout << (opcion == 5 ? "> " : "  ") << "5. Salir" << endl;
            int key = _getch();

            if (key == 224) { 
                key = _getch();
                if (key == 72) { 
                    if (opcion > 1) {
                        opcion--;
                    }
                }
                else if (key == 80) {
                    if (opcion < 5) {
                        opcion++;
                    }
                }
            }
            else if (key == 13) { 
                selected = true;
            }
            LimpiarHam();
        }
        

        switch (opcion) 
        {
        case 1:
         {
            double radio;
            cout <<"Ingrese el radio del circulo: ";
            cin >> radio;
            area = PI * radio * radio;
            cout << "El area del circulo es: " << area << endl;
            break;
        }
        
        case 2: 
        {
            double base, altura;
            cout << "Ingrese la base del rectangulo: ";
            cin >> base;
            cout << "Ingrese la altura del rectangulo: ";
            cin >> altura;
            area = base * altura;
            cout << "El area del rectangulo es: " << area << endl;
            break;
        }
        
        case 3: 
        {
            double base, altura;
            cout << "Ingrese la base del triangulo: ";
            cin >> base;
            cout << "Ingrese la altura del triangulo: ";
            cin >> altura;
            area = (base * altura) / 2;
            cout << "El area del triangulo es: " << area << endl;
            break;
        }
        
        case 4: {
            double lado;
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            area = lado * lado;
            cout << "El area del cuadrado es: " << area << endl;
            break;
        }
        
        case 5:
            cout << "Salir del programa." << endl;
            return 0;
            break;
        }


        cout << "Presione cualquier tecla para volver al menu..." << endl;
        _getch();
    }
        
	return 0;
}



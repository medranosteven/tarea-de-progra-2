//Programa Hecho Por: Jesus Steven Medrano Carballo 
//Carnet: MC18055

//Librerias necesarias en el programa
#include<iostream> //libreria de entrada y salida
#include<conio.h> // libreria de archivo de cabecera
#include <math.h> //es un archivo de cabecera de la biblioteca estándar del lenguaje en c++

using namespace std;

//Declaracion de funciones
void area_1();
void area_2();

//Funcion Principal
int main(){
		
		int opcion; //Variable para las opciones del menu que usamos

    do{
    		
    	cout << "\n ********************************************************************";//Decoracion
		cout << "\n         Bienvenid@ espero que nuestro proceso sea el que buscas\n";
		cout << "\n       ESTE ES UN PROGRAMA QUE CALCULA EL AREA DE UN CUADRADO Y CUBO.";
		cout << "\n ********************************************************************";//Decoracion
		cout << "\n =             1. Calcular el area de un cuadrado.                  =";
		cout << "\n =               2. Calcular el area de un cubo.                    =";
		cout << "\n =                        3. Salir del menu.                                 =";
		cout << "\n ********************************************************************";//Decoracion
    	
    	//Inicio de bucle para introduccir opcion del menu
        do{
        	cout << "\n\n   Introduzca opcion (1 al 3): ";
			cin >> opcion;
			
        	(cin.fail()||opcion <= 0);
    		cin.clear();
    		cin.ignore(1024 , '\n');
    						
		}while(opcion <= 0);//Condicion para salir del bucle de pedir opcion
		
        system("cls");
        
        /* Inicio del anidamiento */
        switch ( opcion ){
            case 1:	
					area_1();
            		break;
            case 2: 
            		area_2();
        }

         /* Fin del anidamiento */
    } while ( opcion != 3 );
	
    return 0;
	
	getch();

}

//Implementacion de las funciones
void area_1(){
	
	//Variables de la funcion
	
	int a;//Variable para el tamaño de lado
	int resp;//Variable para la respuesta
	
	cout << "Ingrese el tamañoo del lado del cuadrado: ";
	cin >> a;
	
	cout << endl;
	
	int *puntero = &a; //Puntero para la variable a
	
	resp = pow(*puntero,2); //formula para el area
	
	cout << "El area del cuadrado es de: " << resp << " cm cuadrados" << "\n\n"; 
	
	system("pause");
	system("cls");
	
}


void area_2(){
	
	int a; //Variable para el tamaño de lado
	int resp; //Variable para la respuesta
	
	cout << "Ingrese el tamanio de un lado del cubo: ";
	cin >> a;
	
	cout << endl;
	
	int *puntero = &a; //Puntero para la variable a
	
	resp = 6*pow(*puntero,2); //formula para el area
	
	cout << "El area del cubo es de: " << resp << " cm cuadrados" << "\n\n"; 
	
	system("pause"); //damos pausa
	system("cls"); //limpiamos pantalla
}

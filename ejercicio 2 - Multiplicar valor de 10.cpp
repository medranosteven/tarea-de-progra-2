//Programa Hecho Por: Jesus Steven Medrano Carballo 
//Carnet: MC18055

//Librerias necesarias en el programa
#include<iostream> //libreria de entrada y salida
#include<conio.h> // libreria de archivo de cabecera

using namespace std; //creacion de un bloque donde almacena todas las funciones

//Declaracion de funciones
void funcion(); // usamos esta Funcion

//Funcion Principal
int main(){
		
	funcion();//implementamos el Uso de la funcion 
	
	getch(); //lectura de un solo caracter

}

//Implementacion de la funcion con uso del void
void funcion(){
	
	//Variables necesarias para la funcion a y resp
	int a; //Varaible donde se guarda el numero
	int resp; //variable para las respuestas
	
	cout << "Ingrese un numero: "; cin >> a; //pedimos al usuario un numero
	
	//Usamos el Puntero que toma el valor de a
	int *puntero = &a;
	
	//Formula para multiplicar por 10 el valor del puntero en este programa
	resp = *puntero * 10; // puntero que usamos
	
	cout << "El valor del numero ingresado " << a << " multiplicado por 10 es de: " << resp << endl;	//le damos salida al valor ingresado
	cout << "el resultado es exitoso, gracias por usar este programa"; //saludos al usuario
}

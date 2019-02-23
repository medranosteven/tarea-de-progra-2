//Programa Hecho Por: Jesus Steven Medrano Carballo 
//Carnet: MC18055

//Librerias necesarias en el programa
#include<iostream> //libreria de entrada y salida
#include<conio.h> // libreria de archivo de cabecera
#include <math.h> //es un archivo de cabecera de la biblioteca estándar del lenguaje en c++

using namespace std; //creacion de un bloque donde almacena todas las funciones

void potencia(); // declaramos la funcion a utilizar

int main (){ // función principal del programa
	
	potencia (); //declaramos la variable a utilizar
	getch();  //lectura de un solo caracter
}

void potencia (){ //usamos la funcion void con la variable potencia
	 double a; // a sera la variable del dato a introducir
	 int b; // b sera el valor del exponente
	 int result; // es nuestro resultado
	 
	 cout << "Ingrese un numero para la base: "; //pedimos al usuario ingresar el numero
	 cin >> a;
	 cout << endl; // damos salto de linea
	 cout << "Ingrese un numero para el exponente: "; //pedimos el valor para el exponente a usar
	 cin >> b;
	 cout << endl; //damos salto de linea
	 
	 double *puntero = &a; //hacemos uso de puntero en a
	 int *puntero_2 = &b; //hacemos uso de puntero en b
	 
	 result = pow(*puntero, *puntero_2); //el resultado de la operacion
	 
	 cout << "El numero "<< a << " elevado a la potencia de " << b << " es igual a: "<< result <<endl; //mostramos en pantalla el resultado
}

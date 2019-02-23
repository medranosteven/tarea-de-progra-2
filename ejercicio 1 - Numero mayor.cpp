//Programa Hecho Por: Jesus Steven Medrano Carballo 
//Carnet: MC18055

//Librerias necesarias en el programa
#include<iostream> //libreria de entrada y salida
#include<conio.h> // libreria de archivo de cabecera

using namespace std; //creacion de un bloque donde almacena todas las funciones

//Declaracion de funciones
void mayor(); // usamos esta Funcion para saber el numero mayor

//iniciamos la Funcion principal
int main(){
		
	mayor();//implementamos el Uso de la funcion
	
 	getch(); //lectura de un solo caracter
}

//Implementacion de la funcion mayor
void mayor(){
	
	//las Variables necesarias en la funcion son a y b
	int a; //Varables para un numero
	int b; //Varables para un numero	
		
	cout << "Ingrese el primer numero: "; cin >> a; //pedimos al usuario el primer numero
	cout << "Ingrese el segundo numero: "; cin >> b; //pedimos al usuario el segundo numero
	cout << endl; //damos un salto de linea
	
	//Punteros necsarios para la funcion
	int *puntero_1 = &a; //primer puntero
	int *puntero_2 = &b; //segundo puntero
	
	//Condicion para saber que numero es el mayor y caul es el menor
	//Incio de condicion
	
	if(*puntero_1 > *puntero_2){
		cout << "El primer numero mayor es: " << *puntero_1 << endl; //damos salida al primer dato que señala el puntero
		cout << "El segundo numero menor es: " << *puntero_2; //damos salida al segundo dato que señala el puntero
	}
	else{
		cout << "El primer numero es: " << *puntero_2 << endl; //caso contrario que sea menor se da el resultado del primer numero
		cout << "El segundo numero es: " << *puntero_1 << endl; //se da el resultado del segundo numero
	}
	cout << "\n gracias por usar este programa"; //damos un breve suludo al usuario
}

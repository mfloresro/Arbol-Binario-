// edArbolBinario.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ArbolBinario.h"
using namespace std;

int main()
{
    ArbolBinario a;
    //a.agregarNodo(15);
    //a.agregarNodo(25);
    //a.agregarNodo(5);
    //a.agregarNodo(2);
    //a.agregarNodo(3);
    a.menu();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
/*#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo {
	int dato;
	Nodo* der;
	Nodo* izq;
};


void menu();
Nodo* crearNodo(int);
void insertarNodo(Nodo*&, int);
void mostrarArbol(Nodo*, int);

Nodo* arbol = NULL;

int main() {
	menu();

	//getch();
	return 0;
}//fin de main


void menu() {
	int dato, opcion, contador = 0;

	do {
		cout << "\t ..:::MENU:::.." << endl;
		cout << "1.- Insertar nodo" << endl;
		cout << "2.- Mostrar Arbol" << endl;
		cout << "3.- Salir" << endl;
		cout << "Seleccione una opcion -->";
		cin >> opcion;

		switch (opcion) {
		case 1: cout << "Ingresa un numero: ";
			cin >> dato;
			insertarNodo(arbol, dato);
			cout << "\n";
			system("pause");
			break;
		case 2: cout << "Mostrar arbol completo" << endl;
			mostrarArbol(arbol, contador);
			cout << "\n";
			system("pause");
			break;
		}//fin switch
		system("cls");
	} while (opcion != 2);
}//fin menu


Nodo* crearNodo(int n) {
	Nodo* nuevo_nodo = new Nodo();

	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;

	return nuevo_nodo;
}


void insertarNodo(Nodo*& arbol, int n) {
	if (arbol == NULL) {
		Nodo* nuevo_nodo = crearNodo(n);
		arbol = nuevo_nodo;
	}//fin if
	else {
		int valorRaiz = arbol->dato;
		if (n < valorRaiz) {
			insertarNodo(arbol->izq, n);
		}//fin if anidado
		else {
			insertarNodo(arbol->der, n);
		}
	}//fin else
}


void mostrarArbol(Nodo* arbol, int cont) {
	if (arbol == NULL) {
		return;
	}
	else {
		mostrarArbol(arbol->der, cont + 1);
		for (int i = 0; i < cont; i++) {
			cout << "   ";
		}
		cout << arbol->dato << endl;
		mostrarArbol(arbol->izq, cont + 1);
	}
}*/
#pragma once
#include <iostream>
#include "Nodo.h"
using namespace std;
class ArbolBinario
{
private:
	Nodo* arbol = NULL;

public:
	Nodo* crearNodo(int n, Nodo* padre);
	void menu();
	void agregarNodo(Nodo*&, int, Nodo*);
	void mostrarArbol(Nodo*, int);
	bool buscar(Nodo* arbol, int cont);


};


#include "ArbolBinario.h"

Nodo* ArbolBinario::crearNodo(int n, Nodo* padre)
{
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	return nuevo_nodo;
}

void ArbolBinario::menu()
{
	int dato, opc, contador = 0;
	do {
		cout << "\t Menu" << endl;
		cout << "1. Agregar un nuevo nodo" << endl;
		cout << "2. Mostrar el arbol completo" << endl;
		cout << "3. Buscar numero en el arbol" << endl;
		cout << "4. Mostrar arbol en preorden" << endl;
		cout << "5. Mostrar arbol en inorden" << endl;
		cout << "6. Mostrar arbol en PostOrden" << endl;
		cout << "7. Eliminar un nodo del arbol" << endl;
		cout << "8. salir" << endl;
		cout << "Digite la opcion: ";
		cin >> opc;
		switch (opc)
		{
		case 1:

			cout << "Digite numero: ";
			cin >> dato;
			agregarNodo(arbol, dato, NULL);//agregar nodo

			cout << endl;

			system("pause");
			break;

		case 2:
			cout << endl << " Mostrando el arbol completo" << endl << endl;
			mostrarArbol(arbol, contador);
			cout << endl;
			system("pause");
			break;
		case 3:
			cout << endl << "Digite numero que desea buscar: ";
			cin >> dato;
			cout << endl << "Buscando..." << endl;
			if (buscar(arbol, dato) == true) {

				cout << "Numero " << dato << " a sido encontrado en el arbol" << endl;

			}
			else {

				cout << "Numero no encontrado" << endl;

			}
			cout << endl;

			system("pause");
			break;
		case 4:

			cout << endl;

			cout << "Mostrando Arbol en preorden" << endl;
			//preOrden(arbol);
			cout << endl << endl;

			system("pause");

			break;
		case 5:

			cout << endl;

			cout << "Mostrando Arbol en inorden" << endl;
			//InOrden(arbol);
			cout << endl << endl;
			system("pause");
			break;

		case 6:
			cout << endl;

			cout << "Mostrando Arbol en postorden" << endl;
			//PostOrden(arbol);
			cout << endl << endl;
			system("pause");
			break;

		case 7:
			cout << endl;
			cout << "Digite el numero a eliminar: ";
			cin >> dato;
			//eliminar(arbol, dato);
			cout << endl;
			system("pause");
			break;

		}
		system("cls");
	} while (opc != 8);
}

void ArbolBinario::agregarNodo(Nodo*& arbol, int n, Nodo* padre)
{
	if (arbol == NULL) {
		Nodo* nuevo_nodo = crearNodo(n, padre);
		arbol = nuevo_nodo;
	}
	else {
		int ValorRaiz = arbol->dato;
		if (n < ValorRaiz) {
			agregarNodo(arbol->izq, n, arbol);//Recursividad
		}
		else {
			agregarNodo(arbol->der, n, arbol);//Recursividad
		}
	}
}

void ArbolBinario::mostrarArbol(Nodo* arbol, int cont)
{
	if (arbol == NULL) {

		return;

	}
	else {
		mostrarArbol(arbol->der, cont + 1);//Recursividad
		for (int i = 0; i < cont; i++)

		{
			cout << " ";
		}

		cout << arbol->dato << endl;

		mostrarArbol(arbol->izq, cont + 1);//Recursividad
	}
}

bool ArbolBinario::buscar(Nodo*, int)
{
	return false;
}

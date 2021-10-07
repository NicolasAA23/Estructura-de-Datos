// Ej. Cola.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include "cola.h"
#include "stdlib.h"

using namespace std;

int main()
{
	int opc;
	int num;
	bool salir;

	cola colita;

	while (salir)
    {
	cout<<"----------MENU----------"<<endl;
	cout<<endl;
	cout<<"1.-Encolar"<<endl;
	cout<<"2.-Desencolar"<<endl;
	cout<<"3.-Mostrar Primero"<<endl;
	cout<<"4.-Mostrar Cola"<<endl;
	cout<<"0.-Salir"<<endl;
	cout<<"Opcion: ";
	cin>>opc;

	switch(opc){
	case 0:
		cout<<"Saliendo"<<endl;
		salir=false;
		break;
	case 1:
		cout<<"Ingrese el valor a instertar"<<endl;
		cin>>num;
		colita.Encolar (num);
		break;
	case 2:
		colita.Desencolar();
		break;
	case 3:
		colita.PrimeroCola(num);
		break;
	case 4:
		colita.mostrar();
		break;
	default:
		cout<<"Opcion incorrecta seleccionada!"<<endl;
	}

	}

	system("pause");
	return 0;

}


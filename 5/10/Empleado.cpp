#include "StdAfx.h"
#include "Empleado.h"
#include "Persona.h"
#include <conio.h>
#include <iostream>

Empleado::Empleado(string _nombre, int _edad, string _cargo, float _salario) : Persona(_nombre, _edad)
{
	cargo= _cargo;
	salario= _salario;
}


void Empleado::mostrarEmpleado()
{
	mostrarPersona();
	cout<<"Cargo: "<<cargo<<endl;
	cout<<"Salario: bs"<<salario<<endl;
}

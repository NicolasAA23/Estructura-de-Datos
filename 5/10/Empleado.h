#pragma once
#include <string>
#include "Persona.h"

using namespace std;

class Empleado: public Persona
{
private:
	string cargo;
	float salario;
public:
	Empleado(string,int,string,float);
	void mostrarEmpleado();
};

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Persona.h"
#include "Empleado.h"

using namespace std;

int main()
{

	Empleado :: empleado1("Jaime",27,"Subgerente",500);
	empleado1.mostrarEmpleado;

	system("pause");
	return 0;
}

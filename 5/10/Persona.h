#pragma once
#include <string>

using namespace std;

class Persona
{
private:
	string nombre;
	int edad;
public:
	Persona(string,int);
	void mostrarPersona();
};


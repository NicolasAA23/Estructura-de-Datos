#pragma once
#define MAX 100

class cola
{
private:

	int info[MAX];
	int ini, fin;

public:
	cola(void);
	bool Encolar (int Valor);
	bool Desencolar (void);
	bool PrimeroCola (int &Valor);
	bool ColaVacia (void);
	bool mostrar (void);
};

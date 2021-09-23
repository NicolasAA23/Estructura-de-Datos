#pragma once
#define MAX 10
class Matriz
{
private: 
	int Mat[MAX][MAX];
	int n;
	int m;
public:
	Matriz(int _n,int _m);
	Matriz();
	~Matriz(void);
	void cargar();
	bool verifcuadrada();
	void mostrar(void);
	void mostrarDiagonal();
	int sumarDiagonal();
	int devolverfila();
	void sumarmatrices(Matriz mat1, Matriz mat2);
};

#include "StdAfx.h"
#include "matriz.h"
#include "conio.h"
#include <iostream>
using namespace std;


Matriz::Matriz(int _n, int _m)
{
	 n= _n;
	 m= _m;
}

Matriz::Matriz()
{
}


Matriz::~Matriz(void)
{
}

void Matriz::cargar()
{
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			cout<<"M[ "<<i<<"] [ "<<j<<"]= ";
			cin>> Mat[i][j];
		}
	}
}

bool Matriz::verifcuadrada()
{
	if(n==m)
		return true;
	else 
		return false;

}

void Matriz::mostrar(void)
{
	for( int i=0; i<n; i++)
	{
		for( int j=0; j<m; j++)
		{
			cout<<"M[ "<<i<<"] [ "<<j<<"]= ";
			cout<<Mat[i][j];
		}
	}
}

void Matriz::mostrarDiagonal()
{
	for( int i=0; i<n; i++)
		cout<<Mat[i][i];
}

int Matriz::sumarDiagonal()
{
	int aux=0;  //acumulador
	for( int i=0; i<n; i++)
		aux=aux + Mat[i][i];
	return aux;
}

int Matriz::devolverfila()
{
	return n;
}
	

void Matriz::sumarmatrices(Matriz mat1, Matriz mat2)
{
	for( int i=0; i<mat1.n; i++)
		for( int j=0; j<mat1.m; j++)
			Mat[i][j]=mat1.Mat[i][j]+mat2.Mat[i][j];
	n=mat1.n;
	m=mat1.m;
}

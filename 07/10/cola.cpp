#include "StdAfx.h"
#include "cola.h"
#include <iostream>

using namespace std;

cola::cola(void)
{
	ini=0;
	fin=0;
}
	bool cola :: ColaVacia (void)
	{
		bool b_aux;
		if (ini=fin)
		{
		b_aux=true;
		}
		else
		{
			b_aux=false;
		}
		return b_aux;
	}
	bool cola :: Encolar (int Valor)
	{
		bool error;
		if(fin = MAX)
		{
			error = true;
		}
		else
		{
			error = false;
			info [fin] = Valor;
			fin++;
		}

	}
	bool cola :: PrimeroCola (int &Valor)
	{
		bool error;
		if (ColaVacia())
		{
			error = true;
		}
		else
		{
			error = false;
			Valor =info[ini];
		}
		return error;

	}

	bool cola :: Desencolar (void)
	{
		bool error;
		if(ColaVacia())
		{
			error = true;
		}
		else
		{
			error = false;
			ini++;
		}
		return error;
	}

	bool cola :: mostrar (void)
	{
		for (int i=ini;i<fin;i++)
			cout<<"["<<info[i]<<"]"<<endl;
			cout<<endl;
	}

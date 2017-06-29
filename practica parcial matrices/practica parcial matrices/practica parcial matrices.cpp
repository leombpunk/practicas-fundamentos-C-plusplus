// practica parcial matrices.cpp: define el punto de entrada de la aplicación de consola.
//incluye los ejercicios 6,9,1

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

#define N 3

void main(void)
{
	/*int mat[N][N],vecfila[N],veccol[N];
	//--------6---------
	for (int x = 0; x < N; x++)
	{
		vecfila[x] = 0; 
		veccol[x] = 0;
		for (int y = 0; y < N; y++)
		{
			mat[x][y] = rand() % 10;
		}
	}

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			vecfila[x] += mat[x][y];
			veccol[x] += mat[y][x];
		}
	}

	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			cout << x << "," << y << ": " << mat[x][y] << ", ";
		}
		cout << "\n";
		cout << "suma fila: " << vecfila[x] << endl;
		cout << "suma columna: " << veccol[x] << endl;
	}
	//---------6----------*/

	/*//---------9----------
	int motriz[N][N],princi=0;
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			motriz[x][y] = rand() % 10;
		}
	}

	for (int x = 0; x < N; x++)
	{
		princi += motriz[x][x];
		cout << motriz[x][x] << ", ";
	}
	cout << "\nla sumatoria de la diagonal principal es: " << princi << endl;
	//---------9----------*/

	/*//---------12----------
	int vergor[100],f,r,o;
	cout << "opciones" << endl;
	cout << "1.reservar---2.cancelar---3.listar" << endl;
	cin >> o;
	cout << "reserva" << endl;
	cout << "fumardor:1 or no fumador:2 ";
	cin >> f;
	switch (f)
	{
	case 1:
		for (int x = 0; x < 50; x++) 
		{
			if (vergor[x] == 0)//vacio
			{
				vergor[x] = 1;//reesrvado
				cout << "lugar reservado:" << x + 1 << endl;
			}
		}
		break;
	case 2:
		for (int x = 50; x <100; x++)
		{
			if (vergor[x] == 0)//vacio
			{
				vergor[x] = 1;//reesrvado
				cout << "lugar reservado:" << x + 1 << endl;
			}
		}
		break;
	default:
		cout << "manqueaste poto" << endl;
		break;
	}


	cout << "cancelar" << endl;
	cout << "reserva numero: ";
	cin >> r;
		for (int x = 0; x < 100; x++)
		{
			if (x+1==r)//vacio
			{
				vergor[x] = 2;//cancelado
				cout << "lugar cancelado:" << x + 1 << endl;
			}
		}
	//---------12----------*/


	//---------1----------
	float desviacion[15], media=0.0, desv=0.0;
	for (int x = 0; x < 15; x++)
	{
		desviacion[x] = rand() % 10;
	}
	cout << "vertor cargado pe: " << endl;
	for (int x = 0; x < 15; x++)
	{
		cout << desviacion[x] << ", ";
	}
	cout << "\n";
	//calculo de la media aritmetica
	for (int x = 0; x < 15; x++)
	{
		media += desviacion[x];
	}
	cout << "media sin / " << media << endl;
	media /= 15;
	cout << "media real " << media << endl;
	//desviacion en curso
	for (int x = 0; x < 15; x++)
	{
		desv += pow(desviacion[x] - media,2);
		cout << "desv: " << desv << endl;
	}
	desv /= 15 - 1;
	desv = sqrt(desv);
	cout << "la desviacion es: " << desv << endl;
	//---------1----------
	system("pause");
}


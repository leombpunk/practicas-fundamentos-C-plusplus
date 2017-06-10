// matrices en c.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 4 //dimension para una matriz cuadrada NxN
#define M 5 //dimension para una matriz no cuadrada NxM

int matriz[N][N];

void main(void)
{
	//la matriz no puede ser dimensionada en tiempo de ejecucion
	//al momento de definirla debe ser dimensionada
	
	//matriz[0][0] = rand()%100;
	//cout << matriz[0][0] << endl;
	cout << "cargo matriz" << endl; 
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			matriz[x][y] = rand()%100;
		}
	}

	cout << "elementos de la matriz" << endl;
	for (int x = 0; x < N; x++)
	{
		cout << " " << endl;
		for (int y = 0; y < N; y++)
		{
			cout << matriz[x][y] << ", ";
		}
	}

	//iterar la diagonal principal de una matriz cuadrada
	//donde sus indices son iguales  0,0  1,1  2,2
	cout << " " << endl;
	cout << "diagonal principal:" << endl;
	for (int x = 0; x < N; x++)
	{
		cout << matriz[x][x] << ", ";
	}
	
	//iterar la diagonal secundaria (contradiagonal) de una matriz cuadrada
	//la suma de x+y = N-1
	//el for itera por la cantidad de elementos de la matriz cuadrada
	//en este caso 4x4=16
	cout << " " << endl;
	cout << "diagonal secundaria:" << endl;
	for (int x = 0; x < N*N; x++)
	{
		//cout << x << endl;
		//para hallar el primer indice: x/N (resultado entero de la division real)
		//para hallar el segundo indice: x%N (resto entero de la division)
		//int f, c;
		int f = x / N, c = x % N;
		if (f + c == N - 1)
		{
			//cout << "f: " << f << ", c: " << c << endl;
			cout << matriz[f][c] << ", ";
		}
	}
	system("pause");
}
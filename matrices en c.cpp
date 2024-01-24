// matrices en c.cpp: archivo de proyecto principal.

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

#define N 3 //dimension para una matriz cuadrada NxN
#define M 2 //dimension para una matriz no cuadrada NxM

int matriz[N][N], matriz1[M][M], matriz2[M][N], matriz3[M][N];

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
	//transpuesta de una matriz
	cout << "transpuesta:" << endl;
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++) {
			cout << matriz[y][x] << ", ";
		}
		cout << "\n";
	}
	//producto de matrices
	//producto=fila(toda) * columna(toda)
	//la cantidad de elementos de la fila de la matriz1 debe ser igual a los elementos de la 
	//columna de la matriz2 para poder obtener el producto matriz3
	//multiplicacion miembro por miembro
	//carga
	for (int x = 0; x < M; x++)
	{
		for (int y = 0; y < M; y++)
		{
			matriz1[x][y] = rand() % 10;
		}
	}

	for (int x = 0; x < M; x++)
	{
		for (int y = 0; y < N; y++)
		{
			matriz2[x][y] = rand() % 10;
		}
	}
	//cargo la 3 con ceros porque es una hija de.... y me tira cualquiera
	for (int x = 0; x < M; x++)
	{
		for (int y = 0; y < N; y++)
		{
			matriz3[x][y] = 0;
		}
	}
	//muestro
	cout << "matriz1" << endl;
	for (int x = 0; x < M; x++)
	{
		for (int y = 0; y < M; y++)
		{
			cout << matriz1[x][y] << ", ";
			//system("pause");
		}
		cout << "\n";
	}
	cout << "matriz2" << endl;
	for (int x = 0; x < M; x++)
	{
		for (int y = 0; y < N; y++)
		{
			cout << matriz2[x][y] << ", ";
		}
		cout << "\n";
	}
	//producto de matrices ---> con 3 for?
	for (int f = 0; f < M; f++)
	{
		for (int c = 0; c < M; c++)
		{
			for (int z = 0; z < N; z++)
			{
				matriz3[f][z] += (matriz1[f][c] * matriz2[c][z]);
				//cout << "indices " << f << "," << c << "    " << c << "," << z << endl;
				//cout << matriz1[f][c] << "*" << matriz2[c][z] << endl;
			}
		}
	}
	//muestro
	cout << "matriz3" << endl;
	for (int x = 0; x < M; x++)
	{
		for (int y = 0; y < N; y++)
		{
			cout << matriz3[x][y] << ", ";
		}
		cout << "\n";
	}
	cout << "\n";
	//-----------------------------------------------------------------------------------------------
	//matriz tipo char
	char alfabeto[27]; // 26 letras más NULL
	char letra;
	int i;

	for (letra = 'A', i = 0; letra <= 'Z'; letra++, i++)//interesante for
		alfabeto[i] = letra;

	alfabeto[i] = NULL;
	cout << "Las letras son: " << alfabeto << endl;

	system("pause");
}
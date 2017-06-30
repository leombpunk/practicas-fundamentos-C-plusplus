// practica parcial matrices.cpp: define el punto de entrada de la aplicación de consola.
//incluye los ejercicios 6,9,1,12,10,11 del archivo programacion I en c++.doc

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

#define N 10 //verificar el valor de N para los ejercicios

//SUBPROGRAMAS
void ejercicio1(void)
{
	float desviacion[15], media = 0.0, desv = 0.0;
	srand(time(NULL));
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
	//cout << "media sin / " << media << endl;
	media /= 15;
	//cout << "media real " << media << endl;
	//desviacion en curso
	for (int x = 0; x < 15; x++)
	{
		desv += pow(desviacion[x] - media, 2);
		//cout << "desv: " << desv << endl;
	}
	desv /= 15 - 1;
	desv = sqrt(desv);
	cout << "la desviacion es: " << desv << endl;
}
void ejercicio6(void) 
{
	int mat[N][N],vecfila[N],veccol[N];
	srand(time(NULL));//semilla del rand()
	//inicializo vectores
	for (int x = 0; x < N; x++)
	{
		vecfila[x] = 0;
		veccol[x] = 0;
		for (int y = 0; y < N; y++) mat[x][y] = rand() % 10;
	}
	//opero con los vectores
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++)
		{
			vecfila[x] += mat[x][y];
			veccol[x] += mat[y][x];
		}
	}
	//muestro los resultados obtenidos
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++) cout << x << "," << y << ": " << mat[x][y] << ", ";
	cout << "\n";
	cout << "suma fila: " << vecfila[x] << endl;
	cout << "suma columna: " << veccol[x] << endl;
	}
}
void ejercicio9(void) 
{
	int motriz[N][N],princi=0;
	srand(time(NULL));
	for (int x = 0; x < N; x++)
	{
		for (int y = 0; y < N; y++) motriz[x][y] = rand() % 10;
	}

	for (int x = 0; x < N; x++)
	{
	princi += motriz[x][x];
	cout << motriz[x][x] << ", ";
	}
	cout << "\nla sumatoria de la diagonal principal es: " << princi << endl;
}
void ejercicio10(void) 
{
	int T[10],pos=0;
	float R_div[10];
	srand(time(NULL));
	//inicializo vector
	for (int x = 0; x < 10; x++) R_div[x]=T[x] = rand() % 10;//si le sumo +1 evito el cero
	for (int x = 0; x < 10; x++) cout << x << " --> " << T[x] << endl;
	do
	{
		cout << "indique un posicion del vector: (0-9) ";
		cin >> pos;
		cout << "valor: " << T[pos] << endl;
		if (pos < 0 || pos >= 10) cout << "fuera de rango" << endl;
		else 
			if (!T[pos]) cout << "el valor es cero...\nelija otra posicion" << endl;
			else break;
	} while (true);
	//paso a la division
	for (int x = 0; x < 10; x++)
	{
		if (T[x]) R_div[x] = T[x] / float(T[pos]);
		else R_div[x] = 0.0;
	}	
	//muestro el resultado
	cout << "Resultados (float)" << endl;
	for (int x = 0; x < 10; x++) cout << T[x] << "/" << T[pos] << ": " << R_div[x] << endl;
}
void ejercicio11(void) 
{
	int vec[N], v_aux[N], pos=0, valor=0;
	srand(time(NULL));
	//incializo los vectores
	for (int x = 0; x < N; x++)
	{
		vec[x] = v_aux[x] = rand() % 21;
		cout << x << " - " << vec[x] << endl;
	}

	cout << "valor a agregar: ";
	cin >> valor;
	do
	{
		cout << "en la posicion: ";
		cin >> pos;
		if (pos < 0 || pos >= N) cout << "Fuera de rango" << endl;
		else break;
	} while (true);
	cout << "actualizando vector" << endl;
	for (int x = 0; x < N; x++)
	{
		//con tres if
		if (x == pos) vec[x] = valor;
		if (x > pos) vec[x] = v_aux[x - 1];
		//con criptica
		vec[x] = (x==pos?valor:(x>pos?v_aux[x-1]:vec[x]));
		//muestro
		cout << v_aux[x] << " --> " << vec[x] << endl;
	}
}
void ejercicio12(void) 
{
	int vergor[100],f=0,r=0,o=0;
	//inicializo vector
	for (int x = 0; x < 100; x++) vergor[x] = 0;

	cout << "opciones" << endl;
	cout << "1.reservar---2.cancelar---3.listar" << endl;
	cin >> o;
	switch (o)
	{
	case 1:
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
	case 2:
		cout << "cancelar" << endl;
		cout << "reserva numero: ";
		cin >> r;
		for (int x = 0; x < 100; x++)
		{
			if (x + 1 == r)//vacio
			{
				vergor[x] = 2;//cancelado
				cout << "lugar cancelado:" << x + 1 << endl;
			}
		}
	case 3:
		cout << "listado" << endl;
		for (int x = 0; x < 100; x++)
		{
			if (x < 50)
			{
				cout << "No Fumadores" << endl;
				if (vergor[x] == 0) cout << "asiento " << x + 1 << ": " << vergor[x] << "libre" << endl;
				if (vergor[x] == 1) cout << "asiento " << x + 1 << ": " << vergor[x] << "reservado" << endl;
				if (vergor[x] == 1) cout << "asiento " << x + 1 << ": " << vergor[x] << "cancelado" << endl;
			}
			else
			{
				cout << "Fumadores" << endl;
				if (vergor[x] == 0) cout << "asiento " << x + 1 << ": " << vergor[x] << "libre" << endl;
				if (vergor[x] == 1) cout << "asiento " << x + 1 << ": " << vergor[x] << "reservado" << endl;
				if (vergor[x] == 1) cout << "asiento " << x + 1 << ": " << vergor[x] << "cancelado" << endl;
			}
		}
	default:
		break;
	}
}

//programa principal
void main(void)
{
	//ejercicio1();
	//ejercicio6();
	//ejercicio9();
	//ejercicio10();
	//ejercicio11();
	//ejercicio12();
	system("pause");
}


// ejercicio_estructuras1.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

#define N 10

struct fecha
{
	int dia;
	int mes;
	int anio;
};

struct agenda
{
	char apellidos[60];
	char nombre[60];
	fecha fe_na;
	char telefono[20];
	char mail[40];
}agendita[N];

void cargar_datos();
void mostrar_datos(int);
void buscar();
void buscar_mes();
void mostrar_todo();
int menu();

int i = 0;

void main(void)
{
	do
	{
		system("cls");//clear la pantalla pe
		cout << "***---Menu---***" << endl;
	} while (menu());
	system("pause");
}

void cargar_datos()
{
	cout << "Carga de datos: " << endl;
	if (i < N)
	{
		cout << "Apellido: ";
		gets_s(agendita[i].apellidos);
		gets_s(agendita[i].apellidos);
		cout << "Nombre: ";
		gets_s(agendita[i].nombre);
		cout << "Fecha de Nacimiento(dd/m/aaaa): ";
		cin >> agendita[i].fe_na.dia >> agendita[i].fe_na.mes >> agendita[i].fe_na.anio;
		cout << "Telefono: ";
		gets_s(agendita[i].telefono);
		gets_s(agendita[i].telefono);
		cout << "Email: ";
		gets_s(agendita[i++].mail);//incremento para que el siguiente registro se aciente o no
		cout << "Cargados los datos" << endl;
		system("pause");
	}
}

int menu()
{
	int opcion = 0;
	cout << "\tOpciones\n1.Cargar\n2.Buscar(nom)\n3.Buscar(mes)\n4.Mostrar todo\n0.Salir\n: ";
	cin >> opcion;
	switch (opcion)
	{
	case 0:
		break;
	case 1:
	{
		cargar_datos();
		break;
	}
	case 2:
	{
		buscar();
		break;
	}
	case 3:
	{
		buscar_mes();
		break;
	}
	case 4:
	{
		mostrar_todo();
		break;
	}
	default:
		break;
	}
	return opcion;
}

void buscar()
{
	char name[60];
	cout << "Busqueda" << endl;
	cout << "Tipee el nombre: ";
	gets_s(name);
	gets_s(name);
	for (int x=0;x<i;x++)
	{
		if (name == agendita[x].nombre)
		{
			/*cout << "Nombre: " << agendita[x].nombre << "\tApellido: " << agendita[x].apellidos
				<< "\nFecha de nacimiento: " << agendita[x].fe_na.dia << "/" << agendita[x].fe_na.mes << "/" << agendita[x].fe_na.a�o
				<< "\nTelfono: " << agendita[x].telefono << "\tMail: " << agendita[x].mail << endl << endl;*/
			mostrar_datos(x);
		}
	}
	system("pause");
}

void buscar_mes()
{
	int mesesito = 0;
	cout << "Busqueda mes" << endl;
	cout << "Mes:(1-12) ";
	cin >> mesesito;
	for (int x = 0; x<i; x++)
	{
		if (mesesito == agendita[x].fe_na.mes)
		{
			/*cout << "Nombre: " << agendita[x].nombre << "\tApellido: " << agendita[x].apellidos
				<< "\nFecha de nacimiento: " << agendita[x].fe_na.dia << "/" << agendita[x].fe_na.mes << "/" << agendita[x].fe_na.a�o
				<< "\nTelfono: " << agendita[x].telefono << "\tMail: " << agendita[x].mail << endl << endl;*/
			mostrar_datos(x);
		}
	}
	system("pause");
}

void mostrar_todo()
{
	for (int x = 0; x < i; x++)
	{
		mostrar_datos(x);
	}
	system("pause");
}

void mostrar_datos(int indice)
{
	cout << "Nombre: " << agendita[indice].nombre << "\tApellido: " << agendita[indice].apellidos
		<< "\nFecha de nacimiento: " << agendita[indice].fe_na.dia << "/" << agendita[indice].fe_na.mes << "/" << agendita[indice].fe_na.a�o
		<< "\nTelfono: " << agendita[indice].telefono << "\tMail: " << agendita[indice].mail << endl << endl;
}
#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rond�n, C.I.: V-31.157.974, Trayecto II, Secci�n 01.
//Ejercicio N� 2 de Paradigmas de programaci�n.

int main()
{
	setlocale(LC_ALL, "");
	int i, suma = 0;
	int L [50];
	
	for(i = 1; i <= 50; i++)
	{
		L [i] = 0;
	}
	
	for(i = 1; i <= 50; i++)
	{
		scanf("%d", &L [i]);
	}
	
	for(i = 1; i <= 50; i++)
	{
		suma = suma + L [i];
	}
	
	printf("La suma de los miembros del vector es: %d\n", suma);
	
	getch();
	
	return(0);
}

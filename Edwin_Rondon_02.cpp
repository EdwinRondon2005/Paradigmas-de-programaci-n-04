#include <stdio.h>
#include <conio.h>
#include <locale.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 2 de Paradigmas de programación.

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

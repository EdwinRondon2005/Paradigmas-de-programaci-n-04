#include <stdio.h>
#include <conio.h>
#define fila 6
#define columna 7

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 4 de Paradigmas de programación.

int main()
{
	int M [fila][columna];
	int i, j;
	
	for(i = 1; i <= fila; i++)
	{
		for(j = 1; j <= columna; j++)
		{
			printf("Introduzca los valores [%d][%d]: ", i, j);
			scanf("%d", &M [i][j]);
		}
	}
		
	printf("\n\n\nMatriz original:\n");
	
	for(i = 1; i <= fila; i++)
	{
		printf("\n\t");
		for(j = 1; j <= columna; j++)
		{
			printf(" %d ", M [i][j]);
		}
	}
	
	printf("\n\n\nMatriz traspuesta:\n");
	
	for(i = 1; i <= columna; i++)
	{
		printf("\n\t");
		for(j = 1; j <= fila; j++)
		{
			printf(" %d ", M [j][i]);
		}
	}
	
	printf("\n\n\n");
	
	getch();
	
	return(0);
}

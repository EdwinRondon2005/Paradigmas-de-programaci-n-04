#include <stdio.h>
#include <conio.h>
#define fila 4
#define columna 4

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 3 de Paradigmas de programación.

int main()
{
	int Matriz [fila][columna];
	int i, j;
	
	for(i = 1; i <= fila; i++)
	{
		for(j = 1; j <= columna; j++)
		{
			Matriz [i][j] = 0;
		}
	}
	
	for(i = 1; i <= fila; i++)
	{
		for(j = 1; j <= columna; j++)
		{
			if(i == j)
			{
				Matriz [i][j] = 1;
			}
			else
			{
				Matriz [i][j] = 0;
			}
		}
	}
	
	for(i = 1; i <= fila; i++)
	{
		printf("\n");
		for(j = 1; j <= columna; j++)
		{
			printf(" %d ", Matriz[i][j]);
		}
	}
	
	printf("\n\n");
	
	getch();
	
	return(0);
}

#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");
	int i, j, sf = 0, sf2 = 0, sf3 = 0, sc = 0, sc2 = 0, sc3 = 0, sd = 0, sd2 = 0;
	int Matriz [3][3];
	
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= 3; j++)
		{
			printf("Introduzca los valores [%d][%d]: ", i, j);
			scanf("%d", &Matriz [i][j]);
		}
	}
	
	printf("\n\n\nMatriz original:\n");
	
	for(i = 1; i <= 3; i++)
	{
		printf("\n\t");
		for(j = 1; j <= 3; j++)
		{
			printf(" %d ", Matriz [i][j]);
		}
	}
	
	printf("\n\n\nComprobación si es un cuadrado mágico:\n");
	
	printf("\n\n\n1. Suma de filas:\n");
	
	for(i = 1; i <= 3; i++)
	{
		sf = sf + Matriz [1][i];
	}
	
	printf("La fila da como resultado: %d\n", sf);
	
	for(i = 1; i <= 3; i++)
	{
		sf2 = sf2 + Matriz [2][i];
	}
	
	printf("La fila da como resultado: %d\n", sf2);
	
	for(i = 1; i <= 3; i++)
	{
		sf3 = sf3 + Matriz [3][i];
	}
	
	printf("La fila da como resultado: %d\n", sf3);
	
	printf("\n\n\n");
	
	printf("\n\n\n2. Suma de columnas:\n");
	
	for(j = 1; j <= 3; j++)
	{
		sc = sc + Matriz [j][1];
	}
	
	printf("La columna da como resultado: %d\n", sc);
	
	for(j = 1; j <= 3; j++)
	{
		sc2 = sc2 + Matriz [j][2];
	}
	
	printf("La columna da como resultado: %d\n", sc2);
	
	for(j = 1; j <= 3; j++)
	{
		sc3 = sc3 + Matriz [j][3];
	}
	
	printf("La columna da como resultado: %d\n", sc3);
	
	printf("\n\n\n");
	
	printf("\n\n\n3. Suma de diagonales:\n");
	
	printf("\n\n\n3.1. Diagonal principal:\n");
	
	for(i = 1; i <= 3; i++)
	{
		for(j = 1; j <= 3; j++)
		{
			if(i == j)
			{
				sd = sd + Matriz [i][j];
			}
		}
	}
	
	printf("La diagonal principal da como resultado: %d\n", sd);
	
	printf("\n\n");
	
	printf("\n\n\n3.2. Diagonal secundaria:\n");
	
	for(j = 1; j <= 3; j++)
	{
		for(i = 1; i <= 3; i++)
		{
			if(i == j)
			{
				sd2 = sd2 + Matriz [j][i];
			}
		}
	}
	
	printf("La diagonal secundaria da como resultado: %d\n", sd2);
	
	printf("\n\n\nEn conclusión:\n");
	
	printf("\n\n\n");
	
	if((sf == sf2) && (sf == sf3) && (sc == sc2) && (sc == sc3) && (sd == sd2))
	{
		printf("Es un cuadrado mágico.\n\n");
	}
	else
	{
		printf("No es un cuadrado mágico.\n\n");
	}
	
	getch();
	
	return(0);
}

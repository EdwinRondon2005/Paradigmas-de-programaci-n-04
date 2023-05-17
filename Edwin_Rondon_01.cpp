#include <stdio.h>
#include <conio.h>

//Autor: Edwin Rondón, C.I.: V-31.157.974, Trayecto II, Sección 01.
//Ejercicio N° 1 de Paradigmas de programación.

int main()
{
	int i, vector [100], med, sum = 0, MayMed = 0, iguMed = 0;
	
	for(i = 1; i <= 100; i++)
	{
		printf("Ingresar las temperaturas:");
		scanf("%d", &vector [i]);
		
		sum = sum + vector [i];
		
		med = sum / 100;
	}
	
	for(i = 1; i <= 100; i++)
	{
		if(vector [i] > med)
		{
			MayMed = MayMed + 1;
		}
		else
		{
			if(vector [i] == med)
			{
				iguMed = iguMed + 1;
			}
		}
	}
	
	printf("La media de las temperaturas es de: %d\n", med);
	printf("Las temperaturas mayores que la media son: %d\n", MayMed);
	printf("Las temperaturas iguales que la media son: %d\n", iguMed);
	
	getch();
	
	return(0);
}

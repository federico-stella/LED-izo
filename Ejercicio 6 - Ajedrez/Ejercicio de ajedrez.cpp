#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	int x, y,columna,fila;
	
	printf("Ingresar el numero de columnas: ");
	scanf("%i",&columna);
	printf("\nIngresar el numero de filas: ");
	scanf("%i",&fila);
	
	printf("\n\n");
	
	for(x=0;x<fila;x++)
	{
		
		for(y=0;y<columna;y++)
		{
			
			if(x % 2 == 0)
			{
				
				if(y % 2 != 0)
				{
					printf("| |");
				}
				else
				{
					printf("|M|");
				}
			}
			else
			{
				if(y % 2 == 0)
				{
					printf("| |");	
				}
				else
				{
					printf("|M|");
				}
			}
			
		}
	
	printf("\n");
			
	}
}
	


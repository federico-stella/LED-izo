//Realizar un programa que tome un valor entero y verificar que el mismo se encuentre entre 1 y 10 incluidos.

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	int num;
	
	do{
		printf("Ingresar un numero entero que se encuentre del 1 al 10: ");
		scanf("%i",&num);
		
	}while(num >= 1 && num <= 10);
	
	printf("\nEl numero ingresado no se encuentra dentro del rango aceptable\n\n");
	system("pause");
	
}

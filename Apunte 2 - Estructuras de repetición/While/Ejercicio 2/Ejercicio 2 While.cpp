/*Dado un conjunto de números naturales, determinar cuántos de ellos son mayores o iguales
que 100. Un número igual a cero indica fin de datos.*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int num, cont = 0;
	
	printf("Bienvenido al sistema! ");
	printf("\nPara iniciar ingrese un numero natural y presione 'enter'");
	printf("\nSi desea salir ingrese '0' y presione 'enter'");
	
	while(num !=0)
	{
		printf("\n\nIngrese un numero: ");
		while(scanf("%i",&num) !=1 || num < 0)
		{
			printf("ERROR: El numero debe ser positivo y no se puede ingresar una letra!");
			printf("\nPor favor ingresar un numero: ");
			while(getchar()!='\n');
		}	
		
		if(num>99)
		cont = cont + 1;
	}
	
	system("cls");
	printf("La cantidad de numeros ingresados mayores e iguales a 100 es: %i\n\n",cont);
	system("pause");
}

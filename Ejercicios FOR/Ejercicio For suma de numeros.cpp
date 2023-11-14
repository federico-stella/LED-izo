//Calcular la suma de 10 numeros reales ingresandos por teclado (acumulador)

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	float num, total = 0;
	int rep;
	
	printf("Bienvenido al sistema de calculo de sumas de numeros reales");
	
	for (rep=1;rep<=10;rep++)
	{
		printf("\n\nPor favor ingresar un numero real: ");
		while(scanf("%f",&num)!=1)
		{
			printf("\nERROR: Por favor ingresar un numero: ");
			while(getchar() !='\n');
		}
		total = total + num;
	}
	
	printf("\nLa suma total de los numeros es igual a %.2f",total);
	
}

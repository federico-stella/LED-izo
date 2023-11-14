/*Ingresar un conjunto de números reales positivo. Para finalizar la entrada de datos ingresar
un cero. Determinar e informar la cantidad de números ingresados.*/

#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>

main(){
	//Se declaran las variables
	float num;
	int cant=-1;

	//Pantalla: se le pide al usuario que ingrese un numero real positvo, para salir que ingrese un 0
	printf("Bienvenido al sistema de conteo, para comenzar ingrese un numero real positivo y presione 'enter'");
	printf("\nPara salir ingrese '0' y presione 'enter'\n\n");
	
	//Se inicia el bucle y solo se sale del mismo si el usuario ingresa '0'
	while (num!=0)
	{
	//Pantalla: se muestra un mensaje al usuario para que ingrese un numero real positivo 
		printf("Ingrese un numero real positivo: ");
	//Se valida el dato ingresado por el usuario, en el caso de que el usuario ingrese un numero negativo o algun caracter, se le imprime en pantalla un mensaje de error
		while(scanf("%f",&num)!=1 || num < 0)
		{
			printf("\nERROR: Por favor ingresar un numero valido: ");
			while(getchar() !='\n');
		}
	//Se limpia el buffer
		while(getchar() !='\n');
	//Se suma +1 la cantidad de numeros ingresados en total
		cant++;		
	}
	//Se muestra en pantalla la cantidad de numeros ingresados luego de que el usuario haya ingresado el numero 0
	printf("\nLa cantidad de numeros ingresados es: %i\n",cant);
	//Se hace una pausa para que el usuario pueda leer los datos y se le pide que presione cualquier letra para finalizar
	system("pause");
	
}

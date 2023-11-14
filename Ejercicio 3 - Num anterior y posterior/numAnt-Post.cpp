//Ingresando un número entero mostrar el anterior y posterior

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){

//Declaración de variables
	int num, ant, pos;
	
//Pantalla: se le pide al usuario que ingrese un número entero
	printf("Por favor ingresar un numero entero: ");
	scanf("%i",&num);

//Caculos
	ant = num - 1;
	pos = num + 1;
	
//Pantalla: se limpia la pantalla con lo pedido anteriormente

system("cls");
	
//Pantalla: se le nuestra al usuario el número anterior y el posterior del número que ingreso
	printf("El numero anterior es el: %i",ant);
	printf("\nEl numero posterior es el: %i",pos);
	
	printf("\n\nToque cualquier letra para finaliar");
	
	getch();
	

}

//Ingresando dos depósitos mostrar la suma de ambos mas un interes del 20%
#include<conio.h>
#include<windows.h>
#include<stdio.h>

main(){

//Declaración de variables
	float dep1,dep2,total;

//Pantalla: se le pide al usuario que ingrese los dos depositos
	printf("Hola! Por favor ingresar el primer deposito: ");
	scanf("%f",&dep1);
	printf("\nPor favor ingresar el segundo deposito: ");
	scanf("%f",&dep2);
	
//Calculos
	total = (dep1 + dep2)* 1.2;

//Pantalla: se limpia la pantalla con lo pedido anteriormente	
	system("cls");
	
//Pantalla: se le muestra al usuario el valor de la sumatoria de los dos depositos mas un 20% de interes
	printf("La suma de ambos depositos mas el 20 por ciento de interes es igual a: %.2f",total);
	
	printf("\nToque cualquier letra para finalizar");
	
	getch();
	
}

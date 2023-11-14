/*Un automóvil realiza su carga de combustible. El propietario conoce su autonomía y
ésta no cambia. Por ejemplo 14km/l.
Realizar un programa el cual ingresando el precio por litro de combustible y la
cantidad que cargo, calcule el IMPORTE a pagar y los KILOMETROS a recorrer con dicha
carga.*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main() {
		
	int auton=14;
	float precio,cant,importe,km;
	
	printf("Por favor ingresar cantidad de combustible que cargo: ");
	scanf("%f",&cant);
	printf("\nPor favor ingresar el precio por litro del combustible: ");
	scanf("%f",&precio);
	
	system("cls");
	
	importe = precio * cant;
	km = cant * auton;
	
	printf("El importe total a pagar es: %.2f",importe);
	printf("\n\nLos kilometros posibles a realizar son: %.2f km",km);
	
	printf("\n\nGracias por usar la aplicacion");
	
	
	getch();
	
}

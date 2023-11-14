/*Realizar un proceso que confeccione una factura de compra, ingresando el código de artículo,
la cantidad comprada del mismo y su precio unitario. Proponer un fin de datos.*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){

	//Declaración de variables
	int cod, cant;
	float importe = 0, precioUnitario;
	
	//Pantalla: Se imprime en pantalla un mensaje de bienvenida e instrucciones rapidas al usuario
	printf("Bienvenido al sistema de facturacion!");
	printf("\n\n------------------------------------------------------");
	printf("\nIngrese el codigo del articulo, para salir ingrese '0'");
	printf("\n------------------------------------------------------");
	printf("\n\nCodigo: ");
	
	//Se valida que el usuario ingrese un código válido, caso contrario se le imprime en pantalla un mensaje de error	
	while(scanf("%i",&cod)!=1)
	{
		printf("\nERROR - Por favor ingresar un codigo valido: ");
		while(getchar()!='\n');
	}
	
	//Se limpia el buffer para que no entre en bucle infinito 
	while(getchar()!='\n');
	
	//Se inicia el bucle si el código ingresado es distinto a "0"
	while(cod !=0)
	{	

		//Se le pide al usuario que ingrese la cantidad del articulo
		printf("\nIngrese la cantidad comprada del articulo: ");
		
		//Se valida que el usuario ingrese una cantidad válida (que no ingrese caracteres)	
		while(scanf("%i",&cant)!=1)
		{
			printf("\nERROR - Por favor ingresar una cantidad valida: ");
			while(getchar()!='\n');
		}
		
		//Se limpia el buffer
		while(getchar()!='\n');
		
		printf("\nIngrese el precio unitario del articulo: $");
		
		//Se valida que el usuario ingrese un precio válido (que no ingrese caracteres)
		while(scanf("%f",&precioUnitario)!=1)
		{
			printf("\nERROR - Por favor ingresar un precio valido: ");
			while(getchar()!='\n');
		}
		
		//Se limpia el buffer
		while(getchar()!='\n');
		
		//Se calcula el importe total
		importe += (cant * precioUnitario);
	
		//Se muestra en pantalla el texto nuevamente para que el usuario ingrese el código del articulo
		printf("\n--------------------------------------------------------");
		printf("\nIngrese el codigo del articulo, para salir ingrese '0'");
		printf("\n--------------------------------------------------------");
		printf("\n\nCodigo: ");
		
		//Se valida que el usuario ingrese un código válido, caso contrario se le imprime en pantalla un mensaje de error	
		while(scanf("%i",&cod)!=1)
		{
			printf("\nERROR - Por favor ingresar un codigo valido: ");
			while(getchar()!='\n');
		}
		
		//Se limpia el buffer para que no entre en bucle infinito 
		while(getchar()!='\n');
		
	}
	
	//Al momento que el usuario ingrese 0, el programa muestra el importe total de la factura
	printf("\n---------------------------------------");
	printf("\nEl importe total a pagar es de $%.2f",importe);
	printf("\n---------------------------------------\n\n");
	//Se hace una pausa para que el usuario pueda ver los datos en pantalla
	system("pause");
			
}

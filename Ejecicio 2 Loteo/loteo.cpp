/*Una inmobiliaria realiza cotizaciones sobre un loteo. Se tiene de los mismos los
metros de frente y el largo. El precio del metro cuadrado está en dólares u$s50 y no
cambia.
Realizar un programa el cual ingresando la cotización del dólar, y las medidas
conocidas del lote, calcule el área del mismo y el importe en dólares y en pesos al
momento de la cotización*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	int precio = 50;
	float largo,frente,area,cotizacion,impdolar,imppesos;
	
	printf("Hola! Bienvenido al sistema automatico de cotizacion de inmobiliarias Stella");
	
	printf("\n\nPor favor ingresar la cotizacion del dolar oficial: ");
	scanf("%f",&cotizacion);
	
	printf("\n\nPor favor ingresar los metros de frente del lote: ");
	scanf("%f",&frente);
	
	printf("\n\nPor favor ingresar los metros de largo del lote: ");
	scanf("%f",&largo);
		
	system("cls");
	
	area = largo * frente;
	impdolar = precio * area;
	imppesos = impdolar * cotizacion;
	
	printf("El area del lote es de %.2f metros cuadrados.",area);
	printf("\n\nEl importe en dolares es: u$s%.2f",impdolar);
	printf("\n\nEl importe en pesos es: $%.2f",imppesos);
	
	printf("\n\nGracias por usar nuestro sistema!");
	
	getch();
		
}

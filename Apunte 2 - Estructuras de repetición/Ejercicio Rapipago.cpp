/*
UN RAPIPAGO INGRESA EL VALOR LAS FACTURAS COBRADAS EN EL DIA
	SU COMISION ES EL 3% DE LO RACAUDADO
	MOSTRAR AL FINAL DE LA CARGA (0=SALIR)
	TOTAL DE DINERO EN CAJA
	NETO A PAGAR
	COMISION GENERADA

PSEUDOCÓDIGO:
INICIO
1) Declaración de vaiables: 
	float: valorFac, comision, caja, neto
2) Mostrar ("Ingresar el valor de la factura, para salir ingrese 0: ") 	
3)Leer valorFac
4) Mientras valorFac != 0:
	comision += valorFac;
	caja += valorFac;
	neto += valorFac;
	Mostrar ("Ingresar el valor de la factura, para salir ingrese 0: ")
	Leer valorFac
5) Mostrar ("La comision obtenida es: ",comision *0.03)
   Mostrar ("El dinero en caja es: ", caja)
   Mostrar ("El neto a pagar es: ",neto *0.97)
FIN
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	
	float valorFac, comision = 0, caja = 0, neto = 0;
	
	printf("Ingresar el valor de la factura, para salir ingrese 0: ");
	scanf("%f",&valorFac);
	
	while (valorFac != 0)
	{
		comision += valorFac;
		caja += valorFac;
		neto += valorFac;
		printf("Ingresar el valor de la factura, para salir ingrese 0: ");
		scanf("%f",&valorFac);
	}
	
	printf("\nLa comision obtenida es: %.2f", comision * 0.03);
	printf("\nEl dinero en caja es: %.2f", caja);
	printf("\nEl neto a pagar es: %.2f\n", neto * 0.97);
	system("pause");
	
}

/*Se tienen como datos los importes de todas las facturas correspondientes al mes que acaba
de finalizar de un comercio (no se sabe cuántas son). Se desea conocer:
a. Cuántas facturas se realizaron.
b. Importe promedio de las mismas.
c. Cuántos son los importes que superan los 3000 pesos.*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	float importeTotal = 0, importe = 0, promedio = 0;
	int cont = 0, facmayor = 0;
	
	printf("Ingresar el importe de la factura y presione 'enter', para salir ingrese '0' y presione 'enter': ");
	scanf("%f",&importe);
	
	while(importe !=0)
	{
		cont++;
		importeTotal+= importe;
		
		if(importe>3000) facmayor++;
		printf("Ingresar el importe de la factura y presione 'enter', para salir ingrese '0' y presione 'enter': ");	
		scanf("%f",&importe);
	}
	
	promedio = importeTotal / cont;
	
	printf("\nEl importe promedio de las facturas ingresadas es igual a $ %.2f",promedio);
	printf("\n\nLa cantidad de facturas mayores al monto de $3000 es de: %i\n\n",facmayor);
	system("pause");
	
}

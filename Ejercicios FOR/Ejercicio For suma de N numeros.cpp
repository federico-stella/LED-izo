//Calcular la suma de los N primeros numeros naturales. Ingrese N por teclado

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int i,rep, total = 0;
	
	printf("Bienvenido al sistema de suma");
	printf("\nPara comenzar indique la cantidad de numeros 'N' que desea sumar: ");
	scanf("%i",&rep);
	
	for(i=1;i<=rep;i++)
	{
		total = total + i;
	}
	
	printf("\nLa suma de los primeros %i numeros es: %i\n",rep,total);
	system("pause");
}


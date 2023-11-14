/*
Se dispone de una planilla con los sueldos a pagar a los empleados de una empresa. Se
desea conocer cuál es el sueldo promedio que se debe abonar. Como no se conoce la
cantidad de empleados, luego de ingresar cada sueldo deberá aparecer en la pantalla el
siguiente cartel: “¿Continua o Finaliza? (C/F)”, el operador entonces deberá ingresar una “C”
o una “F”, según quiera continuar ingresando datos o no.
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	float sueldo,acum = 0;
	int cont = 0;
	char c;
	
	//Se muestra en pantalla un mensaje de bienvenida
	printf("Bienvenido al sistema!");
	
	//Se inicia el bucle que al menos se va a repetir una vez, si se mantiene la condición (que el usuario ingrese "C") se repite nuevamente, caso contrario, sale del bucle 
	do
	{
		printf("\n\nIngresar el sueldo del empleado: ");		//Muestra en pantalla un mensaje al usuario para que ingrese el sueldo del empleado
		while(scanf("%f",&sueldo) !=1)							//Se utiliza el while para validar la entrada del scanf, en caso de que el usuario ingrese un valor distinto a un numero, se imprime un mesaje de error
		{
			printf("\nERROR:Ingresar el sueldo del empleado: ");
			while(getchar()!='\n');								//Se limpia el buffer
		}
		while(getchar()!='\n');
		acum += sueldo;											//Se suma al acumulado el sueldo ingresado
		cont++;													//Se suma al contador +1
		printf("\n--------------------------------\n");
		printf("Continua o Finaliza? (C/F): ");					//Se imprime en pantalla un mensaje para que el usuario ingrese si deseea continuar o no
		while(scanf("%c",&c) !=1 || (c != 'c' && c != 'C' && c != 'f' && c != 'F'))		//Se valida que el dato ingresado por el usuario sea igual a 'c', 'C', 'f' o 'F', en caso contrario se muestra en patanlla un mensaje de error 
		{	
			printf("\nERROR: Ingresar una C o una F dependiendo la opcion que desee: ");
			while(getchar()!='\n');
		} 
		printf("--------------------------------");
	} while (c != 'f' && c!='F');
	
	printf("----------------------------------------------");
	printf("\nEl promedio de sueldos a pagar es de: $ %.2f\n",acum / cont);		//Se muestra en pantalla el promedio a pagar
	system("pause");															//Se hace una pausa al sistema para que el usuario pueda ver los datos y se pide la confirmación para finalizar
}

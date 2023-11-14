/*
Enunciado:
Dada una lista de espera de pasajeros de un micro, donde se indica el peso de equipaje de
cada uno de ellos, deberá determinarse cuantas personas viajarán en el mismo de acuerdo a
las siguientes condiciones:
a. El peso del equipaje total no debe superar los 3500 kg.
b. No se permiten pasajeros de pie.
c. Para lo cual se tiene además los siguientes datos del micro: número del mismo y
cantidad de asientos que posee el mismo.
d. Exhibir el número del micro, la cantidad de pasajeros y el peso del equipaje.

Pseudocodigo:
INICIO

bool opcion = true
Mientras (opcion = true)
	int cont, numMicro, CA, ban
	float peso, cantPTotal
	
	Mostrar ("numMicro y CA")
	Mostrar ("Ingresar el peso")
	Repetir
		Leer ("peso")	
		cantPTotal = cantPTotal + peso
		Si (cantPTotal < 3500)
			cont = cont + 1
		sino
			ban = 1
	Mientras(ban == 0 && cant <= CA)

	Si (ban == 0)
		Mostrar("Micro completo",numMicro,CA)
		Mostrar("Peso total")
	sino
		Mostrar("Micro con peso completo")
		Mostrar("Desea comenzar nuevamente o salir?")
		Leer ("opcion")
		Switch
			caso 1:
				Limpiar pantalla
			caso 2:
				opcion = false
Fin mientras

FIN
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main()
{
	//Declaro la variable "opcion" para que el while se repita hasta que "opcion" sea igual a 'false'
	bool opcion=true;
	while(opcion)
	{
		//Declaro las variables a utilizar, algunas lleban un valor preterminado 
		int cont = 0, numMicro = 459, CA = 10, ban = 0; 	
		float peso, cantPT = 0;
		
		//Se muestra en pantalla el número del micro y la cantidad de pasajeros disponibles
		printf("El numero del micro es %i y la cantidad de pasajeros disponibles es %i",numMicro,CA);
		
		//Comienza el bucle que se va a ejecutar una vez y se va a repetir si se cumple la condición (ban == 0 && cont < CA)
		do
		{
			printf("\n\nIngresar el peso del equipaje: ");
			scanf("%f",&peso);									//Se escanea el peso del equipaje
			cantPT += peso;										//Se suma al acumulador de peso total
			if (cantPT < 3500) cont++;							//Si el peso total es menor a 3500 suma uno al contador de pasajeros
			else 												//Caso contrario igual "ban = 1" (codicion suficiente para que no se repita el DoWhile)
			{
				ban = 1;
			}			
			
		}while(ban == 0 && cont < CA);
		
		if (ban == 0)											//Si "ban = 0" significa que se cargaron el peso de los 10 pasajeros y el mismo no excedio los 3500 kg 
		{
			printf("-----------------------------------------------------");
			printf("\nMicro numero %i completo, cantidad de pasajeros: %i\n",numMicro,CA);	//Muestra en pantalla los datos del micro y cantidad de pasajeros
			printf("\nPeso total: %.1f kg\n",cantPT);										//Muestra en pantalla el peso total
			printf("-----------------------------------------------------\n");
			opcion = false;																	//Iguala a la variable "opcion" = false para salir del bucle While principal
			system("pause");																//Hace una pausa para que el usuario lea los datos 
		}
		else																				//En el caso de que el usuario a la hora de ingresar el peso de los equipajes se exceda ocurre lo siguiente
		{
			printf("\nLa ultima persona no puede viajar en el colectivo por exceso del peso de equipaje\n");
			printf("\nMicro numero %i, cantidad de pasajeros: %i\n\n",numMicro,cont);
			printf("\nSi desea comenzar nuevamente el conteo de equipaje ingrese '1', si desea salir ingrese '0': ");	//Le preguta al usuario si quiere comenzar el conteo nuevamente o si desea salir
			scanf("%opcion",&opcion);
		
			switch (opcion)																	//Si el usuario ingresa 1 se reinicia el conteo y si ingresa 0 sale del programa
			{
				case 1:
					system("cls");
					break;			
				case 0:
					opcion =false;
					break;	
			}
		} 
	}
	
	
	
	
}

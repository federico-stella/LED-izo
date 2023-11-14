//Ingresar N cantidad de alumnos y sus respectivas notas de parciales, calcular el promedio de notas del curso.

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int alumnos,i;
	float nota,prom,acum = 0;
	
	//Pantalla: le pido al usuario que ingrese la cantidad de alumnos del curso
	printf("Bienvenido al sistema de calculo de notas del curso!");
	printf("\n\nPor favor ingresar la cantidad de alumnos del curso: ");
	
	//Utilizo un while para validar que el dato sea correcto, en caso contrario imprime en pantalla un mensaje de error
	while(scanf("%i",&alumnos)!=1)
	{
		printf("\nERROR: Por favor ingresar un numero valido!: ");
		while(getchar()!='\n'); 
	}
	
	//Utilizo la función for repiiendo "n" veces donde "n" es igual a la cantidad de alumnos
	for(i=1;i<=alumnos;i++)
	{
	//Le pido al usuario que ingrese las notas una por una y se guarda en la variable "nota" y se acumula en la variable "acum"
		printf("\nIngresar la nota del parcial: ");
		
	//Utilizo un while para validar que el dato sea correcto, en caso contrario imprime en pantalla un mensaje de error
		while(scanf("%f",&nota)!=1)
		{
			printf("\nERROR: Por favor ingresar una nota valida!: ");
			while(getchar()!='\n'); 	
		}
		acum += nota;
	}
	
	//Saco el promedio de la nota
	prom = acum / alumnos;
	
	//Pantalla: Se imprime en panalla la nota promedio del curso
	printf("\nEl promedio de la nota del curso es de %.2f\n\n",prom);
	//Utilizo un system pause para que el usuario pueda ver el promedio
	system("pause"); 
	
	
}

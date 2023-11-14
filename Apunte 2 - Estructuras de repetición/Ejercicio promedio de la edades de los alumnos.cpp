/*	SE TIENE LA CANTIDAD DE ALUMNOS DE UN CURSO
	DEBE INGRESARLA EL USUARIO
	INGRESAR LA EDAD DE CADA ESTUDIANTE
	AL FINALIZAR, MOSTRAR EL PROMEDIO DE EDAD DEL CURSO

PSEUDOCÓDIGO:
INICIO
1) Declaración de variables 
	Int: alumnos, i, edad
	Float: cont
2) Mostrar("Ingrese la cantidad de alumnos: ")
	Leer alumnos
3) PARA (i=0,i<=alumnos,i++)
	Mostrar("Ingrese edad del alumno: ")
	LEER edad
	cont += edad
4) Mostrar ("El promedio de edad de los alumnos es: ", cont/alumnos)
FIN
*/

#include<stdio.h>
#include<conio.h>
#include<windows.h>

main(){
	int alumnos, i = 1, edad;
	float cont = 0;
	
	printf("Ingresar la cantidad de alumnos del curso: ");
	scanf("%i",&alumnos);

	for (i=1;i<=alumnos;i++)
	{
		printf("\Ingresar la edad del alumno: ");
		scanf("%i",&edad);
		cont += edad;
	}	
	
	printf("\n\nEl promedio de edad de los alumnos es: %.2f", cont/alumnos);
}

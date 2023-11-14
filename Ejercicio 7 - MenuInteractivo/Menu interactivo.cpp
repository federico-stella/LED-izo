/*
Izo
1)Mostrar datos del alumno
2)Ingresar 2 numeros mostrar el mayor
3)salir
*/

#include<conio.h>
#include<stdio.h>
#include<windows.h>

main(){

//Declaración de variables
	
	int opcion,salir; //Variable opcion utilizada para el numero de opción del menu principal y la variable salir se utiliza para modificar la variable booleana "menu" para poder salir del programa
	float num1,num2,resul;  //Las variables num1 y num2 son utilizadas en la opción 2 para calcular cual número ingresado es el más alto
	bool menu = true, menu_2 = false, programa = true; //La variable booleana "menu" es utilizada para poder cerrar el bucle while principal y poder salir del programa, por defecto se la igual a true para que inicie el bucle

while (programa) //Bucle white del programa
{
		
	while(menu)  //Bucle white menu principal
	{	
		system("cls");
		printf("\x1b[35mBienvenido al menu del IZO\x1b[0m");
		printf("\n\nIngresar el numero de la opcion que quiera ejercutar y presione 'Enter' \n1) Mostrar datos del alumno \n2) Ingresar dos numeros y mostrar el numero mayor \n3) Mostrar el menu secundario\n4) Salir\n\n");
		while(scanf("%i",&opcion) !=1||opcion<1||opcion>4)  //Se utiliza un bucle while para verificar que el usuario ingrese un numero entero que sea igual a 1, 2 o 3 en cuyo caso se le imprime en pantalla un mensaje de error
		{
			printf("ERROR: El numero debe ser 1, 2, 3 o 4");
			while (getchar() !='\n');
			system("cls");
			printf("\x1b[35mBienvenido al menu del IZO\x1b[0m\n\nIngresar el numero de la opcion que quiera ejercutar y presione 'Enter' \n1) Mostrar datos del alumno \n2) Ingresar dos numeros y mostrar el numero mayor \n3) Mostrar el menu secundario\n4) Salir\n\n");
			printf("Ingrese un numero del 1 al 4 segun la opcion que desee: ");
		}
	 	
		switch (opcion) //Una vez que el usuario haya ingresado correctamente un numero del 1 al 3 el programa entra en el switch y dependiendo el numero ingresado se ejecuta lo pedido
		{
			case 1: //Si el número ingresado es igual a 1 se muestran los datos del alumno
				system("cls");
				printf("Los datos del alumno son: \nApellido: Stella\nNombre: Federico\nFecha de nacimiento: 30/10/2000\nEdad: 22\nDNI: 42.868.653\nLocalidad: Rosario");
				printf("\n\n");
				system("pause"); //Se hace un system pause para que el usuario pueda leer los datos
				break; //Al precionar cualquier tecla envia al usuario al menu principal ya que la variable "menu" sigue siendo igual a TRUE
				
			case 2: //Si el número ingresado es igual a 2 se le pide al usuario que ingrese dos números
				system("cls");
				printf("Usted a seleccionado la opcion 2 'Ingresar dos numeros y mostrar el numero mayor'");
				printf("\n\nPor favor ingresar el primer numero y presionar 'enter': ");
				
				while(scanf("%f",&num1)!=1) //Se valida que el números ingresado sea del tipo float y en caso contrario se le imprime en pantalla un mensaje de error
				{	
					printf("\nPor favor ingresar un numero y presionar 'enter': ");
					while(getchar()!='\n');
				}
			
				printf("\nPor favor ingresar el segundo numero y presionar 'enter': ");
				while(scanf("%f",&num2)!=1 || num1 == num2) //Se valida que el número ingresado sea del tipo float y en caso contrario se le imprime en pantalla un mensaje de error
				{	
					printf("\nPor favor ingresar un numero valido y que no sea igual al anterior y presionar 'enter': ");
					while(getchar()!='\n');
				}
			
					if (num1>num2)
					printf("\nEl numero %.2f es el \x1b[32mmayor\x1b[0m",num1); //Si el número de la variable "num1" es mayor que el de la variable "num2" se imprime en pantalla el mensaje
				else
					printf("\nEl numero %.2f es el \x1b[32mmayor\x1b[0m",num2); //Si el número de la variable "num2" es mayor que el de la variable "num1" se imprime en pantalla el mensaje
					printf("\n");
					system("pause");
				break; //Al precionar cualquier tecla envia al usuario al menu principal ya que la variable "menu" sigue siendo igual a TRUE
		
			case 3: //Al presionar la opción 3, se cierra el menu principal y se abre el menu secundario
				menu = false;
				menu_2 = true;
				break;
					
			case 4: //Si el número ingresado es igual a 3 se le pregunta al usuario si deseea realmente salir del programa con una confirmación 
				system("cls");
				printf("\x1b[31mEsta seguro que quiere salir?\x1b[0m");
				printf("\n\nIngrese 1 para confirmar o 2 para volver al menu principal: "); //Se le pide que ingrese un 1 si quiere confirmar la acción de salir del programa o un 2 si quiere volver al menu principal
				while(scanf("%i",&salir) !=1 || salir < 1 || salir > 2) //Se valida que el usuario ingrese un 1 o un 2, en caso contrario se le imprime un mensaje de error
				{
					printf("\nPor favor ingresar un 1 o un 2 dependiendo la opcion que desee: ");
					while(getchar()!='\n');	
				}
				if (salir == 1)  
					menu = false; //En el caso que el usuario haya ingresado 1 se le cambia a la variable "menu" el TRUE por el FALSE, y asi poder salir del bucle while principal y terminar el programa
					menu_2 = false;
					programa = false;
				break;
	
		}
	}	

	while(menu_2)  //Bucle white menu secundario
		{	
			system("cls");
			printf("\x1b[33mBienvenido al menu secundario del IZO\x1b[0m");
			printf("\n\nIngresar el numero de la opcion que quiera ejercutar y presione 'Enter' \n1) Mostrar a ubicacion del instituto \n2) Realizar una multiplicacion de dos numeros \n3) Volver al menu principal\n4) Salir\n\n");
			while(scanf("%i",&opcion) !=1||opcion<1||opcion>4)  //Se utiliza un bucle while para verificar que el usuario ingrese un numero entero que sea igual a 1, 2 o 3 en cuyo caso se le imprime en pantalla un mensaje de error
			{
				printf("ERROR: El numero debe ser 1, 2, 3 o 4");
				while (getchar() !='\n');
				system("cls");
				printf("\x1b[33mBienvenido al menu secundario del IZO\x1b[0m\n\nIngresar el numero de la opcion que quiera ejercutar y presione 'Enter' \n1) Mostrar a ubicacion del instituto \n2) Realizar una multiplicacion de dos numeros \n3) Volver al menu principal\n4) Salir\n\n");
				printf("Ingrese un numero del 1 al 4 segun la opcion que desee: ");
			}
		 	
			switch (opcion) //Una vez que el usuario haya ingresado correctamente un numero del 1 al 3 el programa entra en el switch y dependiendo el numero ingresado se ejecuta lo pedido
			{
				case 1: //Si el número ingresado es igual a 1 se muestran los datos del alumno
					system("cls");
					printf("La ubicacion del \x1b[31mInstituto Zona Oeste\x1b[0m es: \nDireccion: Sucre 681\nProvincia: Santa Fe\nLocalidad: Rosario");
					printf("\n\n");
					system("pause"); //Se hace un system pause para que el usuario pueda leer los datos
					break; //Al precionar cualquier tecla envia al usuario al menu principal ya que la variable "menu" sigue siendo igual a TRUE
					
				case 2: //Si el número ingresado es igual a 2 se le pide al usuario que ingrese dos números
					system("cls");
					printf("Usted a seleccionado la opcion 2 'Realizar una multiplizacion de dos numeros'");
					printf("\n\nPor favor ingresar el primer numero y presionar 'enter': ");
					while(scanf("%f",&num1)!=1) //Se valida que el números ingresado sea del tipo float y en caso contrario se le imprime en pantalla un mensaje de error
					{	
						printf("\nPor favor ingresar un numero y presionar 'enter': ");
						while(getchar()!='\n');
					}
					
					printf("\nPor favor ingresar el segundo numero y presionar 'enter': ");
					while(scanf("%f",&num2)!=1) //Se valida que el número ingresado sea del tipo float y en caso contrario se le imprime en pantalla un mensaje de error
					{	
						printf("\nPor favor ingresar un numero y presionar 'enter': ");
						while(getchar()!='\n');
					}
					
					resul = num1 * num2;
					
					printf("\nEl resultado de la multiplicacion es: \x1b[36m%.2f\x1b[0m",resul);			
					printf("\n\n");
					system("pause");
					break; //Al precionar cualquier tecla envia al usuario al menu principal ya que la variable "menu" sigue siendo igual a TRUE
				
				case 3: //Al presionar la opción 3, se cierra el menu secundario y se abre el menu principal
					menu = true;
					menu_2 = false;
					break;
						
				case 4: //Si el número ingresado es igual a 3 se le pregunta al usuario si deseea realmente salir del programa con una confirmación 
					system("cls");
					printf("\x1b[31mEsta seguro que quiere salir?\x1b[0m");
					printf("\n\nIngrese 1 para confirmar o 2 para volver al menu principal: "); //Se le pide que ingrese un 1 si quiere confirmar la acción de salir del programa o un 2 si quiere volver al menu principal
					while(scanf("%i",&salir) !=1 || salir < 1 || salir > 2) //Se valida que el usuario ingrese un 1 o un 2, en caso contrario se le imprime un mensaje de error
					{
						printf("\nPor favor ingresar un 1 o un 2 dependiendo la opcion que desee: ");
						while(getchar()!='\n');	
					}
					if (salir == 1)  
						menu = false; //En el caso que el usuario haya ingresado 1 se le cambia a la variable "menu" el TRUE por el FALSE, y asi poder salir del bucle while principal y terminar el programa
						menu_2 = false;
						programa = false;
					break;
		
			}
		}	
		
	}
}

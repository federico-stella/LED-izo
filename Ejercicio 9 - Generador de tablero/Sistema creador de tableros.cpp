#include<conio.h>
#include<stdio.h>
#include<windows.h>


main()
{
	int opcion,x,y,fila,columna,salir;
	bool menu = true;
	
	while(menu)  //Bucle white menu principal
	{	
		system("cls");
		printf("\x1b[35mBienvenido al sistema creador de tableros\x1b[0m");
		printf("\n\nIngresar el numero de la opcion que quiera ejercutar y presione 'Enter' \n1) Crear un tablero de ajedrez\n2) Crear un tablero personalizado\n3) Salir\n\n");
		while(scanf("%i",&opcion) !=1||opcion<1||opcion>3)  //Se utiliza un bucle while para verificar que el usuario ingrese un número entero que sea igual a 1, 2 o 3 en cuyo caso se le imprime en pantalla un mensaje de error
		{
			while (getchar() !='\n');
			system("cls");
			printf("\x1b[35mBienvenido al sistema creador de tableros\x1b[0m\n\nIngresar el numero de la opcion que quiera ejercutar y presione 'Enter' \n1) Crear un tablero de ajedrez\n2) Crear un tablero personalizado\n3) Salir\n\n");
			printf("ERROR: El numero debe ser 1, 2 o 3");
			printf("\n\nIngrese un numero del 1 al 3 segun la opcion que desee: ");
		}
		//Se limpia el buffer
		while(getchar()!='\n');
		
		switch(opcion)
		{
			//Si el usuario ingresa 1, se le imprime en pantalla el tablero de ajedrez de 8x8
			case 1:
				system("cls");
				printf("\n");
				for(x=0;x<8;x++)					//El for se repite 8 veces en "x" (filas)
				{
					for(y=0;y<8;y++)				//El for se repite 8 veces en "y" (columnas)
					{
						if(x % 2 == 0)				//SI el resto de "x" es igual a "0" (es decir que "X" es un número par), se ejecuta la primera parte del if
						{							
							if(y % 2 != 0)			//SI el resto de "y" es distinto a "0" (es decir que "Y" es un número impar), se imprime una casilla "negra"
							{
								printf("|M|");
							}
							else					//Pero en el caso de que el resto de "y" sea igual a "0" (es decir que "Y" es un número par), se imprime una casilla "blanca"
							{
								printf("| |");
							}
						}
						else						//En el caso de que "x" sea un número impar (es decir el resto de "x" es distinto de "0"), se ejecuta lo siguiente
						{
							if(y % 2 == 0)			//La misma condición que arriba, si "y" es par ejecuta lo primero, si es impar ejecuta lo segundo
							{
								printf("|M|");	
							}
							else
							{
								printf("| |");
							}
						}						
					}
				printf("\n");
				}
			printf("\n");
			//Se espera la confirmación del usuario para volver al menu principal
			system("pause");
			break;
			
			//Si el usuario ingresa 2, se le imprime en pantalla que ingrese el numero de columnas
			case 2:
				system("cls");
				printf("Usted ha seleccionado la opcion de crear un tablero personalizado");
				printf("\n\nIngresar el numero de columnas: ");
				while(scanf("%i",&columna) !=1)
				{
					while (getchar() !='\n');
					system("cls");
					printf("Usted ha seleccionado la opcion de crear un tablero personalizado");
					printf("\n\nERROR: El dato que ingreso no es valido ");
					printf("\n\nIngresar el numero de columnas: ");
				}
				//Se limpia el buffer
				while(getchar()!='\n');
				//Se le imprime en pantalla que ingrese el numero de filas
				printf("\nIngresar el numero de filas: ");
				while(scanf("%i",&fila) !=1)
				{
					while (getchar() !='\n');
					printf("\n\nERROR: El dato que ingreso no es valido ");
					printf("\n\nIngresar el numero de filas: ");
				}
				//Se limpia el buffer
				while(getchar()!='\n');
				//Se limpia la pantalla
				system("cls");
				//Se le imprime en pantalla un mensaje informando las filas y columnas que posee el tablero 
				printf("El siguiente tablero personalizado contiene %i filas y %i columnas",fila,columna);
				printf("\n\n");
				
				for(x=0;x<fila;x++)				//En este caso este for es el mismo que el anterior, solamente cambia la cantidad de columnas y filas que tendra el tablero (cuya cantidad es ingresada por el usuario)
				{
					for(y=0;y<columna;y++)		//Es este caso el for se repite "columna" veces en "Y" y "filas" veces en "X"
					{
						if(x % 2 == 0)
						{
							if(y % 2 != 0)
							{
								printf("|M|");
							}
							else
							{
								printf("| |");
							}
						}
						else
						{
							if(y % 2 == 0)
							{
								printf("|M|");	
							}
							else
							{
								printf("| |");
							}
						}	
					}
				printf("\n");		
				}
			printf("\n");
			//Se hace una pausa para que el usuario pueda ver el tablero y confirme apretando cualquier tecla
			system("pause");
			break;			//Fin del caso 2
			
			case 3:	
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
				break;	//Fin del caso 3							
		}				
	}	
}

	

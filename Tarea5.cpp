/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 01/04/2022
Escuela: Universidad del Valle de México Campus Villahermosa
Materia: Programación Estructurada
Ciclo: 01/2022

Este es un programa en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables enteras y en cadena
    -printf para mostrar mensajes y variables
    -fgets
    -scanf
    -El uso de include para las librerías
    -Librerías de la función string.h
    -Uso de condicionales
    -Ciclos
    -fflush
    -Funciones
    -Código ASCII
    -Comentarios para la documentación interna del programa	
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//Prototipo
void leers(char *mensaje,char s[], int n);
//principal
int main() {
	//Declaración de variables
	int opcion;
	char s[23];
	char dato1[24];
  	char dato2[19];
  	char anima2[10];
   	char anima1[10];
   	char animal1[11];
   	char animal2[11];
   	int i;
  	char cadena2[14];
	char cadena1[14];
	char caracter1[17];
   	char caracter2[6];
   	char* p;
   	//Proceso
	do {
		printf("-------- MENU PRINCIPAL ---------\n");
		printf("0. Salir \n");
		printf("1. strlen \n");
		printf("2.  strcat\n");
		printf("3. strcpy \n");
		printf("4. strcmp \n");
		printf("5. strncpy \n");
		printf("6. strstr \n");
		printf("--------------------------------------\n");
		printf("Selecciona una opcion: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 0: printf("Adios........\n");
				break;
			case 1: printf("strlen Calcula el n%cmero de caracteres de la cadena apuntada por s \n", 163);
   					leers("Introduce un dato: ", s,23);
   					printf( "dato=%s\n", s );
   					printf( "strlen(caracteres) = %d\n", strlen( s ) );
				system("PAUSE");
				break;
			case 2: printf("strcat a%cade una copia de la cadena apuntada por dato2 al final de la cadena apuntada por datos1\n",164);
  					leers("Introduce un caracter: ", dato1, 24);
   					leers("Introduce otro caracter: ", dato2, 19);
   					printf( "Primer caracter=%s\t \n", dato1);
   					printf( "Segundo caracter=%s\t \n", dato2);
   					strcat( dato1, dato2 );
   					printf( "Caracteres= %s\n", dato1);
				system("PAUSE");
				break;
			case 3: printf("strcpy Copia la cadena apuntada por anima2 (incluyendo el car%ccter nulo) a la cadena apuntada por anima1\n", 160);
   					leers("Introduce un animal: ",anima2,10);
   					strcpy( anima1, anima2 );
   					printf( "Animal 2= %s\n", anima2 );
   					printf( "Animal 1= %s\n", anima1 );
				system("PAUSE");
				break;
			case 4:	printf("strcmp Compara la cadena apuntada por animal1 con la cadena apuntada por animal2.\n");
   					leers("Introduce un animal: ", animal1,11);
   					leers("Introduce otro animal: ", animal2,11);
   					printf( "Animal1= %s\t", animal1 );
   					printf( "Animal2= %s\n", animal2 );
   					i = strcmp( animal1, animal2 );
   					printf( "animal 1 es " );
   					if( i < 0 )  printf( "menor que" );
   					else if( i > 0 )  printf( "mayor que" );
   					else  printf( "igual a" );
   					printf( " animal 2 en caracteres\n" );
				system("PAUSE");	    
				break;
			case 5: printf("strncpy Copia no m%cs de n(3) caracteres de la cadena apuntada por cadena2 a la cadena apuntada por cadena1\n", 160);
					leers("Introduce un nombre: ", cadena2, 14);
   					strncpy( cadena1, cadena2, 3 );
   					printf( "Nombre=%s\n", cadena2 );
					printf( "caracteres=%s\n", cadena1 ); 
				system("PAUSE");
				break;
			case 6:	printf("strstr localiza la primera aparici%cn en la cadena apuntada por caracter1 de la secuencia de caracteres en la cadena apuntada por caracter2\n", 162);
   					leers("Introduce un nombre: ", caracter1, 17);
   					leers("Introduce los caracteres que deseas abarcar: ", caracter2, 6);
   					p = strstr(caracter1, caracter2);
   					if (p) {
        				printf("String encontrado\n");
        				printf("La primera ocurrencia del string '%s' en '%s' es '%s'", caracter2, caracter1, p);
    				} else
        				printf("String no encontrado\n");
				system("PAUSE");
				break;			
		}	
	}while(opcion!=0);
	return 0;
}
//Funciones
void leers(char *mensaje,char s[], int n) {
printf(mensaje);
	fflush(stdin);
	fgets(s,n, stdin);
	if (s[strlen(s)-1]== '\n'){
		s[strlen(s)-1]=0;
	}
}

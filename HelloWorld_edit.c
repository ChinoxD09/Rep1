/*
    Universidad Tecnica Nacional
    Profesor: Arnoldo Alcides
    Estudiante: Andres Molina Castro
    Curso: Aplicaciones de Microcoontroladores 
    Actividad en clase
*/
#include <stdio.h> //Se inclue la biblioteca estandar de entradas y salidas
//#include <stdlib.h>
 
int main(){
    
    char cadena[10]; // Aquí se aloja el valor de la cadena de caracteres, su limite son 10 letras
    int  confirm; //Declaracion de una variable entera para la confirmacion
    //char  confirm;
    
    
    printf("Hola Mundo\n");	//Imprime la frase Hola Mundo 
	
	printf("Nueva frase:\n");	//Imprime la frase Nueva frase
	fflush(stdin);	//Realiza la limpieza del buffer de entrada (stdin) standar input. Para que se ejecute el siguiente comando despues del salto de linea
	scanf("%c", &cadena);	//scanf permite leer varios tipos de datos de una sola vez, en este caso la nueva linea de caracteres

	printf("Desea continuar? (y=1/n=0)\n", confirm); 	//Imprime la frase Desea continuar? (y=1/n=0)
	fflush(stdin);	// realiza la limpieza del buffer de entrada (stdin) standar input. Para que se ejecute el siguiente comando despues del salto de linea
	scanf("%d", &confirm);	//scanf permite leer varios tipos de datos de una sola vez, en este caso la nueva linea de caracteres	

    
    while(confirm>=1){ //Siempre que la variable confirm sea 1 o mayor, las instrucciones siguen ejecutandose
		//exit (-1);
		
		printf("Nueva frase\n", cadena); 	//Imprime la frase Nueva frase
		fflush(stdin);	//Realiza la limpieza del buffer de entrada (stdin) standar input. Para que se ejecute el siguiente comando despues del salto de linea
		scanf("%c", &cadena); //scanf permite leer varios tipos de datos de una sola vez, en este caso la nueva linea de caracteres
		
		printf("Desea continuar? (y=1/n=0)\n", confirm);	//Imprime la frase Desea continuar? (y=1/n=0)
		fflush(stdin);	//Realiza la limpieza del buffer de entrada (stdin) standar input. Para que se ejecute el siguiente comando despues del salto de linea
		scanf("%d", &confirm);	//scanf permite leer varios tipos de datos de una sola vez, en este caso la nueva linea de caracteres
	} 
    if(confirm<=0){	//Si se cumple que la variable confirm es igual o menor a 0 se termina el programa
		exit (-1); //la función exit que permite finalizar de forma controlada un programa.
	}

	return 0;    
  
}
 


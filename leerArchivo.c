#include <stdio.h>
#include <stdlib.h>
/* Manejo de archivos en lenguaje C
	Lectura de archivos
	Flujo de datos FILE    */
	
/* PROGRAMA -> CANAL -> DISCO DURO -- ESCRITURA
	PROGRAMA <- CANAL <- DISCO DURO -- LECTURA
	
	*/

int main(){
	FILE * flujo = fopen("Prueba.txt","rb"); //Flujo es un apuntador, fopen se especifica el archivo y el modo
	if(flujo==NULL){
		perror("Error al intentar abrir el archivo");
		return 0;
	}
	
	//VAMOS A LEER EL ARCHIVO CARACTER POR CARACTER Y A IMPRIMIRLO EN PANTALLA
	char caracter;
	while(feof(flujo)==0){   //MIENTRAS QUE NO LLEGUE EL APUNTADOR AL FINAL DE ARCHIVO
		caracter = fgetc(flujo);
		printf("%c",caracter);
	}
	fclose(flujo);  //ES UNA BUENA PRACTICA CERRAR EL FLUJO DE DATOS
	printf("\nEl archivo se ha leido correctamente");
	return 0;
}

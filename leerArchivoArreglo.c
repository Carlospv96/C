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
		return 1;
	}
	
	fseek(flujo,0,SEEK_END); //MOVER EL APUNTADOR AL FINAL DEL ARCHIVO
	int num_elementos=ftell(flujo); //GUARDO LA POSICION DEL FINAL DE ARCHIVO
	rewind(flujo); //Devuelvo el apuntador al principio del archivo
	
	char *cadena=(char *)calloc(sizeof(char),num_elementos); //arreglo dinamico de caracteres
	if(cadena == NULL){
		perror("Error al reservar la memoria");
		return 2;
	}
	
	int num_elementos_leidos = fread(cadena, sizeof(char),num_elementos,flujo);
	if(num_elementos_leidos != num_elementos){ //verificar si se leyo correctamente el archivo
	perror("Error: El archivo no se leyo correctamente");
	return 3;
	}
	printf("%s",cadena);
	
	free(cadena);//Liberar la memoria reservada
	printf("\nEl archivo se ha leido correctamente...");
	fclose(flujo);//Es una buena practica cerrar el flujo de datos
	return 0;
}

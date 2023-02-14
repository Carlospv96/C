#include <stdio.h>
#include <stdlib.h>
/* Manejo de archivos en lenguaje C
	Lectura de archivos
	Flujo de datos FILE    */
	
/* PROGRAMA -> CANAL -> DISCO DURO -- ESCRITURA
	PROGRAMA <- CANAL <- DISCO DURO -- LECTURA
	
	*/

int main(){
	FILE * flujo = fopen("Prueba1.txt","rb"); //Flujo es un apuntador, fopen se especifica el archivo y el modo
	if(flujo==NULL){
		perror("Error al intentar abrir el archivo");
		return 0;
	}
	
	//Vamos a leer el archivo caracter por caracter y a guardarlo en variables diferentes
	int numero;
	char cadena[20];
	while(feof(flujo)==0){  //mientras que no llegue el apuntador al final de archivo
		//caracter=fgetc(flujo)
		fscanf(flujo,"%d%s",&numero,&cadena);
		printf("%d %s\n",numero,cadena);
	}
	
	fclose(flujo);
	return 0;

}

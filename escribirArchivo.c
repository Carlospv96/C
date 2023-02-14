#include <stdio.h>
#include <stdlib.h>

/* Escritura en archivos */
/* Flujo de datos desde el programa hacia un archivo en el disco duro */

int main(){
	FILE * flujo = fopen("Prueba.txt","w");
	if(flujo==NULL){
		perror("Ha ocurrido un error al intentar abrir o crear el archivo");
	}else{
		// fputc: Escribe un caracter en el flujo de datos
		// fputs: Escribe una cadena en el flujo de datos
		// fprintf: Funciona exactamente igual que printf solo que imprime en el archivo y no en la consola
		int i,j;
		for(i=0;i<10;i++){
			for(j=0;j<20;j++){
				fputc('p',flujo);
				fputc(' ',flujo);
			}
			fputc('\n',flujo);
		}
		fflush(flujo);
		fclose(flujo);
		printf("\n\nEl archivo se edito con exito.");
	}
	return 0;
}

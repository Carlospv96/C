#include <stdio.h>
#include <stdlib.h>

/* Escritura en archivos */
/* Flujo de datos desde el programa hacia un archivo en el disco duro */

int main(){
	int m;
	FILE * flujo = fopen("Tablas.txt","w");
	printf("Hasta que tabla desea que se imprima?");
	scanf("%d",&m);
	if(flujo==NULL){
		perror("Ha ocurrido un error al intentar abrir o crear el archivo");
	}else{
		// fputc: Escribe un caracter en el flujo de datos
		// fputs: Escribe una cadena en el flujo de datos
		// fprintf: Funciona exactamente igual que printf solo que imprime en el archivo y no en la consola
		int i,j,aux;
		fprintf(flujo,"La tabla del %d es: \n",m);
		for(i=1;i<=10;i++){
			aux=i*m;
			fprintf(flujo, "%d x %d = %d\n",m,i,aux);
		}
		fflush(flujo);
		fclose(flujo);
		printf("\n\nEl archivo se edito con exito.");
	}
	return 0;
}

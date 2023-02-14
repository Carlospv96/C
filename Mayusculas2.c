#include <stdio.h>
#include <string.h>
void main(){
		char cadena[100];
		int i;
		printf("Ingrese una cadena para pasarla a mayusculas: \n");
		scanf("%s",cadena);
		
		//printf("La cadena en mayusculas es: %s",strupr(cadena));
		//Metodo 1: Utilizando la funcion strupr() de la libreria string.h
		
		for(i=0;i<=strlen(cadena);i++){
			if(cadena[i]>='a'&&cadena[i]<='z'){
				cadena[i] -= 32;
			}
		}
		printf("%s",cadena);
	}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char Nombre[20];
	char Matricula[6];
}est;

int main(){
	est estu;
	FILE * flujo = fopen("estudiantes.txt","a+");
	if(flujo == NULL){
		perror("\nNo se pudo acceder al archivo.");
	}else{
		char nombre[20];
		printf("Ingrese el nombre a buscar: ");
		scanf("%s",&nombre);
		int m=0;
		while(!feof(flujo)){
			fread(&estu,sizeof(est),1,flujo);
			if(strstr(nombre,estu.Nombre)!=NULL){
				printf("Nombre encontrado. \n\n Matricula: %s Nombre: %s",estu.Matricula,estu.Nombre);
				m=1;
			}
		}
	if(m==0){
		printf("No se encontro el nombre.");
	}
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>

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
		printf("Ingrese el nombre del estudiante: ");
		scanf("%s",&estu.Nombre);
		printf("Ingrese la matricula para el estudiante: ");
		scanf("%s",&estu.Matricula);
		fwrite(&estu,sizeof(est),1,flujo);
		printf("\n\nDatos guardados correctamente.");
		fclose(flujo);
	}
	return 0;
}

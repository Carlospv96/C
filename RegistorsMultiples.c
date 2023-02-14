#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nombre[10];
	char apellidoP[10];
	char apellidoM[10];
	char matricula[6];
	int edad;
	char grado[3];
	int materias;
}est;

int main(){
	int n,i,m=1;
	printf("Cuantos alumno desea ingresar?");
	scanf("%d",&n);
	est estu[n];
	FILE * flujo = fopen("Registro.txt","a+");
	if(flujo == NULL){
		perror("Error al intentar abirir el archivo.");
	}else{
		for(i=0;i<n;i++){
			printf("Introduzca el nombre del alumno: ");
			scanf("%s",&estu[i].matricula);
			printf("Introduzca el apellido Paterno del alumno: ");
			scanf("%s",&estu[i].apellidoP);
			printf("Introduzca el apellido Materno del alumno: ");
			scanf("%s",&estu[i].apellidoM);
			while(m==1){
				char aux[6];
				printf("Introduzca la matricula del alumno: ");
				scanf("%s",&aux);
				while(!feof(flujo)){
					fread(&estu[i],sizeof(est),1,flujo);
					if(strstr(aux,estu[i].matricula)){
						printf("Matricula repetida, ingrese otra.\n");
							m=1;
						}else{
							m=0;
							estu[i].matricula[count]=aux[count];
					}
				}
			}
			printf("Introduzca la edad del alumno: ");
			scanf("%d",&estu[i].edad);
			printf("Intorduzca el grado que cursa el alumno: ");
			scanf("%d",&estu[i].edad);
			printf("Introduzca el numero de materias que cursa el alumno: ");
			scanf("%d",&estu[i].materias);
			fwrite(&estu[i],sizeof(est),1,flujo);
		}
	}
	return 0;
}

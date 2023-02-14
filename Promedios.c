#include <stdio.h>
#define MAXFIL 30
#define MAXCOL 30
void nombres(char a[][MAXCOL], int n);
void calificaciones(float c[][MAXCOL], float a[][MAXCOL], char b[][MAXCOL], int m, int n);
void imprimir(float c[MAXCOL][MAXCOL], float a[][MAXCOL], char b[][MAXCOL], int m, int n);
int main(){
	int alum, parc;
	printf("Introduzca el numero de alumno: ");
	scanf("%d",&alum);
	char nombr[MAXCOL][1];
	nombres(nombr,alum);
	printf("Introduzca el numero de parciales: ");
	scanf("%d",&parc);
	float calif[MAXCOL][MAXFIL],prom[MAXCOL][1];
	calificaciones(calif,prom,nombr,parc,alum);
	imprimir(calif,prom,nombr,parc,alum);
	
	return 0;
}

void nombres(char a[][MAXCOL], int n){
	int i,j;
	for(j=0;j<n;j++){
		printf("Intoduzca el nombre del alumno:");
		scanf("%s",&a[j][1]);
	}
}

void calificaciones(float c[][MAXCOL], float a[][MAXCOL], char b[][MAXCOL], int m, int n){
	int i,j;
	float suma=0;
	for(i=0;i<n;i++){
		printf("Introduzca las calificaciones de %s:\n",&b[i][1]);
		for(j=0;j<m;j++){
			printf("Introduzca la calificacion del Parcial %d:",j+1);
			scanf("%f",&c[i][j]);
			suma += c[i][j];
		}
		a[i][1]=(float)(suma/m);
		suma=0;
	}
}

void imprimir(float c[MAXCOL][MAXCOL], float a[][MAXCOL], char b[][MAXCOL], int m, int n){
	int i,j;
	float suma=0;
	printf("%10.20s\t\t","Nombres");
	for(i=0;i<m;i++){
		printf("P%.2d\t\t",i+1);
	}
	printf("Promedios\n");
	for(i=0;i<n;i++){
		printf("%10.20s\t\t",&b[i][1]);
		for(j=0;j<m;j++){
			printf("%.2f\t\t",c[i][j]);
		}
		printf("%.2f\n",a[i][1]);
		suma += a[i][1];
	}
	suma=(float)(suma/n);
	printf("El promedio general es: %.2f \n", suma);
}

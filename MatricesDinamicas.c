#include <stdio.h>
#define MAXFIL 20
#define MAXCOL 30
void llenarMatriz(int a[][MAXCOL], int nfilas, int ncol);
void sumarMatriz(int [][MAXCOL], int b[][MAXCOL], int c[][MAXCOL], int nfilas, int ncol);
void imprimirMatriz(int c[][MAXCOL], int nfilas, int ncol);
void Diagonal(int a[][MAXCOL], int nfilas, int ncol);
int main(){
	int nfilas,ncol;
	int a[MAXFIL][MAXCOL],b[MAXFIL][MAXCOL],c[MAXFIL][MAXCOL];
	printf("Introduzca las dimensiones de las matrices:\n");
	printf("Numero de filas:");
	scanf("%d",&nfilas);
	printf("Numero de columnas:");
	scanf("%d",&ncol);
	printf("Para la primer matriz:\n");
	llenarMatriz(a,nfilas,ncol);
	printf("Para la segunda matriz:\n");
	llenarMatriz(b,nfilas,ncol);
	printf("Esta es la matriz A:\n");
	imprimirMatriz(a,nfilas,ncol);
	printf("Esta es la matriz B:\n");
	imprimirMatriz(b,nfilas,ncol);
	sumarMatriz(a,b,c,nfilas,ncol);
	printf("Esta es la suma de las matrices A y B:\n");
	imprimirMatriz(c,nfilas,ncol);
	printf("Esta es la matriz diagonal de la suma de las matrices A y B:\n");
	Diagonal(c,nfilas,ncol);
	return 0;
}

void llenarMatriz(int a[][MAXCOL], int nfilas, int ncol){
	int i,j;
	for(i=0;i<nfilas;i++){
		for(j=0;j<ncol;j++){
			printf("Introduzca el elmento de la posicion (%d,%d):",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
}

void imprimirMatriz(int c[][MAXCOL], int nfilas, int ncol){
	int i,j;
	for(i=0;i<nfilas;i++){
		printf("|");
		for(j=0;j<ncol;j++){
			printf(" %.2d ",c[i][j]);
		}
		printf("|\n");
	}
}

void sumarMatriz(int a[][MAXCOL], int b[][MAXCOL], int c[][MAXCOL], int nfilas, int ncol){
	int i,j;
	for(i=0;i<nfilas;i++){
		for(j=0;j<ncol;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
}

void Diagonal(int a[][MAXCOL], int nfilas, int ncol){
	int i,j;
	for(i=0;i<nfilas;i++){
		printf("|");
		for(j=0;j<ncol;j++){
			if(i==j){
				printf(" %.2d ",a[i][j]);
			}else{
				printf(" %.2d ",0);
			}
		}
		printf("|\n");
	}
}

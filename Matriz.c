#include <stdio.h>
int ImprimirM(int array[][3], int m, int n);
float Promedio(int Array[][3], int m, int n);
int main(){
	int m=3,n=3,i,j;
	int matriz[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Introduzca el elementos de la entrada (%d,%d):\n",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	ImprimirM(matriz,m,n);
	printf("Este es el promedio: %.2f\n", Promedio(matriz,m,n));
	return 0;
}

int ImprimirM(int array[][3], int m, int n){
	int i,j;
	printf("Esta es la matriz:\n");
	for(i=0;i<m;i++){
		printf("|");
		for(j=0;j<n;j++){
			printf(" %.2d ",array[i][j]);
		}
		printf("|\n");
	}
	return 0;
}

float Promedio(int array[][3], int m, int n){
	int i,j;
	float prom=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			prom += array[i][j];	
		}
	}
	prom=(float)(prom/(m*n));
	return prom;
}

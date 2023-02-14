#include <stdio.h>
int ImprimirM(int array[][3], int array2[][3], int array3[][3], int m, int n);
int main(){
	int i,j,m=3,n=3;
	int a[m][n],b[m][n],c[m][n];
	printf("Introduzca los elementos de la primer matriz:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Introduzca el elemento de la entrada (%d,%d): \n",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Introduzca los elementos de la segunda matriz:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Introduzca el elemento de la entrada (%d,%d): \n",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("Esta es la suma de las dos matrices:\n");
	
	ImprimirM(a,b,c,m,n);
	
	return 0;	
}

int ImprimirM(int array[][3], int array2[][3], int array3[][3], int m, int n){
	int i,j;
	printf("Esta es la matriz:\n");
	for(i=0;i<m;i++){
		printf("|");
		for(j=0;j<n;j++){
			printf(" %.2d ",array[i][j]);
		}
		printf("| ");
		if(i==5){
			printf("+");
		}
		printf(" |");
		for(j=0;j<n;j++){
			printf(" %.2d ",array2[i][j]);
		}
		printf("| ");
		if(i==5){
			printf("=");
		}
		printf(" |");
		for(j=0;j<n;j++){
			printf(" %.2d ",array3[i][j]);
		}
		printf("|\n");
	}
	return 0;
}

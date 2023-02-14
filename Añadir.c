#include <stdio.h>
#include <stdlib.h>
void AggVect(int *Vector, int* num, int valor, int n);
void ElmVect(int *Vector, int *num, int n);
int main(){
	int *a,n,i,m,valor;
	int *ptrA = NULL, *num, *vector;
	printf("Introduzca el numero de elementos del arreglo: ");
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	ptrA=a;
	num=&n;
	for(i=0;i<n;i++){
		printf("Introduzca el valor de la posicion %d: ",i+1);
		scanf("%d",&m);
		*ptrA=m;
		ptrA++;
	}
	ptrA=a;
	do{
		printf("Si quiere agregar un nuevo elemento al vector introduzca 1 si no introduzca un 0: ");
		scanf("%d",&m);
		if(m==1){
			printf("Introduzca el valor que quiere agregar:");
			scanf("%d",&valor);
			AggVect(ptrA,n,valor,n);
		}
	}while(m!=0);
	ptrA=a;
	printf("%d",*num);
	return 0;
}

void AggVect(int *Vector, int *num, int valor, int n){
	int *b,i,j;
	int *ptrB=NULL;
	b=(int*)malloc(n*sizeof(int));
	ptrB=b;
	for(i=0;i<n;i++){
		*ptrB=*Vector;
		ptrB++;
		Vector++;
	}
	ptrB=b;
	free(Vector);
	n++;
	*num=n;
	Vector=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		if(i==(n-1)){
			*Vector=valor;
		}else{
			*Vector=*ptrB;
			ptrB++;
			Vector++;
		}
	}
	free(ptrB);
}

void ElmVect(int *Vector, int *num, int n){
	int *b,i,j;
	int *ptrB=NULL;
	b=(int*)malloc(n*sizeof(int));
	ptrB=b;
	for(i=0;i<n;i++){
		*ptrB=*Vector;
		ptrB++;
		Vector++;
	}
	ptrB=b;
	free(Vector);
	n--;
	*num=n;
	Vector=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
			*Vector=*ptrB;
			ptrB++;
			Vector++;
	}
	free(ptrB);
}

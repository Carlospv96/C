#include <stdio.h>
int cuboPorValor(int n);
void cuboPorReferencia(int *ptrN);
int main(){
	int n=5;
	printf("El valor de n antes de ejecutar la funcion: %d\n",n);
	n=cuboPorValor(n);
	
	printf("El valor de n despues de ejecutar la funcion por valor: %d\n",n);
	cuboPorReferencia(&n);
	
	printf("El valor de n despues de ejecutar la funcion por Referencia: %d\n",n);
	return 0;
}

int cuboPorValor(int n){
	n = n*n*n;
	return n;
}

void cuboPorReferencia(int *ptrN){
	*ptrN = *ptrN * *ptrN * *ptrN;
}

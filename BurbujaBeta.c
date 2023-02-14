#include <stdio.h>
int main(){
	int a,i,j,n;
	int cadena[100];
	printf("Introduzca el numero de elementos de la cadena:\n");
	scanf("%d",&n);
	//Se introducen los valores de cada entrada
	for(i=0;i<=n-1;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&cadena[i]);
	}
	//Se comparan los valores y se re acomodan de mayor a menor
	for(i=n-1;0<i;i--){
		for(j=0;j<i;j++){
			if(cadena[j]>cadena[j+1]){
				a=cadena[j];
				cadena[j]=cadena[j+1];
				cadena[j+1]=a;
				
			}
		}
	}
	//Se imprime la nueva cadena en orden
	printf("Esta es el orden del arreglo de mayor a menor:\n ");
	for(i=0;i<=n-1;i++){
		printf("%d\t",cadena[i]);
	}
	
	return 0;
}

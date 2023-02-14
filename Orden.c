#include <stdio.h>
int main(){
	int a,i,j,n;
	int cadena[100];
	printf("Introduzca el numero de elementos de la cadena:\n");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&cadena[i]);
	}
	for(i=0;i<=n-2;i++){
		for(j=i+1;j<=n-1;j++){
			if(cadena[j]>cadena[i]){
				a=cadena[i];
				cadena[i]=cadena[j];
				cadena[j]=a;
			}
		}
	}
	
	printf("Esta es el orden del arreglo de mayor a menor:\n ");
	for(i=0;i<=n-1;i++){
		printf("%d\t",cadena[i]);
	}
	
	return 0;
}

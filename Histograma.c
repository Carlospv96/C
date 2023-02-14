#include <stdio.h>
void main(){
	int n,i;
	printf("Introduzca el numero de elementos del arreglo: \n");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&a[i]);
	}
	Histo(a,n);
}


void Histo(int array[],int n){
	int i,j,max,k;
	max=array[0];
	for(i=1;i<n;i++){
		if(max<array[i]){
			max=array[i];
		}
	}

	k=max;
	printf("\n");
	for(i=0;i<=max;i++){
		for(j=0;j<n;j++){
			if(k<array[j]){
				printf("#\t");
			}else{
				printf(" \t");
			}
		}
	printf("\n");
	k--;
	}
	
	for(i=0;i<n;i++){
		printf("%.2d\t",array[i]);
	}
}

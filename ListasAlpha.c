#include <stdio.h>
int main(){
	int a,i,j,n,m,k,q,l,p;
	int cadena[100],aux[100],cadena2[100],aux2[100],inter[100],list1[100],list2[100],cadena3[100];
	printf("Introduzca el numero de elementos de la primer cadena:\n");
	scanf("%d",&n);
	//Se introducen los valores de cada entrada de la primer lista
	for(i=0;i<=n-1;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&cadena[i]);
	}
	//Eliminamos los elementos repetidos
	k=1;
	aux[0]=cadena[0];
	for(i=1;i<n;i++){
		q=1;
		a=cadena[i];
		for(j=0;j<k;j++){
			if(cadena[i]==aux[j]){
				q++;
			}
		}
		if(q==1){
			aux[k]=a;
			k++;
		}
	}
	printf("El conjunto es: \n");
	printf("[%d,\t",aux[0]);
	for(i=1;i<k-1;i++){
		printf("%d,\t",aux[i]);
	}
	printf("%d]\n",aux[k-1]);
	
	//Introducimos lo elementos de la segunda lista
	printf("Introduzca el numero de elementos de la segunda cadena:\n");
	scanf("%d",&m);
	//Se introducen los valores de cada entrada
	for(i=0;i<=m-1;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&cadena2[i]);
	}	
	//Eliminamos los repetidos
	l=1;
	aux2[0]=cadena2[0];
	for(i=1;i<m;i++){
		p=1;
		a=cadena2[i];
		for(j=0;j<l;j++){
			if(cadena2[i]==aux2[j]){
				p++;
			}
		}
		if(p==1){
			aux2[l]=a;
			l++;
		}
	}
	printf("El conjunto es: \n");
	printf("[%d,\t",aux2[0]);
	for(i=1;i<l-1;i++){
		printf("%d,\t",aux2[i]);
	}
	printf("%d]\n",aux2[l-1]);
	
	//Aqui sacamos los elementos que estan en ambas listas
	n=0;
	for(i=0;i<k;i++){
		q=0;
		a=aux[i];
		for(j=0;j<l & q==0;j++){
			if(aux[i]==aux2[j]){
				q++;
			}
		}
		if(q>0){
			inter[n]=a;
			n++;
		}
	}
	printf("Estos son los elementos que estan en ambas listas:\n ");
	printf("[%d,\t",inter[0]);
	for(i=1;i<n-1;i++){
		printf("%d,\t",inter[i]);
	}
	printf("%d]\n",inter[n-1]);
	
	//Algoritmo para saber que elementos de la lista 1 no estan en la lista 2
	p=0;
	for(i=0;i<k;i++){
		a=aux[i];
		q=0;
		for(j=0;j<n;j++){
			if(aux[i]!=inter[j]){ //Aqui esta la fallaaaaaa
			q++;
			}
		}
		if(q==n){
			list1[p]=a;
			p++;
		}
	}
	printf("Estos son los elementos que que estan en la lista 1 y no estan en la lista 2:\n");
	printf("[%d,\t",list1[0]);
	for(i=1;i<p-1;i++){
		printf("%d,\t",list1[i]);
	}
	printf("%d]\n",list1[p-1]);
		
	p=0;
	for(i=0;i<l;i++){
		a=aux2[i];
		q=0;
		for(j=0;j<n;j++){
			if(aux2[i]!=inter[j]){
			q++;
			}
		}
		if(q==n){
			list2[p]=a;
			p++;
		}
	}
	printf("Estos son los elementos que estan en la lista 2 pero no estan en la lista 1: \n");
	printf("[%d,\t",list2[0]);
	for(i=1;i<p-1;i++){
		printf("%d,\t",list2[i]);
	}
	printf("%d]\n",list2[p-1]);
	
//Unir list1, list2, inter
	return 0;
}

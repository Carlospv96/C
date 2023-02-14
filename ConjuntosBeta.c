#include <stdio.h>
int main(){
	int a,i,j,n,m,k,q,l,p;
	printf("Introduzca el numero de elementos de la primer cadena:\n");
	scanf("%d",&n);
	int cadena[n],aux[n],list1[n];
	//Se introducen los valores de cada entrada de la primer lista
	for(i=0;i<n;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&cadena[i]);
	}
	//Eliminamos los elementos repetidos
	if(n==1){
		k=1;
		aux[0]=cadena[0];
		printf("El conjunto es:\n");
		printf("[%d]\n",cadena[0]);
	}else{		
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
	if(k==1){
		printf("El conjunto es:\n");
		printf("[%d]\n",aux[0]);
	}else{
		if(k==2){
			printf("El conjunto es:\n");
			printf("[%d, %d]\n",aux[0],aux[1]);
		}else{
			printf("El conjunto es: \n");
			printf("[%d, ",aux[0]);
			for(i=1;i<k-1;i++){
				printf("%d, ",aux[i]);
			}
			printf("%d]\n",aux[k-1]);
		}
	}
	}
	
	//Introducimos lo elementos de la segunda lista
	printf("Introduzca el numero de elementos de la segunda cadena:\n");
	scanf("%d",&m);
	int cadena2[m],aux2[m],list2[m],inter[m+n],uni[m+n];
	//Se introducen los valores de cada entrada
	for(i=0;i<=m-1;i++){
		printf("Introduzca el elemento de la entrada %d:\n",i+1);
		scanf("%d",&cadena2[i]);
	}	
	//Eliminamos los repetidos
	if(m==1){
		l=1;
		aux2[0]=cadena2[0];
		printf("El conjunto es:\n");
		printf("[%d]\n",cadena2[0]);
	}else{		
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
	if(l==1){
		printf("El conjunto es:\n");
		printf("[%d]\n",aux2[0]);
	}else{
		if(l==2){
			printf("El conjunto es:\n");
			printf("[%d, %d]\n",aux2[0],aux2[1]);
		}else{
			printf("El conjunto es: \n");
			printf("[%d, ",aux2[0]);
			for(i=1;i<l-1;i++){
				printf("%d, ",aux2[i]);
			}
			printf("%d]\n",aux2[l-1]);
		}
	}
	}
	
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
	if(n==0){
		printf("No hay elementos en comun en los conjuntos\n");
	}else{
		if(n==1){
			printf("Este es el elemento que esta en ambos conjuntos:\n");
			printf("[%d]\n",inter[0]);
		}else{
			if(n==2){
				printf("Este es el elemento que esta en ambos conjuntos:\n");
				printf("[%d, %d]\n",inter[0],inter[1]);
			}else{
				printf("Estos son los elementos que estan en ambas listas:\n ");
				printf("[%d, ",inter[0]);
				for(i=1;i<n-1;i++){
					printf("%d, ",inter[i]);
				}
				printf("%d]\n",inter[n-1]);
			}
		}
	}

	
	//Algoritmo para saber que elementos de la lista 1 no estan en la lista 2
	p=0;
	for(i=0;i<k;i++){
		a=aux[i];
		q=0;
		for(j=0;j<n;j++){
			if(aux[i]!=inter[j]){ //Aqui esta la fallaaaaaa(fixed)
			q++;
			}
		}
		if(q==n){
			list1[p]=a;
			p++;
		}
	}
	
	k=p;
	for(i=0;i<p;i++){
		uni[i]=list1[i];
	}
	
	if(p<3){
		if(p==0){
			printf("Todos lo elementos de la lista 1 estan en la lista 2\n");
	}else{
		if(p==1){
			printf("Estos son los elementos que estan en la lista 1 y no estan en la lista 2:\n");
			printf("[%d]\n",list1[0]);
		}else{
			printf("Estos son los elementos que estan en la lista 1 y no estan en la lista 2:\n");
			printf("[%d, %d]\n",list1[0],list1[1]);			
		}
	}
	}else{
		printf("Estos son los elementos que que estan en la lista 1 y no estan en la lista 2:\n");
		printf("[%d, ",list1[0]);
	for(i=1;i<p-1;i++){
		printf("%d, ",list1[i]);
	}
		printf("%d]\n",list1[p-1]);
	}
		
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
	
	if(p<3){
		if(p==0){
			printf("Todos los elementos de lista 2 estan en la lista 1\n");
		}else{
				if(p==1){
			printf("Estos son los elementos que estan en la lista 2 pero no estan en la lista 1:\n");
			printf("[%d]\n",list2[0]);
		}else{
			printf("Estos son los elementos que estan en la lista 2 pero no estan en la lista 1:\n");
			printf("[%d, %d]\n",list2[0],list2[1]);
		}
	}
	}else{
		printf("Estos son los elementos que estan en la lista 2 pero no estan en la lista 1: \n");
		printf("[%d, ",list2[0]);
		for(i=1;i<p-1;i++){
			printf("%d, ",list2[i]);
		}
	printf("%d]\n",list2[p-1]);	
	}
	
	for(i=0;i<p;i++){
		uni[i+k]=list2[i];
	}
	p=p+k;
	for(i=0;i<n;i++){
		uni[i+p]=inter[i];
	}
	p=p+n;
	if(p<3){
		if(p==0){
			printf("Los conjuntos son vacios\n");
		}else{
			if(p==1){
				printf("Esta es la union de los dos conjuntos:\n");
				printf("[%d]\n",uni[0]);
			}else{
				printf("Esta es la union de los dos conjuntos:\n");
				printf("[%d, %d]\n",uni[0],uni[1]);
			}
		}
	}else{
		printf("Esta es la union de los dos conjuntos:\n");
		printf("[%d, ",uni[0]);
		for(i=1;i<p-1;i++){
			printf("%d, ",uni[i]);
		}
		printf("%d]\n",uni[p-1]);
	}
	
//Unir list1, list2, inter

	return 0;
}

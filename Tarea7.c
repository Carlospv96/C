#include <stdio.h>
float Promedio(int array[], int m);
float Suma(int array[], int m);
int Moda(int array[], int m);
float Mediana(int array[], int m);
int main(){
	int n,i,j,aux;
	printf("Introduzca el numero de elementos del arreglo:\n");
	scanf("%d",&n);
	int a[n]; 
	for(i=0;i<n;i++){
		printf("Introduzca el elemento de la posicion %d:\n",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++){
		for(j=i+1;j<=n-1;j++){
			if(a[j]<a[i]){
				aux=a[i];
				a[i]=a[j];
				a[j]=aux;
			}
		}
	}
	printf("Este es el conjunto:\n");
	ImprimirArreglo(a,n);
	printf("Esta es la moda: %d%s\n",Moda(a,n)); //Si Moda es igual a 0 entonces el conjunto no tiene moda o bien 0 es la moda
	printf("Esta es la mediana: %f\n",Mediana(a,n));
	printf("Esta es la sumatoria: %f\n",Suma(a,n));
	printf("Este es el promedio: %f\n",Promedio(a,n));
	return 0;
}

int Moda(int array[], int m){
	int i,j,a,moda=0,p,q=0;
	for(i=0;i<m-1;i++){
		a=array[i];
		p=0;
		for(j=i+1;j<m;j++){
			if(a==array[j]){
				p++;
			}
		}
		if(p>q){
			moda=a;
			q=p;
		}
	}
	return moda;
}

float Mediana(int array[], int m){
	float mediana;
	if(m%2==0){
		mediana=array[m/2]+array[(m/2)-1];
		mediana=(float)(mediana/2);
	}else{
		mediana=array[(m/2)];
	}
	return mediana;
}

float Suma(int array[], int m){
	int i;
	float suma=0;
	for(i=0;i<m;i++){
		suma=suma+array[i];
	}
	return suma;
}

float Promedio(int array[], int m){
	float prom;
	prom=(float)(Suma(array,m)/m);
	return prom;
}

void ImprimirArreglo(int array[], int m){
	int j;
	printf("[%d, ",array[0]);
	for(j=1;j<m-1;j++){
		printf("%d, ", array[j]);
	}
	printf("%d]\n",array[m-1]);
}

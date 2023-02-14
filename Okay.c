#include <stdio.h>
void sumaUno(int *n);
int main(){
	int n=10;
	printf("%d\n",n);
	sumaUno(&n);
	printf("%d",n);	
	return 0;
}

void sumaUno(int *n){
	*n=*n+1;
}


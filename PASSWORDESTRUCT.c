#include <stdio.h>
typedef struct{
	int leng;
	char passw[20];
	int furt;
}password;
void generarPass(int n, int leng1);
void main(){
	int leng1,n;
	printf("Introduzca la longitud de los Passwords: ");
	scanf("%d",&leng1);
	printf("Introduzca el numero de Passwords que quiere generar: ");
	scanf("%d",&n);
	generarPass(n,leng1);
}
void generarPass(int n, int leng1){
	int j;
	password cad[n];
	char PASS[leng1];
	int aux,num,i;
	srand(time(NULL));
	for(j=0;j<n;j++){
		cad[j].leng=leng1;
	for(i=0;i<leng1;i++){
		num=rand()%3;
		if(num==0){
			aux=48+rand()%10;
			cad[j].passw[i]=aux;
		}
		if(num==1){
			aux=97+rand()%26;
			cad[j].passw[i]=aux; 
		}
		if(num==2){
			aux=65+rand()%26;
			cad[j].passw[i]=aux;
		}
		cad[j].furt=Fuerte(cad[j].passw,cad[j].leng);
	}
	}
}

int Fuerte(char[] pass, int leng){
	int may=0,num=0,min=0,i,f;
	for(i=0;i<leng;i++){
		if(65<=pass[i]<=90){
			may++;
		}
		if(48<=pass[i]<=57){
			num++;
		}
		if(97<=pass[i]<=122){
			min++;
		}
	}
	if(3<=may && 5<=num && 2<=min){
		f=1;
	}
	return f;
}

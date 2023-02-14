//Carlos Enrique Ponce Villagran
#include <stdio.h>
#include <string.h>
char LeerFrase(char array[]);
char Minusculas(char array[],int n);
char Blancos(char array[], int n);
char Orden(char array[], int n);
void main(){
	int j;
	char a[100];
	LeerFrase(a);
	j=strlen(a);
	Minusculas(a,j);
	Blancos(a,j);
	j=strlen(a);
	Orden(a,j);
}

char LeerFrase(char array[]){
	printf("Introduzca una palabra o frase y al final escriba un punto: \n"); //El arreglo lee toda la cadena hasta que encuentre un punto
 	scanf("%[^.]",array);
}

char Minusculas(char array[],int n){
	int i;
	for(i=0;i<n;i++){
	if(array[i]>='A' && array[i]<='Z'){
		array[i] += 32;              //Se usa el posicionamiento de los caracteres tipo Ascii para cambiar las minusculas
	}
}
}

char Blancos(char array[], int n){
	int i=0,j;
	while(array[i]!='\0'){ //Este proceso se ejecutara hasta que se encuentre el ultimo elemento de la cadena que es \0
		if(array[i]==' '){
		for(j=i;j<n;j++){
				array[j]=array[j+1]; //Si se encuentra un espacio en blanco se recorren todos los elementos una posicion
			}
		}
		i++;
	}
}

char Orden(char array[], int n){
	int i,j;
	char aux;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(array[i]>array[j]){ //Proceso de seleccion, si la posicion es menor es porque el orden alfabetico se tiene que cambiar
			aux=array[i];
			array[i]=array[j];
			array[j]=aux;
			}
		}
	}
	printf("%s\n",array);
}



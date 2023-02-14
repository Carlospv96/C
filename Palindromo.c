#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k=0;
	char palabra[100],palindromo[100];
	char a;
	printf("Introduzca la frase de la que quiere saber si es palindromo e introduzca un punto al final: \n");
	scanf("%99[^.]",palabra);
	j=strlen(palabra);
	for(i=0;palabra[i]!='\0';i++){
		a=palabra[i];
		switch(a){
			case'Á': 
					a -= 84;
					break;
			case'É':
					a -= 43;
					break;
			case'Í':
					a -= 109;
					break;
			case'Ó':
					a -= 113;
					break;
			case'Ú':
					a -= 116 ;
					break;
			case'á':
					a -= 63;
					break;
			case'é':
					a -= 29;
					break;
			case'í':
					a -= 56;
					break;
			case'ó':
					a -= 51;
					break;
			case'ú':
					a -= 46;
					break;
			default:
					a=a;
		}
		palabra[i]=a;
	}
	printf("%s %s\n",palabra,a);
	//Recorrer los espacios en blanco al final de la cadena
	while(palabra[k]!='\0'){
		if(palabra[k]==' '){
			for(i=k;i<j;i++){
				palabra[i]=palabra[i+1];
			}
			j--;
		}
		k++;
	}
	//Pasamos los caracteres que no son espacios en blanco a otra cadena
	for(i=0;palabra[i]!=' ';i++){
		palindromo[i]=palabra[i];
	}

	//Si hay letras en mayuscula las pasamos a minusculas
	for(i=0;i<=strlen(palindromo);i++){
		if(palindromo[i]>='A'&&palindromo[i]<='Z'){
				palindromo[i] += 32;
		}
	}
	
	//Verificamos si la frase es un palindromo o no	
	j=strlen(palindromo)-1;
	k=1;
	if(j%2==0){
		
		for(i=0;i<j & k==1;i++,j--){
				if(palindromo[i]==palindromo[j]){
					k=1;
					}else{
					k=0;
				}
		}
		
   }else{
    	
    	for(i=0;i<j & k==1;i++,j--){
    		if(palindromo[i]==palindromo[j]){
    			k=1;
    		}else{
				k=0;
			}
		}
			
	}
	//Si k sigue siendo igual a 1 imprimira que es un palindromo si no imprimira que no lo es
	if(k==1){
		printf("La frase es un palindromo\n");
	}else{
		printf("La frase no es un palindromo\n");
	}
	
return 0;

}

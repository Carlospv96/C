#include <stdio.h>
#include <string.h>
int main(){
	int i,j,k=0;
	char palabra[100],palindromo[100];
	char a;
	printf("Introduzca la frase de la que quiere saber si es palindromo e introduzca un punto al final: \n");
	scanf("%99[^.]",palabra);
	j=strlen(palabra);
	//Este ciclo elimina los acentos
	for(i=0;i<=j;i++){
		if(palabra[i]=='Á' || palabra[i]=='á'){
			palabra[i]='a';
		}else{
		if(palabra[i]=='É' || palabra[i]=='é'){
			palabra[i]='e';
		}else{
		if(palabra[i]='Í' || palabra[i]=='í'){
			palabra[i]=='i';
		}else{
		if(palabra[i]=='Ó' || palabra[i]=='ó'){
			palabra[i]=='o';
		}else{
		if(palabra[i]=='Ú' || palabra[i]=='ú'){
			palabra[i]='u';
		}
		}
		}
		}
		}
	}
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

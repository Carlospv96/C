#include <stdio.h>
#include <string.h>
int main(){
    int i,t;
    char frase[100];
    printf("Introduzca la palabra que quiere pasar a mayusculas: \n");
    scanf("%s",&frase);
    t=strlen(frase);
    for(i=0;i<=t;i++){
        frase[i]=toupper(frase[i]); //Funcion toupper pasa un caracter a mayuscula
    }
    printf("La palabra en mayusculas es: %s\n",frase);
    return 0;
}

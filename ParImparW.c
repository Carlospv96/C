#include <stdio.h>
int main(){
    int i=1,j=0,k=0,par=0,impar=0,ent;
    printf("¡Para salir del programa introduzca el numero 0!\n");
    while(i!=0){
        printf("Introduzca un entero: ");
        scanf("%d",&ent);
        if(ent==0){
            break;
        }else{
            if((ent%2)==0){
                printf("El numero %d es par\n",ent);
                par++;
                k++;
            }else{
                printf("El numero %d es impar\n",ent);
                impar++;
                k++;
            }
        }
    }
    printf("La cantidad de elementos que se evaluaron fueron: %d\n",k);
    printf("La cantidad de numeros pares que se evaluaron fueron: %d\n",par);
    printf("La cantidad de numeros impares que se evaluaron fueron: %d\n",impar);
        return 0;
}

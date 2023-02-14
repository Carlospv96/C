#include <stdio.h>
int main(){
    int i=0,j=0;
    printf("Numero\t");
    printf("Cuadrad\t");
    printf("Cubo\n");
    while(i<=10){
        while(j<1){
            printf("%d\t",i);
            printf("%d\t",i*i);
            printf("%d\n",i*i*i);
            j++;
        }//Fin while j
    i++;
    j=0;
    }//Fin while i
    return 0;

}

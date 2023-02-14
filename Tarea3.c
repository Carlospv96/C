#include <stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Introduzca el primer elemento:\n");
    scanf("%d",&a);
    printf("Introduzca el segundo elemento:\n");
    scanf("%d",&b);
    printf("Introduzca el tercer elemento:\n");
    scanf("%d",&c);
    printf("Introduzca el cuarto elemento:\n");
    scanf("%d",&d);
    printf("Introduzca el quinto elemento:\n");
    scanf("%d",&e);
    printf("La suma es: %d\n",a+b+c+d+e);
    printf("El promedio es: %f\n",((float)(a+b+c+d+e))/5);
    printf("Su producto es: %d\n",a*b*c*d*e);
    if(a>=b & a>=c & a>=d & a>=e){
        printf("Este es el mayor: %d\n",a);
    }else{ if(a<=b & a<=c & a<=d & a<=e)
        printf("Este es el menor: %d\n",a);
    }
    if(b>=a & b>=c & b>=d & b>=e){
        printf("Este es el mayor: %d\n",b);
    }else{ if(b<=a & b<=c & b<=d & b<=e)
        printf("Este es el menor: %d\n",b);
    }
    if(c>=a & c>=b & c>=d & c>=e){
        printf("Este es el mayor: %d\n",c);
    }else{ if(c>=a & c>=b & c>=d & c>=e)
        printf("Este es el menor: %d\n",c);
    }
    if(d>=a & d>=b & d>=c & d>=e){
        printf("Este es el mayor: %d\n",d);
    }else{ if(d<=a & d<=b & d<=c & d<=e)
        printf("Este es el menor: %d\n",d);
    }
    if(e>=a & e>=b & e>=c & e>=d){
        printf("Este es el mayor: %d\n",e);
    }else{ if(e<=a & e<=b & e<=c & e<=d)
        printf("Este es el menor: %d\n",e);
    }
    return 0;
}

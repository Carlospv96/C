#include <stdio.h>
struct pntx{
	int x;
};
struct coord{
	struct pntx x;
	int y;
};
void main(){
	struct coord pnt[10];
	int i,n=1,m=1;
	for(i=0;i<10;i++){
		printf("Para el punto no. %d\n",i+1);
		printf("Introduzca el valor de x:");
		scanf("%d",&pnt[i].x.x);
		printf("Introduzca el valor de y:");
		scanf("%d",&pnt[i].y);
	}
	
	for(i=1;i<10;i++){
		if(pnt[0].x.x==pnt[i].x.x){
			n++;
		}
		if(pnt[0].y==pnt[i].y){
			m++;
		}
	}
	if(n==10 || m==10){
		printf("Los puntos estan alineados");
	}else{
		printf("Los puntos no estan alineados");
	}
}

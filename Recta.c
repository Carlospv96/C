#include <stdio.h>
#include <math.h>
float pendiente(float x1, float x2, float y1, float y2);
float distancia(float x1, float x2, float y1, float y2);
float ordenadasegmento(float a, float b, float m, float x);
float puntomedio(float x, float a);
float interseccion(float y0, float y1, float m1, float m2, float x0, float x1);
struct pntx{
	float x;
};
struct coord{
	struct pntx x;
	float y;
};

void main(){
	struct coord pnt[4];
	int i;
	float m1,m2,a,b;
	for(i=0;i<2;i++){
		printf("Para el punto no. %d\n",i+1);
		printf("Introduzca el valor de x:");
		scanf("%f",&pnt[i].x.x);
		printf("Introduzca el valor de y:");
		scanf("%f",&pnt[i].y);
	}
	printf("La pendiente de la recta que pasa por los puntos (%.3f,%.3f) y (%.3f,%.3f) es : %f\n",pnt[0].x.x,pnt[0].y,pnt[1].x.x,pnt[1].y,pendiente(pnt[0].x.x,pnt[1].x.x,pnt[0].y,pnt[1].y));
	printf("La distancia entre los puntos (%.3f,%.3f) y (%.3f,%.3f) es : %f\n",pnt[0].x.x,pnt[0].y,pnt[1].x.x,pnt[1].y,distancia(pnt[0].x.x,pnt[1].x.x,pnt[0].y,pnt[1].y));
	printf("Para el segundo segmento:\n");
	for(i=2;i<4;i++){
		printf("Para el punto no. %d\n",i+1);
		printf("Introduzca el valor de x:");
		scanf("%f",&pnt[i].x.x);
		printf("Introduzca el valor de y:");
		scanf("%f",&pnt[i].y);
	}	
	printf("La pendiente de la recta que pasa por los puntos (%d,%d) y (%d,%d) es : %f\n",pnt[2].x.x,pnt[2].y,pnt[3].x.x,pnt[3].y,pendiente(pnt[2].x.x,pnt[3].x.x,pnt[2].y,pnt[3].y));
	printf("La distancia entre los puntos (%d,%d) y (%d,%d) es : %f\n",pnt[2].x.x,pnt[2].y,pnt[3].x.x,pnt[3].y,distancia(pnt[2].x.x,pnt[3].x.x,pnt[2].y,pnt[3].y));
	
	m1=pendiente(pnt[0].x.x,pnt[1].x.x,pnt[0].y,pnt[1].y);
	m2=pendiente(pnt[2].x.x,pnt[3].x.x,pnt[2].y,pnt[3].y);
	
	if(m1==m2){
		if(ordenadasegmento(pnt[0].x.x,pnt[0].y,m1,puntomedio(pnt[0].x.x,pnt[1].x.x))==ordenadasegmento(pnt[2].x.x,pnt[2].y,m2,puntomedio(pnt[2].x.x,pnt[3].x.x))){
			printf("SON EL MISMO SEGMENTO.");
		}else{
			printf("NO SE INTERSECTAN EN NINGUN PUNTO.");
		}
	}else{
		a=interseccion(pnt[0].y,pnt[2].y,m1,m2,pnt[0].x.x,pnt[2].x.x);
		b=ordenadasegmento(pnt[0].x.x,pnt[0].y,m1,a);
		
		if(distancia(pnt[0].x.x,pnt[1].x.x,pnt[0].y,pnt[1].y)>distancia(pnt[0].x.x,a,pnt[0].y,b) && distancia(pnt[0].x.x,pnt[1].x.x,pnt[0].y,pnt[1].y)>distancia(a,pnt[1].x.x,b,pnt[1].y)){
			printf("Los segmentos se intersectan en (%.3f,%.3f)",a,b);
		}else{
			printf("Los segmentos no se intersectan");
		}
	}
}
	
float pendiente(float x1, float x2, float y1, float y2){
	float m;
	m=y2-y1;
	m=m/(x2-x1);
	return m;
}

float distancia(float x1, float x2, float y1, float y2){
	float d;
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return d;
}

float ordenadasegmento(float a, float b, float m, float x){
	float y;
	y=m*(x-a)+b;
	return y;
}

float puntomedio(float x, float a){
	float n;
	if(a<x){
		n=(x-a)/2;
	}else{
		n=(a-x)/2;
	}
	return n;
}

float interseccion(float y0, float y1, float m1, float m2, float x0, float x1){
float x;
x=(y0-y1+m2*x1-m1*x0)/(m2-m1);
}

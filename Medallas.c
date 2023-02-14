#include <stdio.h>
struct per{
	char nombre[25];
	char pais[25];
};
struct atleta{
	struct per persona;
	char deporte[20];
	int nMedallas;
};
void main(){
	struct atleta atletas[3];
	int i,posmay,nMed;
	for(i=0;i<3;i++){
		printf("Introduzca los datos del atleta no. %d\n",i+1),
		printf("Introduzca el nombre del atleta:");
		scanf("%s",&atletas[i].persona.nombre);
		printf("Introduzca el pais del atleta: ");
		scanf("%s",&atletas[i].persona.pais);
		printf("Introduzca el deporte que practica el atleta:");
		scanf("%s",&atletas[i].deporte);
		printf("Introduzca el numero de medallas que tiene el atleta:");
		scanf("%d",&atletas[i].nMedallas);
	}
	posmay=0;
	nMed=atletas[0].nMedallas;
	for(i=1;i<3;i++){
		if(nMed<atletas[i].nMedallas){
			nMed=atletas[i].nMedallas;
			posmay=i;
		}
	}
	printf("El atletas con mas medallas es %s de %s que practica %s con el total de %d medallas\n",atletas[posmay].persona.nombre,atletas[posmay].persona.pais,atletas[posmay].deporte,atletas[posmay].nMedallas);
}


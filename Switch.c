#include <stdio.h>
int main(){
	int numdia;
	printf("Introduzca un numero de dia de la semana: ");
	scanf("%d", &numdia);
	switch(numdia){
		case 1:
			printf("Lunes\n");
			break;
		case 2: 
			printf("Martes\n");
			break;
		case 3:
			printf("Miercoles\n");
			break;
		case 4:
			printf("Jueves\n");
			break;
		case 5:
			printf("Viernes\n");
			break;
		case 6:
			printf("Sabado\n");
			break;
		case 7:
			printf("Domingo\n");
			break;
		default:
			printf("El numero no corresponde a un dia de la semana\n");
	}
	return 0;
}

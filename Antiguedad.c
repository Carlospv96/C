#include <stdio.h>
struct emp{
	char nEmpleado[4];
	char nombre[25];
	char apellido[25];
	float sueldoBase;
	int antig;
};
void main(){
	struct emp empleados[3];
	int i,posmay,mayAnt;
	for(i=0;i<3;i++){
		printf("Introduzca los datos para el empleado num. %d\n",i+1);
		printf("Numero de Empleado: ");
		scanf("%s",&empleados[i].nEmpleado);
		printf("Nombre: ");
		scanf("%s",&empleados[i].nombre);
		printf("Apellido: ");
		scanf("%s",&empleados[i].apellido);
		printf("Sueldo base: ");
		scanf("%f",&empleados[i].sueldoBase);
		printf("Antiguedad: ");
		scanf("%d",&empleados[i].antig);
	}
	mayAnt=empleados[0].antig;
	posmay=0;
	for(i=1;i<3;i++){
		if(mayAnt<empleados[i].antig){
			mayAnt=empleados[i].antig;
			posmay=i;
		}
	}
	printf("El empleado con mas antiguedad es %s %s y su antiguedad es %d",empleados[posmay].nombre,empleados[posmay].apellido,empleados[posmay].antig);
}

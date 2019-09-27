#include <stdio.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 27/09/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Inicializando el arreglo y R
	int numeroDeCoches[24]={23,43,85,36,4,5,78,51,98,49,24,19,39,56,65,73,51,92,56,32,56,72,43,15},R=2;
	
	//Reasignando el valor de la posicion R a 57 e imprimiendo
	numeroDeCoches[R]=57;
	printf("Hora: %d\t\tNumero de coches para la hora %d: %d\n",R,R,numeroDeCoches[R]);
	
	//Reasignando el valor de R a 21 y repitiendo el proceso anterior
	R=21;
	numeroDeCoches[R]=57;
	printf("Hora: %d\tNumero de coches para la hora %d: %d",R,R,numeroDeCoches[R]);
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Inicializando A y B
	int A=8,B=4;
	
	//Reasignando R al valor A/B e imprimiendo el valor asignado a la posicion R
	R=(A/B);
	printf("Hora: %d\t\tNumero de coches para la hora %d: %d",R,R,numeroDeCoches[R]);
	
	return 0;
}

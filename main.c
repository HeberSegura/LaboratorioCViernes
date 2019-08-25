#include <stdio.h>
/*
*Autor: Heber Segura Gonzalez
*Fecha: 24/08/2019
*Grupo: 001
*Horario: Viernes 7am-9am
*Matricula: 187736
*/

int main(void){

	float x; //Variable para el valor de x en la operacion (tiene que ser un float para que las operaciones funcionen)
	float op1, op2; //Variables para calcular el valor de la operacion
	printf("Introduzca un valor para x.\n");
	scanf("%f",&x);

	//Calculando ambas operaciones
	op1 = ((0.666666666)*(x-(1-((x-2))/3)))+1; 
	op2 = 2-((-2*(x+1))-((x-3))/2);

	//Escribiendo en la consola los resultados de las operaciones
	printf("\nEl valor de la operacion ((2/3)*(x-(1-((x-2))/3)))+1, donde x es igual a %.2f, es %.4f.\n\nEl valor de la operacion 2-((-2*(x+1))-((x-3))/2), donde x es igual a %.2f, es %.4f.",x,op1,x,op2);
	
	return 0;
}

#include <stdio.h>
/*
*Autor: Heber Segura Gonzalez
*Fecha: 24/08/2019
*Grupo: 001
*Horario: Viernes 7am-9am
*Matricula: 187736
*/

int main(void){
	
	//Declaracion de variables que se utilizaran en todos los problemas
	float x; //Variable para el valor de x en la operacion (tiene que ser un float para que las operaciones funcionen)
	float op1, op2, op3, op4; //Variables para calcular el valor de la operacion
	
	
	/*
	Codigo problema 1
	*/
	printf("Problema 1\nIntroduzca un valor para x.\n");
	scanf("%f",&x);

	//Calculando la operacion
	op1 = ((x-1)/4)-((x-5)/36);

	//Escribiendo en la consola el resultado de las operacion
	printf("\nEl valor de la operacion ((x-1)/4)-((x-5)/36), donde x es igual a %.2f, es %.4f.\n\n\n",x,op1);
	
	
	/*
	Codigo problema 2
	*/
	printf("Problema 2\nIntroduzca un valor para x.\n");
	scanf("%f",&x);

	//Calculando la operacion
	op2 = 6*((x+1)/8-((2*x-3)/16));

	//Escribiendo en la consola el resultado de las operacion
	printf("\nEl valor de la operacion 6*((x+1)/8-((2*x-3)/16)), donde x es igual a %.2f, es %.4f.\n\n\n",x,op2);
	
	
	/*
	Codigo problema 3
	*/
	printf("Problema 3\nIntroduzca un valor para x.\n");
	scanf("%f",&x);

	//Calculando la operacion
	op3 = ((0.666666666)*(x-(1-((x-2))/3)))+1; 

	//Escribiendo en la consola el resultado de las operacion
	printf("\nEl valor de la operacion ((0.666666666)*(x-(1-((x-2))/3)))+1, donde x es igual a %.2f, es %.4f.\n\n\n",x,op3);
	
	
	/*
	Codigo problema 4
	*/
	printf("Problema 4\nIntroduzca un valor para x.\n");
	scanf("%f",&x);

	//Calculando la operacion
	op4 = 2-((-2*(x+1))-((x-3))/2); 

	//Escribiendo en la consola el resultado de las operacion
	printf("\nEl valor de la operacion 2-((-2*(x+1))-((x-3))/2), donde x es igual a %.2f, es %.4f.",x,op4);
	
	return 0;
}	

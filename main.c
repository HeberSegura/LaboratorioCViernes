#include <stdio.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 20/09/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Declaracion de variables que se utilizaran
	int i;
	float grade,sum=0,avg;
	
	//Ciclo que se itera 10 veces para pedir todas las calificaciones
	for(i=0;i<10;i++){
		//Pididendo la calificacion y regresandolo cuando no este entre 0 y 10
		do{
			printf("Introduzca la calificacion (del 0 al 10) del examen %d: ",i+1);
			scanf("%f",&grade);
			printf("\n");
		}while(grade<0||grade>10);
		
		//Sumando cada calificacion
		sum+=grade;
	}
	
	//Calculando el promedio
	avg=(sum)/10;
	
	//Imprimiendo el promedio y si aprobaron o no
	printf("\nSu promedio es de %.2f. ",avg);
	if(avg>7){
		printf("Usted ha aprobado.");
	}else{
		printf("Usted ha reprobado.");
	}
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Declaracion de variavles (excepto i, porque ya esta declarada)
	int base,exp,res;
	
	//Pidiendo el valor de base
	printf("Introduzca el numero entero que quiere de base: ");
	scanf("%d",&base);
	printf("\n");
	
	//Pidiendo el valor de exp y revisando que sea de 1 para arriba
	do{
		printf("Introduzca el numero entero positivo que quiere de exponente: ");
		scanf("%d",&exp);
		printf("\n");
	}while(exp<1);
	
	//Dandole el valor de base a res para que pueda ser multiplicado
	res=base;
	
	//Calculando la operacion (inicializo i en 1 porque en 0 me da como si fuera exp+1 el exponente
	for(i=1;i<exp;i++){
		//Imprimiendo la multiplicacion
		printf("%d*",base);
		
		//Multiplicando res "exp" veces
		res*=base;
	}
	
	//Imprimiendo el resultado (se incluye el base aqui para que se imprima el ultimo numero en la multiplicacion)
	printf("%d = %d",base,res);
	
	return 0;
}

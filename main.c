#include <stdio.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 13/09/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Declarando variables que seran usadas
	int num,sum,flag;
	char op;
	
	//Inicializando flag en 0 para que el ciclo funcione, y sum en 0 para que se le pueda sumar libremente.
	flag = 0;
	sum = 0;
	
	//Mientras flag sea 0, el ciclo va a repetirse
	while(flag==0){
		
		//Se lee el número que el usuario introduce y se almacena en la variable num
		printf("\nIntroduzca un numero entero: ");
		scanf("%d",&num);
		
		//Se actualiza el valor de sum, sumandole el nuevo valor de num
		sum += num;
		
		//Preguntando al usuario si desea continuar
		printf("\nDesea introducir otro numero? (s/n): ");
		scanf(" %c",&op);
		
		//Si el usuario desea continuar, flag se mantiene en 0. Si quiere terminar, flag obtiene el valor de 1 ,terminando el ciclo.
		if(op=='n'){
			flag = 1;
		}
	}
	
	//Imprimiendo el resultado de la suma
	printf("\nLa suma de los numeros introducidos es: %d.",sum);
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Como este ejercicio es muy similar al anterior, solo se le haran unas alteraciones menores.
	
	/*
	Las variables utilizadas en esta práctica son las mismas que la práctica anterior, con excepción
	de op que ahora no es necesaria.
	*/
	
	//Inicializando flag en 0 para que el ciclo funcione, y sum en 0 para que se le pueda sumar libremente.
	flag = 0;
	sum = 0;
	
	//Mientras flag sea 0, el ciclo va a repetirse
	while(flag==0){
		
		//Se lee el numero que el usuario introduce y se almacena en la variable num
		printf("\nIntroduzca un numero entero: ");
		scanf("%d",&num);
		
		//Se actualiza el valor de sum, sumándole el nuevo valor de num
		sum += num;
		
		//Si el número que el usuario introdujo es mayor o igual a 100, el ciclo se detiene.
		if(num>=100){
			flag = 1;
		}
	}
	
	//Imprimiendo el resultado de la suma
	printf("\nLa suma de los numeros introducidos es: %d.",sum);
	
	return 0;
}

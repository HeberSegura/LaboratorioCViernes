#include <stdio.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 25/10/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

//Haciendo la funcion para checar si un entero "num" es primo
void primeCheck(int num){
	//Primero declaramos un iterador y una bandera
	int i,flag=0;
	
	/*El iterador empieza con el valor de 2, ya que todos los primos a partir del dos son impares.
	La condicion del for es i<=num/2 porque no es necesario checar todos los posibles factores de num, unicamente la mitad,
	ya que la segunda mitad de los factores corresponden a la primera*/
	for(i=2;i<=num/2;i++){
		//Si el numero es divisible entre i, se alza la bandera y se detiene el ciclo
		if(num%i==0){
			flag=1;
			break;
		}
	}
	
	//Imprimiendo los resultados
	if(flag==0){
		printf("%d es un numero primo.",num);
	}else{
		//Funcionalidad agregada para imprimir tambien 2 posibles factores
		printf("%d no es un numero primo. Puede ser representado como %d * %d.",num,i,num/i);
	}
}

//Haciendo la funcion de potenciacion
unsigned int pot(int num,int pow){
	//Declarando iterador y variable de resultado
	int i,res=1;
	//Multiplicando res por num "pow" veces
	for(i=0;i<pow;i++){
		res*=num;
	}
	//Regresando el resultado
	return res;
}

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Variable para almacenar el numero
	int n;
	//Asegurando que n sea entero positivo
	do{
		printf("Introduzca un numero entero positivo para verificar si es primo: ");
		scanf("%d",&n);
	}while(n<1);
	printf("\n");
	//Si n es 1 dando respuesta inmediata, de lo contrario llamando a la funcion primeCheck
	if(n==1){
		printf("1 no es ni primo ni compuesto.");
	}else{
		primeCheck(n);
	}
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Variable para almacenar base y exponente
	int base,exp;
	//Asegurando que base sea entera positiva
	do{
		printf("Introduzca un numero entero positivo para usar como base: ");
		scanf("%d",&base);
	}while(base<1);
	//Asegurando que exponente sea entero positivo
	do{
		printf("Introduzca un numero entero positivo para usar como exponente: ");
		scanf("%d",&exp);
	}while(exp<1);
	
	//Imprimiendo el resultado llamando a la funcion pot
	printf("\n%d elevado a la %d es %lu.",base,exp,pot(base,exp));
	
	return 0;
}

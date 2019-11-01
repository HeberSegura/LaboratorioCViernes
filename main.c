#include <stdio.h>
#include <string.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 1/11/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Decalrando cadena y obteniendo un valor
	char str[50];
	printf("Introduzca una cadena de caracteres: ");
	gets(str);
	
	//Declarando puntero e inicializando en inicio de str
	char *c = &str;
	
	//Declarando iterador y contador de vocales
	int i=0,vowCount=0;
	
	//Ciclo para contar las vocales
	for(i=0;i<strlen(str);i++){
		//El switch checa la posicion de memoria c+i y convierte el caracter en esa posicion a minuscula. Si es vocal, suma 1 a vowCount
		switch(tolower(*(c+i))){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowCount++;
				break;
			default:
				break;
		}	
	}
	
	//Imprimiendo el resultado
	printf("\nHay %d vocales en \"%s\".",vowCount,str);
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	int num1,num2;
	printf("Introduzca el primer numero entero: ");
	scanf("%d",&num1);
	printf("Introduzca el segundo numero entero: ");
	scanf("%d",&num2);
	
	int *n1=&num1,*n2=&num2;
	
	printf("\n%d + %d = %d",*n1,*n2,(*n1+*n2));
	
	return 0;
}

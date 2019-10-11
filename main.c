#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 4/10/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Declarando el arreglo para la cadena y los iteradores
	char str[50];
	int i=0,j=0,flag=0;
	
	//Pidiendo la cadena al usuario
	printf("Introduzca una cadena: ");
	gets(str);
	printf("\n");
	
	//Haciendo una nueva cadena sin espacios
	char nspStr[strlen(str)];
	for(i=0;i<strlen(str);i++){
		//Verificando que el caracter no sea un espacio
		if(isspace(str[i])==0){
			nspStr[j]=tolower(str[i]);
			j++;
		}
	}
	
	//Ciclo para evaluar si la cadena sin espacios es un palindromo
	j=strlen(nspStr)-1;
	for(i=0;i<strlen(nspStr);i++){
		if(nspStr[i]!=nspStr[j]){
			flag=1;
		}
		j--;
	}
	
	//Evaluando si la bandera fue alzada e imprimiendo el mensaje correspondiente
	if(flag){
		printf("\"%s\" no es un palindromo",str);
	}else{
		printf("\"%s\" es un palindromo",str);
	}
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Inicializando el arreglo de caracteres y un arreglo para las letras en el que no se repitan (con 10 espacios por si cada letra fuera diferente una de otra)
	char letr[10]={'A','B','B','A','A','C','H','Y','H','C'},mode[10];
	
	//Inicializando una vaiable de almacenamiento temporal y un arreglo para contar letras (con 10 espacios por si cada letra fuera diferente una de otra)
	int temp=0,count[10]={0};
	
	//Imprimiendo el arreglo sin cambiar nada
	printf("Caracteres en el arreglo:\n");
	for(i=0;i<10;i++){
		printf("%c",letr[i]);
	}
	printf("\n\n");
	
	//Organizando el arreglo en orden alfabetico para que pueda ser contado facilmente
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(letr[j]>letr[i]){
				temp=letr[i];
				letr[i]=letr[j];
				letr[j]=temp;
			}
		}
	}
	
	//Armando los arreglos mode (para que solo se ponga cada letra una vez) y count (para contar el numero de veces que aparece cada letra)
	mode[0]=letr[0];
	temp=letr[0];
	j=0;
	for(i=0;i<10;i++){
		if(letr[i]!=temp){
			temp=letr[i];
			j++;
			mode[j]=letr[i];
		}
		count[j]++;
	}
	
	//Imprimiendo cuantas veces aparece cada letra
	printf("Cantidad de cada letra:\n");
	for(i=0;i<j+1;i++){
		printf("%c: %d\n",mode[i],count[i]);
	}
		
	return 0;
}

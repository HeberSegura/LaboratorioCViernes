#include <stdio.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 30/08/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Variables para los numeros
	float num1,num2;
	
	//Introduccion de valores a numeros
	printf("Introduzca dos numeros separados por una coma.\n");
	scanf("%f,%f",&num1,&num2);
	
	//Evaluacion de cual numero es mas grande
	if(num1==num2){
		printf("%f y %f son iguales.",num1,num2);
	} else if(num1>num2){
		printf("%f es mayor que %f.",num1,num2);
	} else {
		printf("%f es mayor que %f.",num2,num1);
	}
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n\n");
	
	//Declaracion e inicializacion de variables
	int a=5,b=3,c=-12;
	
	printf("a vale %d, b vale %d y c vale %d\n\n",a,b,c);
	
	//Evaluacion de cada condicion
	if(a>3){
		printf("a>3 es verdadero.\n");
	}else{
		printf("a>3 es falso.\n");
	}
	
	if(a>c){
		printf("a>c es verdadero.\n");
	}else{
		printf("a>c es falso.\n");
	}
	
	if(b!=c){
		printf("b!=c es verdadero.\n");
	}else{
		printf("b!=c es falso.\n");
	}
	
	if(a==3){
		printf("a==3 es verdadero.\n");
	}else{
		printf("a==3 es falso.\n");
	}
	
	if(a*b==15){
		printf("a*b==15 es verdadero.\n");
	}else{
		printf("a*b==15 es falso.\n");
	}
	
	if(c/b<a){
		printf("c/b<a es verdadero.\n");
	}else{
		printf("c/b<a es falso.\n");
	}
	
	if(c/b==-10){
		printf("c/b==-10 es verdadero.\n");
	}else{
		printf("c/b==-10 es falso.\n");
	}
	
	if(a+b+c==5){
		printf("a+b+c==5 es verdadero.\n");
	}else{
		printf("a+b+c==5 es falso.\n");
	}
	
	if((a+b==8)&&(a-b==2)){
		printf("(a+b==8)&&(a-b==2) es verdadero.\n");
	}else{
		printf("(a+b==8)&&(a-b==2) es falso.\n");
	}
	
	if((a+b==8)||(a-b==6)){
		printf("(a+b==8)||(a-b==6) es verdadero.\n");
	}else{
		printf("(a+b==8)||(a-b==6) es falso.\n");
	}
	
	if(a>3 && b>3 && c<3){
		printf("a>3 && b>3 && c<3 es verdadero.\n");
	}else{
		printf("a>3 && b>3 && c<3 es falso.\n");
	}
	
	/*
	************ Actividad Extra ************
	*/
	printf("\n\n***************************\nActividad Extra\n\n");
	
	//Declaracion de variables
	int a1,b1,c1;
	
	//Introduccion de valores para a1, b1 y c1
	printf("Introduzca valores enteros diferentes de 0 para a, b y c respectivamente, separados por comas.\n");
	scanf("%d,%d,%d",&a1,&b1,&c1);
	
	//Check para que ninguno valga 0 (esto lo hice porque hay una division y no queremos dividir entre 0)
	if(a1==0||b1==0||c1==0){
		printf("\nIntroduzca valores diferentes a 0 e intente de nuevo.");
		return 0;
	}
	
	printf("\na vale %d, b vale %d y c vale %d\n\n",a1,b1,c1);
	
	//Evaluacion de cada condicion
	if(a1>3){
		printf("a>3 es verdadero.\n");
	}else{
		printf("a>3 es falso.\n");
	}
	
	if(a1>c1){
		printf("a>c es verdadero.\n");
	}else{
		printf("a>c es falso.\n");
	}
	
	if(b1!=c1){
		printf("b!=c es verdadero.\n");
	}else{
		printf("b!=c es falso.\n");
	}
	
	if(a1==3){
		printf("a==3 es verdadero.\n");
	}else{
		printf("a==3 es falso.\n");
	}
	
	if(a1*b1==15){
		printf("a*b==15 es verdadero.\n");
	}else{
		printf("a*b==15 es falso.\n");
	}
	
	if(c1/b1<a1){
		printf("c/b<a es verdadero.\n");
	}else{
		printf("c/b<a es falso.\n");
	}
	
	if(c1/b1==-10){
		printf("c/b==-10 es verdadero.\n");
	}else{
		printf("c/b==-10 es falso.\n");
	}
	
	if(a1+b1+c1==5){
		printf("a+b+c==5 es verdadero.\n");
	}else{
		printf("a+b+c==5 es falso.\n");
	}
	
	if((a1+b1==8)&&(a1-b1==2)){
		printf("(a+b==8)&&(a-b==2) es verdadero.\n");
	}else{
		printf("(a+b==8)&&(a-b==2) es falso.\n");
	}
	
	if((a1+b1==8)||(a1-b1==6)){
		printf("(a+b==8)||(a-b==6) es verdadero.\n");
	}else{
		printf("(a+b==8)||(a-b==6) es falso.\n");
	}
	
	if(a1>3 && b1>3 && c1<3){
		printf("a>3 && b>3 && c<3 es verdadero.\n");
	}else{
		printf("a>3 && b>3 && c<3 es falso.\n");
	}
	
	return 0;
}

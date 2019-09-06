#include <stdio.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 6/09/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	//Declaracion de variable para almacenar calificacion
	float cal;
	
	//Pidiendo valor para cal
	printf("Introduzca su calificacion en la materia, del 0 al 10.\n");
	scanf("%f",&cal);
	
	//Evaluando cal para imprimr resultado
	if(cal<0||cal>10){
		printf("\nERROR: nota no valida");
	}else if(cal>=5){
		printf("\nAPTO");
	}else{
		printf("\nNO APTO");
	}
	
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n\n");
	
	//Declaracion de variable para almacenar numero del dia
	int day;
	
	//Pidiendo valor para day
	printf("Introduzca un numero correspondiendo a un dia de la semana.\n");
	scanf("%d",&day);
	
	//Evaluando day e imprimiendo resultado
	switch(day){
		case 1:
			printf("\nEl dia correspondiente es lunes");
			break;
		case 2:
			printf("\nEl dia correspondiente es martes");
			break;
		case 3:
			printf("\nEl dia correspondiente es miercoles");
			break;
		case 4:
			printf("\nEl dia correspondiente es jueves");
			break;
		case 5:
			printf("\nEl dia correspondiente es viernes");
			break;
		case 6:
			printf("\nEl dia correspondiente es sabado");
			break;
		case 7:
			printf("\nEl dia correspondiente es domingo");
			break;
		default:
			printf("\nERROR: numero no corresponde a ningun dia");
	}
	
	
	/*
	************ Actividad Extra ************
	*/
	printf("\n\n***************************\nActividad Extra\n\n");
	
	//Declaracion de variable para seleccion del menu
	int op;
	
	//Imprimiendo el menu de opciones
	printf("     Opciones\n1.\tVideo\n2.\tSonido\n3.\tControles\n4.\tAccesibilidad\n5.\tSalir del menu");
	
	//Pidiendo la opcion que se quiere seleccionar
	printf("\nSeleccione una opcion del menu, escribiendo su numero correspondiente.\n");
	scanf("%d",&op);
	
	//Evaluando op e imprimiendo la opcion seleccionada
	switch(op){
		case 1:
			printf("\nUsted escogio la opcion Video");
			break;
		case 2:
			printf("\nUsted escogio la opcion Sonido");
			break;
		case 3:
			printf("\nUsted escogio la opcion Controles");
			break;
		case 4:
			printf("\nUsted escogio la opcion Accesibilidad");
			break;
		case 5:
			printf("\nUsted escogio la opcion Salir del menu");
			break;
		default:
			printf("\nERROR: opcion no valida");
			break;
	}
	
	return 0;
}

#include <stdio.h>

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
	
	//Declarando iteradores y el arreglo
	int i,j,k,vEOE[6][10][2];
	
	//Dando valores aleatorios a vEOE
	for(i=0;i<6;i++){
		for(j=0;j<10;j++){
			for(k=0;k<2;k++){
				vEOE[i][j][k] = rand();
			}
		}
	}
	
	//Reasignando el valor al elemento indicado e imprimiendo su nuevo valor
	vEOE[3][7][1] = 4234;
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 1 ha vendido %d unidades.",vEOE[3][7][1]);
	
	/*
	Preguntas
	a)El arreglo tridimensional contiene 6*10*2 elementos, o sea 120 elementos.
	b)Se imprime en la consola un valor nulo.
	*/
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Aumentando los valores anteriores más 10
	for(i=0;i<6;i++){
		for(j=0;j<10;j++){
			for(k=0;k<2;k++){
				vEOE[i][j][k] += 10;
			}
		}
	}
	
	//Imprimiendo el mismo mensaje que la actividad anterior
	printf("El empleado numero 3 de la oficina numero 7 del edificio numero 1 ha vendido %d unidades.",vEOE[3][7][1]);
		
	return 0;
}

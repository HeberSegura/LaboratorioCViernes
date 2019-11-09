#include <stdio.h>
#define SIZE_NAME 50
#define SIZE 4

/*
*Autor: Heber Segura Gonzalez
*Fecha: 9/11/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n\n");
	
	//Declarando la tabla de estructuras y un iterador
	struct picture_info{
		char name[SIZE_NAME];
		int date_time;
	}pictures[SIZE];
	int i;
	
	//Asignando valores de prueba a la tabla 
	for(i=0;i<SIZE;i++){
		snprintf(pictures[i].name,SIZE_NAME,"Nombre %d",i);
		pictures[i].date_time = i;
	}
	
	//Imprimiendo dichos valores de prueba
	for(i=0;i<SIZE;i++){
		printf("Struct %d:\nName: %s\tTime: %d\n",i,pictures[i].name,pictures[i].date_time);
	}
	
	//Declarando arreglos de punteros que seran usados para apuntar a los valores de la tabla
	char * pName[SIZE];
	int * pTime[SIZE];
	
	//Asignando valores a los punteros
	for(i=0;i<SIZE;i++){
		pName[i] = &pictures[i].name[0];
		pTime[i] = &pictures[i].date_time;
	}
	
	//Imprimiendo los valores apuntados por los punteros
	printf("\n");
	for(i=0;i<SIZE;i++){
		printf("POINTERS TO Struct %d:\nName: %s\tTime: %d\n",i,pName[i],*pTime[i]);
	}
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Declarando la tabla
	struct coordinates{
		int latitude;
		int longitude;
	}places[SIZE];
	
	//Asignando los valores de cada elemento
	places[0].latitude = 200;
	places[0].longitude = 300;
	places[1].latitude = 400;
	places[1].longitude = 100;
	places[2].latitude = 100;
	places[2].longitude = 400;
	places[3].latitude = 300;
	places[3].longitude = 200;
	
	//Imprimiendo la tabla como es
	printf("\n------TABLA SIN ORDENAR------\n");
	for(i=0;i<SIZE;i++){
		printf("Lugar %d:\nLatitud: %d\tLongitud: %d\n",i,places[i].latitude,places[i].longitude);
	}
	
	//Inicializando arreglos de punteros con los lugares de los valores anteriores
	int * pntLat[SIZE] = {&places[0].latitude,&places[1].latitude,&places[2].latitude,&places[3].latitude};
	int * pntLng[SIZE] = {&places[0].longitude,&places[1].longitude,&places[2].longitude,&places[3].longitude};
	
	//Declarando otro iterador y un puntero de almacenaje
	int j;
	int * temp;
	
	//Ordenando los punteros de acuerdo con mayor valor apuntado por latitud
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			if(*pntLat[j]>*pntLat[i]){
				temp=pntLat[i];
				pntLat[i]=pntLat[j];
				pntLat[j]=temp;
				temp=pntLng[i];
				pntLng[i]=pntLng[j];
				pntLng[j]=temp;
			}
		}
	}
	
	//Imprimiendo la tabla ordenada por latitud
	printf("\n--TABLA ORDENADA POR LATITUD--\n");
	for(i=0;i<SIZE;i++){
		printf("Lugar %d:\nLatitud: %d\tLongitud: %d\n",i,*pntLat[i],*pntLng[i]);
	}
	
	//Repitiendo el proceso pero ahora ordenando por longitud
	for(i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++){
			if(*pntLng[j]>*pntLng[i]){
				temp=pntLat[i];
				pntLat[i]=pntLat[j];
				pntLat[j]=temp;
				temp=pntLng[i];
				pntLng[i]=pntLng[j];
				pntLng[j]=temp;
			}
		}
	}
	
	//Imprimiendo la tabla ordenada por longitud
	printf("\n-TABLA ORDENADA POR LONGITUD-\n");
	for(i=0;i<SIZE;i++){
		printf("Lugar %d:\nLatitud: %d\tLongitud: %d\n",i,*pntLat[i],*pntLng[i]);
	}
	
	return 0;
}

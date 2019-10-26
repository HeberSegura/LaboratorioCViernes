#include <stdio.h>
#include <string.h>

/*
*Autor: Heber Segura Gonzalez
*Fecha: 26/10/2019
*Grupo: 006
*Horario: Viernes 7am-9am
*Matricula: 1877364
*/

//Declarando la estructura Panda
typedef struct Panda{
	char pandNomb[50];
	float pandPeso;
	int pandNacm;
	char pandSexo;
};

//Funcion para conseguir la edad del panda
int edadPanda(struct Panda pan){
	int edad = 2019 - pan.pandNacm;
	return edad;
}

//Funcion que llama la func. anterior para determinar si el panda puede tener bebes
int tenerBebes(struct Panda pan){
	if(edadPanda(pan)>5&&pan.pandSexo=='F'){
		return 1;
	}
	return 0;
}

int main(void) {
	
	/*
	************ Actividad 1 ************
	*/
	printf("Actividad 1\n");
	
	
	//Var. de numero de estudiantes y dos iteradores
	int estNum,i,j;
	
	//Pidiendo estNum
	do{
		printf("Introduzca el numero de estudiantes: ");
		scanf("%d",&estNum);
	}while(estNum<0);
	
	//Declarando estructura Estudiante
	struct Estudiante{
		char estNomb[100];
		char estSexo;
		int estEdad;
		float estCalif[5];
	}estArr[estNum];
	
	//Armando los datos de cada estudiante
	for(i=0;i<estNum;i++){
		printf("Estudiante %d:\n",i+1);
		printf("Introduzca nombre completo: ");
		fflush(stdin);
		gets(estArr[i].estNomb);
		fflush(stdin);
		do{
			printf("Introduzca sexo (M si masculino, F si femenino): ");
			scanf("%c",&estArr[i].estSexo);
			estArr[i].estSexo=toupper(estArr[i].estSexo);
			fflush(stdin);
		}while(estArr[i].estSexo!='M'&&estArr[i].estSexo!='F');
		do{
			printf("Introduzca edad: ");
			scanf("%d",&estArr[i].estEdad);
		}while(estArr[i].estEdad<1);
		for(j=0;j<5;j++){
			do{
				printf("Introduzca calificacion %d (0 a 100): ",j+1);
				scanf("%f",&estArr[i].estCalif[j]);
			}while(estArr[i].estCalif[j]<0||estArr[i].estCalif[j]>100);
		}
	}
	
	float avg=0,tempAvg;
	int avgPos;
	//Encontrando el promedio mayor
	for(i=0;i<estNum;i++){
		tempAvg=0;
		for(j=0;j<5;j++){
			tempAvg+=(estArr[i].estCalif[j]);
		}
		tempAvg/=5;
		if(tempAvg>avg){
			avg=tempAvg;
			avgPos=i;
		}
	}
	
	//Imprimiendo resultados
	printf("\nEstudiante con mayor promedio: %s\n",estArr[avgPos].estNomb);
	printf("Sexo: %c\n",estArr[avgPos].estSexo);
	printf("Edad: %d\n",estArr[avgPos].estEdad);
	printf("Promedio: %.2f",avg);
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	//Variables de almacenaje
	char name[50],sex;
	float mass;
	int yearOfBirth;
	
	//Pidiendo datos del panda
	printf("Introduzca el nombre del panda: ");
	fflush(stdin);
	gets(name);
	do{
		printf("Introduzca el peso (en kg) del panda: ");
		scanf("%f",&mass);
	}while(mass<=0);
	do{
		printf("Introduzca el a%co de nacimiento del panda: ",164);
		scanf("%d",&yearOfBirth);
	}while(yearOfBirth<0);
	do{
		printf("Introduzca el sexo del panda (M si masculino, F si femenino): ");
		scanf(" %c",&sex);
		sex=toupper(sex);
	}while(sex!='M'&&sex!='F');
	
	//Armando estructura del panda
	struct Panda p = { .pandPeso = mass, .pandNacm = yearOfBirth, .pandSexo = sex};
	strcpy(p.pandNomb,name);
	
	//Llamando funcion tenerBebes() e imprimiendo resultados
	if(tenerBebes(p)==0){
		printf("\n%s no puede tener bebes",p.pandNomb);
	}else{
		printf("\n%s puede tener bebes",p.pandNomb);
	}
		
	return 0;
}

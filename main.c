#include <stdio.h>
#include <string.h>

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
	
	//Declaramos dos iteradores y dos cadenas de texto
	int i=0,j=0;
	char str[50],strRev[50];
	
	//Inicializamos un puntero tipo file que abra el archivo en modo lectura
	//NOTA: para que sea exactamente el mismo procedimiento siempre, se tiene que
	//editar archivo.txt para que diga "Lorem ipsum dolor sit amet"
	FILE * fpIn = fopen("archivo.txt","r");
	
	//Leemos la cadena que se encuentra en el archivo
	fscanf(fpIn,"%[^\n]",str);
	
	printf("Cadena leida del archivo: ");
	puts(str);
	
	//Hacemos que revStr sea str al reves
	for(i=strlen(str)-1;i>-2;i--){
		strRev[j] = str[i];
		j++;
	}
	
	printf("\nCadena al reves: ");
	puts(strRev);
	
	//Inicializamos otro puntero tipo file, esta vez creando un archivo llamado archivo_alreves
	FILE * fpOut = fopen("archivo_alreves.txt","w");
	
	//Imprimiendo revStr en el archivo de salida
	fprintf(fpOut,"%s",strRev);
	
	//Cerramos el archivo fpOut y reabrimos el archivo fpIn pero borrando lo que estaba antes
	fclose(fpOut);
	freopen("archivo.txt","w",fpIn);
	
	//Escribimos en el archivo la palabra "Procesado" y lo cerramos
	fprintf(fpIn,"Procesado");
	fclose(fpIn);
	
	/*
	************ Actividad 2 ************
	*/
	printf("\n\n***************************\nActividad 2\n");
	
	int n1,n2;
	
	fpIn = fopen("nums.txt","r");
	fscanf(fpIn,"a: %d\nb: %d",&n1,&n2);
	fclose(fpIn);
	
	printf("Numeros leidos: a es %d, b es %d",n1,n2);
	
	fpOut = fopen("sum.txt","w");
	fprintf(fpOut,"La suma de %d y %d es: %d",n1,n2,n1+n2);
	fclose(fpOut);
	
	return 0;
}

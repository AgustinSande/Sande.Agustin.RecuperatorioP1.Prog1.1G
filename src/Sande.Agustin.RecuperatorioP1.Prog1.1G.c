/*
 ============================================================================
 Name        : 1G.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TAM 3



typedef struct{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;


}ePais;

void actualizarRecuperados(ePais pais, int recuperados);
int invertirCadena(char cadena[]);

int main(void) {
	setbuf(stdout, NULL);
	ePais paises[TAM] = {{1, "Argentina", 40, 20, 10},{2, "Chile", 500, 50, 20},{3, "Uruguay", 200,70, 30}};
	int recuperados = 0;
	char cadena[20] = "UTN-FRA";
//	for(int i= 0; i < TAM; i++){
//		printf("%s %d",paises[i].nombre, paises[i].recuperados);
//		actualizarRecuperados(paises[i], recuperados);
//		printf("%s %d",paises[i].nombre, paises[i].recuperados);
//	}
	invertirCadena(cadena);
	printf("%s", cadena);
	return 0;
}


void actualizarRecuperados(ePais pais, int recuperados){
	int auxRecuperados;
	printf("Ingrese la cantidad de recuperados del dia: \n");
	scanf("%d", &auxRecuperados);
		 pais.recuperados += auxRecuperados;


}


int invertirCadena(char cadena[]){

	int todoOk;
	int i;
	int j= 6;
	char auxCadena[20];

	todoOk= 0;
	if(cadena != NULL){


		while(cadena[i] != '\0'){
			if(cadena[j] != '\0'){
				auxCadena[i] = cadena[i];
				cadena[i] = cadena[j];
				cadena[j] = auxCadena[i];

				j--;
			}
			i++;
		}

		todoOk = 1;
	}

	return todoOk;

}

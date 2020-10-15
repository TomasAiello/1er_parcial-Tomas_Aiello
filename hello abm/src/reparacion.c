/*
 * servicio.c
 *
 *  Created on: 15 oct. 2020
 *      Author: samotaiello
 */

#include <stdio.h>
#include <stdlib.h>
#include "electrodomestico.h"
#include "reparacion.h"
#include <string.h>
#include "string.h"
#include <ctype.h>

#define RETRY 5


int initArray2(reparacion* list, int len){


	int i;

	if(list != NULL && len > 0){
		for(i = 0; i<len; i++){

			list[i].id = 0;
			list[i].serie = 0;
			list[i].idServicio = 0;
			list[i].isEmpty = 1;
		}
	}
	else{
		printf("Array NULL");
	}
 return 0;
}

int initArray3(fecha* list, int len){


	int i;

	if(list != NULL && len > 0){
		for(i = 0; i<len; i++){

			list[i].dia = 0;
			list[i].mes = 0;
			list[i].anio = 0;
		}
	}
	else{
		printf("Array NULL");
	}
 return 0;
}

int getInt(int* pResultado, char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
	{
		do{
			printf("%s", mensaje);
			fpurge(stdin);
			scanf("%d",&bufferInt);

				if(bufferInt >= minimo && bufferInt <= maximo){
					*pResultado=bufferInt;
					retorno=0;
				break;
				}
				else{
					printf("%s", mensajeError);
					reintentos--;
				}
		}while(reintentos >=0);

	}
	return retorno;
}
int getFloat(float* pResultado, char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos)
{
	int retorno=-1;
	float bufferInt;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >=0)
	{
		do{
			printf("%s", mensaje);
			fpurge(stdin);
			scanf("%f",&bufferInt);

				if(bufferInt >= minimo && bufferInt <= maximo){
					*pResultado=bufferInt;
					retorno=0;
				break;
				}
				else{
					printf("%s", mensajeError);
					reintentos--;
				}
		}while(reintentos >=0);

	}
	return retorno;
}
int utn_menu(int* flagAlta){

	int opcion;
	char msgError[50];
	char msg[50];
	int min, max;

    printf("\nMenu de Opciones\n");
    printf("1- ALTAS\n");
    printf("2- MODIFICAR \n");
    printf("3- BAJA \n");
    printf("4- INFORMAR \n");
    printf("5 - SALIR \n");
    strcpy(msg, "Ingrese opcion\n");
    strcpy(msgError, "opcion no contemplada\n");
    min =1;
    max =5;
    fpurge(stdin);
    getInt(&opcion, msg, msgError, min, max, RETRY);

    if(*flagAlta != NULL){

    	do{
    		switch(opcion){ // switch no evalua punteros ?
    			case 1:
    				*flagAlta = 1;
    				break;
    			case 2:
    				if(*flagAlta == 0){
    					printf("Para MODIFICAR primero debe dar de ALTA \n");
    					fpurge(stdin);
    					getInt(&opcion, msg, msgError, min, max, RETRY);
    				}
    				break;
    			case 3:
    				if(*flagAlta == 0){
    					printf("Para dar de BAJA primero debe dar de ALTA \n");
    					fpurge(stdin);
    					getInt(&opcion, msg, msgError, min, max, RETRY);
    				}
    				break;
    			case 4:
    				if(*flagAlta == 0){
    					printf("Para INFORMAR primero debe dar de ALTA \n");
    					fpurge(stdin);
    					getInt(&opcion, msg, msgError, min, max, RETRY);
    				}
    				break;
    			case 5:
    				printf("vuelvan prontos!");
    				*flagAlta = 1;
    				break;
    			}

    	}while(*flagAlta == 0);
    }
   return opcion;
}

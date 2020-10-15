/*
 * electrodomestico.c
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


int initArray(electrodomestico* list, int len){

	int i;

	if(list != NULL && len > 0){
		for(i = 0; i<len; i++){

			list[i].id = 0;
			list[i].serie = 0;
			list[i].idMarca = 0;
			list[i].modelo = 0;
		}
	}
	else{
		printf("Array NULL");
	}
 return 0;
}

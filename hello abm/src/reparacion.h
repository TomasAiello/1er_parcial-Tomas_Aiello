/*
 * servicio.h
 *
 *  Created on: 15 oct. 2020
 *      Author: samotaiello
 */

#ifndef REPARACION_H_
#define REPARACION_H_

#include <stdio.h>
#include <stdlib.h>
#include "electrodomestico.h"
#include "reparacion.h"
#include <string.h>
#include "string.h"
#include <ctype.h>



typedef struct{
	int dia, mes, anio;
}fecha;


typedef struct{
	int id;
	char descripcion[25];
	int precio;
}servicio;


typedef struct{
	int id, serie, idServicio, isEmpty;
	fecha fechaReparacion;

}reparacion;


int initArray2(reparacion* list, int len);
int initArray3(fecha* list, int len);
int getInt(int* pResultado, char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos);
int getFloat(float* pResultado, char mensaje[], char mensajeError[], int minimo, int maximo, int reintentos);
int utn_menu(int* flagAlta);



#endif /* REPARACION_H_ */

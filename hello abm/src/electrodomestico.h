/*
 * electrodomestico.h
 *
 *  Created on: 15 oct. 2020
 *      Author: samotaiello
 */

#ifndef ELECTRODOMESTICO_H_
#define ELECTRODOMESTICO_H_

#include <stdio.h>
#include <stdlib.h>
#include "electrodomestico.h"
#include "reparacion.h"
#include <string.h>
#include "string.h"
#include <ctype.h>



typedef struct{
	int id;
	char descripcion[20];
}marca;


typedef struct{
	int id, serie, idMarca, modelo;

}electrodomestico;



int initArray(electrodomestico* list, int len);

#endif /* ELECTRODOMESTICO_H_ */

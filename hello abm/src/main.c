/*
 ============================================================================
 Name        : hello.c
 Author      : Tomas Aiello
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "electrodomestico.h"
#include "reparacion.h"
#include <string.h>
#include "string.h"
#include <ctype.h>

#define TAM 1000
#define RETRY 5



int main(void) {

	setbuf(stdout, NULL);
	int flagAlta = 0;

	electrodomestico list[TAM];
	reparacion catalogo[TAM];
	fecha momento[TAM];

	servicio Servicios[] = {{20000, "Garantia", 250}, {20001, "Mantenimiento", 500}, {20002, "Respuesto", 400}, {20003, "Refaccion", 600} };
	marca Marcas[] = {{1, "Whirpool"}, {2, "Sony"}, {3, "Liliana"}, {4, "Gafa"}, {5, "Phillips"}};

	initArray(list, TAM);
	initArray2(catalogo, TAM);
	initArray3(momento, TAM);

	switch(utn_menu(&flagAlta)){

	case 1:



	}







	return 0;
}

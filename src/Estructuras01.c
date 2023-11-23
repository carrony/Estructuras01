/*
 ============================================================================
 Name        : Estructuras01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "persona.h"

int main(void) {
	persona per;

	puts("Gestión de personas");
	puts("introduce los datos de la persona: ");
	pedirPersona(&per);

	puts("La persona introducida es ");
	mostrarPersona(per);

	puts("Introduce otra");
	per = pedirPersona2();

	puts("La segunda persona es ");
	mostrarPersona(per);


	return EXIT_SUCCESS;
}

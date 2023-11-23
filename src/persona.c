/*
 * persona.c
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */

#include <string.h>
#include "persona.h"

	void pedirPersona(persona *p) {
		printf("Introduce el nombre de la persona: ");
		fflush(stdout);
//		scanf("%s", p->nombre); // Solo lee hasta los caracters separadores
//		gets(p->nombre); // lee con espacios pero no es segura
		fflush(stdin);
		fgets(p->nombre, MAXNOMBRE, stdin);
		p->nombre[strlen(p->nombre)-1]='\0';

		printf("Introduce el apellido de la persona: ");
		fflush(stdout);
		fflush(stdin);
		fgets(p->apellido, MAXAPE, stdin);
		p->apellido[strlen(p->apellido)-1]='\0';

		printf("Introduce la edad de la persona: ");
		fflush(stdout);
		scanf("%d", &(p->edad)   );


	}

	/**
	 * Función que devuelve una persona pedida por teclado
	 */
	persona pedirPersona2(void) {
		persona p;

		printf("Introduce el nombre de la persona: ");
		fflush(stdout);
		fflush(stdin);
		fgets(p.nombre, MAXNOMBRE, stdin);
		p.nombre[strlen(p.nombre)-1]='\0';

		printf("Introduce el apellido de la persona: ");
		fflush(stdout);
		fflush(stdin);
		fgets(p.apellido, MAXAPE, stdin);
		p.apellido[strlen(p.apellido)-1]='\0';

		printf("Introduce la edad de la persona: ");
		fflush(stdout);
		scanf("%d", &(p.edad)   );

		return p;
	}

	/**
	 * Procedimiento que escribe los datos de una persona en pantalla.
	 */
	void mostrarPersona(persona p) {
		printf("Nombre: %s, apellidos:%s, edad:%d\n", p.nombre,p.apellido,p.edad);
	}


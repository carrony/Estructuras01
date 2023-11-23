/*
 * persona.h
 *
 *  Created on: 23 nov 2023
 *      Author: Usuario
 */
#include <stdio.h>
#ifndef PERSONA_H_
#define PERSONA_H_

#define MAXNOMBRE 30
#define MAXAPE 50

	typedef struct {
		char nombre[MAXNOMBRE];
		char apellido[MAXAPE];
		int edad;
	} persona;

	/**
	 * Procedimeintno que pide por teclado los datos de una persona
	 * Se le pasa como parámetro lavariable ede tipo pesrsona para almacenar los datos
	 */
	void pedirPersona(persona *p);

	/**
	 * Función que devuelve una persona pedida por teclado
	 */
	persona pedirPersona2(void);

	/**
	 * Procedimiento que escribe los datos de una persona en pantalla.
	 */
	void mostrarPersona(persona p);

#endif /* PERSONA_H_ */

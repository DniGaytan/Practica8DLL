// MathLibrary.cpp : Defines the exported functions for the DLL.
#include "stdafx.h"
#include <utility>
#include <limits.h>
#include "practica8Libreria.h"
									  ///Convierte el codigo ascii binario y despues a un entero
int asciiBinaryToInt(char *s) {
	char *cControlPointer;
	int i = strtol(s, &cControlPointer, 2);
	return i;
}

///Convierte el codigo ascii Hex a un entero
int asciiHexToInt(char *s) {
	char *cControlPointer;
	int i = strtol(s, &cControlPointer, 16);
	return i;
}

///Convierte el codigo ascii float a un double
double asciiToDouble(char *s) {
	char *cControlPointer;
	float fRes = 0;
	int i;

	fRes = strtod(s, &cControlPointer);

	return fRes;
}


void startProcess() {
	char cInput[32];


	///Se lee el input en un ciclo
	while (cInput) {
		printf("\nEscribe tu string (Si escribes un valor para una funcion en especifico, es probable que no funcione adecuadamente para las otras funciones): \n");
		scanf("%s", &cInput);

		printf("\nResultado de binario-int: ");
		printf("%ld", asciiBinaryToInt(cInput));

		printf("\nResultado de hex-int: ");
		printf("%ld", asciiHexToInt(cInput));

		printf("\nResultado de float-double: ");
		printf("%lf", asciiToDouble(cInput));

	}

}


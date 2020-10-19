/*
 ============================================================================
 Name        : parcial.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

1. Dada una estructura ePais cuyos campos son id(int), nombre(20 caracteres), infectados(int),
recuperados(int) y muertos(int). Desarrollar una función llamada
actualizarRecuperados que reciba el país y los recuperados del dia
y que acumule estos a los que ya tiene el país. La función no devuelve nada.

2. Crear una función que se llame invertirCadena que reciba
 una cadena de caracteres como parámetro y su responsabilidad
  es invertir los caracteres de la misma. Ejemplo si le pasamos UTN-FRA la deja como ARF-NTU *

3. Crear una función que se llame ordenarCaracteres que reciba
 una cadena de caracteres como parámetro y su responsabilidad
  es ordenarlos caracteres de manera ascendente dentro de la cadena.
   Ejemplo si le pasamos "algoritmo" la deja como "agilmoort" *

 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int id;
	char nombre[20] ;
	int infectados;
	int recuperados;
	int muertos;
} ePais;

void actualizarRecuperados(ePais poblacion);

int main(void) {

	setbuf(stdout, NULL);

	char cadena[20] = {"Juan"};

	printf(cadena);
	cadena = invertirCadena;

	printf(cadena);



	return EXIT_SUCCESS;
}

void actualizarRecuperados(ePais poblacion)
{
	poblacion[i].recuperados
}

void invertirCadena(char cadena)
{
	int aux;
	int longitudCadena;

	longitudCadena=strlen(cadena);
	for(int i=0; i<longitudCadena/2; i++)
	{
		for (int j=longitudCadena-1;;j--)
		{
			aux=cadena[i];
			cadena[i]=cadena[j];
			cadena[j]=aux;
		}
	}


}

void ordenarCaracteres(char cadena[], int tam)
{
	int aux;

	for(int i=0; i<tam-1; i++)
	{
		for(int j=i+1; j<tam; j++)
		{
			if(cadena[i]<cadena[j])
			{
				aux=cadena[i];
				cadena[i]=cadena[j];
				cadena[j]=aux;
			}
		}
	}
}

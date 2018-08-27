#include <stdio.h>

/*
Copia un archivo caracter a caracter

lee un caracter
while (caracter no sea final de archivo)
	manda a salida el caracter recien leido
	lee un caracter

*/

main()
{
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}

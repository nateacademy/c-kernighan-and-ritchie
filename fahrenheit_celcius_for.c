#include <stdio.h>
/* Imprimir una tabla de equivalencia entre Fahrenheit y Celcius
	la tabla va de 20 en 20, desde 0 hasta 300 */

#define LOWER	0
#define UPPER	300
#define	STEP	20

main()
{
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr-32));
}


/*

for (
	fahr = 0; <- Inicializacion
	fahr <= 300; <- Condicion  
	fahr = fahr + 20 <- Incremento
)

*/

#include <stdio.h>
/* Imprimir una tabla de equivalencia entre Fahrenheit y Celcius
	la tabla va de 20 en 20, desde 0 hasta 300 */

main()
{
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= upper) {
		celcius = 5 * (fahr-32) / 9;
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
}

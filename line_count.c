#include <stdio.h>

/* cuenta los caracteres de entrada */
main()
{
	int c, nl, wc, tc;

	nl = 0;
	tc = 0;
	wc = 0;

	while ((c = getchar()) != EOF){
		if (c == '\n')
			++nl;
		if (c == '\t')
			++tc;
		if (c == ' ')
			++wc;
	}
	printf("%d, %d, %d\n", nl, tc, wc);
}

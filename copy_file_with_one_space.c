#include <stdio.h>

main()
{
	int current_char, last_char_printed;

	while ((current_char = getchar()) != EOF) {
		if (current_char != ' ' || last_char_printed != current_char) {
			putchar(current_char);
		}

		last_char_printed = current_char;
	}
}
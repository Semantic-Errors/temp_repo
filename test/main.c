#include <stdio.h>
#include "../main.h"

int main() {
	/* Testing %*/
	char *null_str = NULL;

	int test = _printf("sadsad%");	/* Return -1 and stops when find % */
	printf("\n%d\n", test);	/* should print -1 */

	_printf("sadsad% sadsad\n\n");


	_printf("Let's print a simple sentence.");
	_printf("%s", "I am a string !");
	printf("main null printf %s\n", null_str);
	_printf("_printf version null printf %s\n", null_str);
	_printf("%c", 'S');
	_printf("%%");
	_printf("test\n");
	/* _printf("%s\n", NULL); SEGFAULT */

	_printf("%d\n", -4564);
	_printf("%d\n", 4654);

    _printf("%b\n", 98);
	return 0;
}

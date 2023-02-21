#include <time.h>
#include <stdio.h>
#include <stdlib.h>

// From https://odensskjegg.home.blog/2018/12/27/recreating-commodore-64-sample-code/

int main (void)
{
	char colors[] = { 5, 28, 30, 31, 144, 156, 158, 159 };
	char clrHome = 147;
	char rvsOn = 18;
	printf ("%c", clrHome);
	srand(time(NULL)); 
	do {
		printf ("%c", rvsOn);
		printf ("%s", "     ");
		printf ("%c", colors[rand() % sizeof(colors)]);
	} while (1);
	return EXIT_SUCCESS;
}
#include <stdio.h>

/**
 * main - prints alphabet in lower case
 * return : always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putschar(lc);
	}
	putschar('\n');
	return (0);
}

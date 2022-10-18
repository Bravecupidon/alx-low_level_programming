#include<stdio.h>
/**
 * main-prints alphabet in lower cas
 * followed by a new line except 'q' and 'e'
 */

int main(void)
{

	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
	if (la != 'e' && la != 'q')
		putchar(la);
	}

	putchar('\n');

	return (0);
}

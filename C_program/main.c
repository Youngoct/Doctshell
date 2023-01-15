#include <stdio.h>

/**
* main - print A to Z
* Return:0 as success
*/

int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}

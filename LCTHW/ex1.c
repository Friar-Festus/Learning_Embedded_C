#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < 5; i++)
	{
		putchar(i+49);
		puts(" Hello world.");
	}

	return 0;
}


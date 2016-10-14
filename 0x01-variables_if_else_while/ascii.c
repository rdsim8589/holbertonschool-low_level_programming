#include <stdio.h>

int main(void)
{
	int a, b;
	for (a = b = 0;a < 100; a++, b++)
	{
		printf("%d\n", a);
		printf("%d\n", b);
	}
}

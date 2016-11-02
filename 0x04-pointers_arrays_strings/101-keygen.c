#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int passnum, tmp;
	passnum = 2772;
	while (passnum >= 127)
	{
		tmp = rand() % 112 + 1;
		printf("%c", tmp);
		passnum -= tmp;
	}
	printf("%c\n", passnum);
	return(0);
}

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	int passnum, tmp;

	srand(time(NULL));
	passnum = 2772;
	while (passnum >= 127)
	{
		tmp = rand() % 126 + 1;
		printf("%c", tmp);
		passnum -= tmp;
	}
	printf("%c", passnum);
	return(0);
}

#include <stdio.h>

int main(void)
{
	int i;
	for (i = 1; i <= 10000; i++)
	{
		if ((i % 13 == 0) && (i % 17 == 0))
		{
			printf("%8d\n", i);
		}
		else if (i % 13 == 0)
		{
			printf("%8d\n", i);
		}
		else if (i % 17 == 0)
		{
			printf("%8d\n", i);
		}
	}

	return 0;
}
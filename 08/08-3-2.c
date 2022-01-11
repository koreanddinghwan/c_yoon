#include <stdio.h>


int main(void)
{
	int i, j;

	for (i = 0; i < 10;i++)
	{
		for (j=0; j < 10; j++)
		{
			if (10*i + j + 10*j + i == 99)
				printf("A = %d, Z = %d\n", i, j);
		}
	}


	return 0;
}

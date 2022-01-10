#include <stdio.h>

int main()
{
	int row = 0;
	int rep = 0;


	while (row < 5)
	{
		rep = row;
		while(rep>0)
		{
			printf("0");
			rep--;
		}
		printf("*\n");

		row++;
	}

	return 0;

}


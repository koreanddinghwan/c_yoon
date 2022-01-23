#include <stdio.h>

void gugufunc(int n1, int n2)
{
	int i = 0;
	if (n1 > n2)
	{
		for (i = n2; i <= n1; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				printf("%d *  %d = %d\n", i, j, i*j);
			}
		}

	} else {
		for (i = n1; i <= n2; i++)
		{
			for (int  j = 1; j < 10;j++)
			{
				
				printf("%d *  %d = %d\n", i, j, i*j);
			}
		}
	}
}



int main()
{
	int num1;
	int num2;
	scanf("%d %d", &num1, &num2);

	gugufunc(num1, num2);
	return 0;
}

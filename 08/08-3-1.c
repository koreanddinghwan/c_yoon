#include <stdio.h>

int main()
{
	int i,j; //바깥 for문과 안쪽for문 초기식변수

	for(i = 1; i <= 9; i ++)
	{
		if (i % 2 != 0)
		{	
			continue;
		}

		for(j = 1;j <= i ;j++)
		{
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	return 0;
}


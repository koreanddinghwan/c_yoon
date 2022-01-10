#include <stdio.h>

int main(void)
{
	int num1;
	int i = 0;
	printf("수를 입력하세요 :");
	scanf("%d", &num1);
	
	while (i<num1)
	{
		printf("Hello World!%d \n", i);
		i++;
	}

	return 0;
}


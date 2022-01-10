#include <stdio.h>

int main()
{
	int num1;
	int i = 0;

	printf("수를 입력하세요:");
	scanf("%d", &num1);

	while (i < num1)
	{
		printf("%d ", 3 * (i+1));

		i++;
	}

	return 0;

}


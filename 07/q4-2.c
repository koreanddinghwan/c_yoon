#include <stdio.h>

int main(void)
{
	int num1, i, total;

	printf("팩토리얼을 입력해라.");
	scanf("%d", &num1);

	total = 1;

	for(i = 1; i <= num1;i++)
	{
		total = total * i;
	}

	printf("%d 팩토리얼은 %d입니다.", num1, total);

	return 0;
}


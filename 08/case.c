#include <stdio.h>

int main(void)
{
	int num;
	printf("숫자를 입력하세요");
	scanf("%d", &num);

	switch(num)
	{
		case 1:
			printf("A1");
			printf("A2");

		case 2:
			printf("B1");
			printf("B2");
		
		default:
			printf("기본값");

	}

	return 0;
}


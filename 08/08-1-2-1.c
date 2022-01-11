#include <stdio.h>

int main(void)
{
	int num1, num2, result;

	printf("두 수를 입력해주세요");
	scanf("%d %d", &num1, &num2);

	result = (num1 - num2) < 0 ? num2 - num1 : num1 - num2;
	printf("result : %d", result);

	return 0;
}


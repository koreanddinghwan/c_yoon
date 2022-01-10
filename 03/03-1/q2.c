#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	int result;

	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("첫수 * 두번째 + 세번째수 : %d", result);

	return 0;
}


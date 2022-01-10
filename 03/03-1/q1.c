#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result1, result2;
	printf("첫번째 숫자를 입력하세요:");
	scanf("%d\n", &num1);
	printf("두번째 숫자를 입력하세요:");
	scanf("%d\n", &num2);
	
	result1 = num1 + num2; 
	result2 = num1 - num2;
	
	printf("두 수를 더한 결과는 %d 입니다.", result1);

	printf("두 수를 뺀 결과는 %d 입니다.", result2);

	return 0;
}


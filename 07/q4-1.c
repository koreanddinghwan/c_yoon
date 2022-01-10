#include <stdio.h>

int main(void)
{
	int num1, num2, i, total;
 
	printf("정수를 2개 입력하세요");

	scanf("%d %d", &num1, &num2);
	
	total = 0;
	for(i = num1; i <= num2; i++)
	{
		total += i;
	}

	printf("총합은 %d", total);


	return 0;
}

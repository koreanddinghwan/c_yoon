#include <stdio.h>

int main(void)
{
	int total = 0, num = 1;

	while(num !=0)
	{
		printf("정수를 입력하세요(0 to quit)");
		scanf("%d", &num);
		total += num;
	}
	printf("total : %d", total);


	return 0;
}


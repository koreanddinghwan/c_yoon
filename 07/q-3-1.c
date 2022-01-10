#include <stdio.h>


int main()
{
	int total=0, num=0;

	printf("정수 입력(0to quit)");
	scanf("%d", &num);

	while(num != 0)
	{
		total = total + num;
		num = 0;
		printf("정수 입력(0to quit)");
		scanf("%d", &num);
	}
	printf("합계는 %d", total);
	return 0;
}


#include <stdio.h>

int main()
{
	int num;
	int data;
	int i;
	int total;
	

	printf("입력할 정수의 개수를 입력하세요 : ");
	scanf("%d", &num);


	total = 0;
	i = num;

	while (i > 0)
	{
		printf("정수를 입력하세요. :");
		scanf("%d",&data); 
		total += data;

		i--;
	}

	printf("평균은 : %f", (double)total / num);

	return 0;
}

	



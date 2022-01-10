#include <stdio.h>

int main()
{
	int num;
	int sum = 0;
	int i = 0;

	while (1)
	{
		printf("수를 입력하세요 :");
		scanf("%d",&num); 

		if (num == 0)
		{
			printf("지금까지 입력된 수의 합은 : %d", sum);
			break;
		}

		sum += num;
	}

	return 0;
}

		

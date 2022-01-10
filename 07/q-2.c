#include <stdio.h>


int main(void)
{
	int total = 0;
	int num = 0;
	int i = 5;

	while (i > 0)
	{
		printf("정수를 입력하시오 : ");
		scanf("%d", &num);

		while (num < 1)  /*입력정수 1미만일때 체크*/
		{	
			printf("정수를 입력해라.:");
			scanf("%d", &num);
		}
		
		total = total + num;
		i--;
	}

	printf("총 합은 : %d", total);
	return 0;
}

#include <stdio.h>

int main()
{	
	int dan = 2, num = 1;
	
	do{
		num = 1; //곱해지는 수 초기화

		while (num < 10)
		{
			printf("%d * %d = %d\n", dan, num, dan*num);
			num++;
		}
		dan++;
		}while(dan<10);
	

	return 0;
}
	

#include <stdio.h>

int main()
{
	int num;
	int i = 9;

	printf("보고싶은 구구단을 입력하세요, 역순으로 출력됩니다. :");
	scanf("%d", &num);

	while (i != 0)
	{
		printf("%d * %d = %d\n", num, i, num*i);
		i--;
	}

	return 0;
}


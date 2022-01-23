#include <stdio.h>
#include <stdlib.h>

int GetNum(int num1, int num2, int num3, char * type)
{
	int max;
	int min;

	if (*type == 'm')
	{
		return max = (num1 > num2 ? (num1 > num3 ? num1:num3):(num2 > num3? num2 : num3));
	}
	
	if (*type == 'n')
	{
		return min = (num1 < num2 ? (num1 < num3 ? num1 : num3 ):(num2 < num3 ? num2:num3));
	}

	return 0;
}

int main()
{
	int n1, n2, n3;
	char *c= malloc(sizeof(char));
	scanf("%d %d %d %c",&n1,&n2,&n3,c);

	printf("%d", GetNum(n1,n2,n3,c));

	return 0;
}

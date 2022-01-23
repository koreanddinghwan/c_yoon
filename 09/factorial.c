#include <stdio.h>

int Factorial(int num)
{
	if (num == 0)
		return 1;

	if (num == 1)
		return 1;

	return num*Factorial(num-1);
}


int main()
{
	printf("%d\n", Factorial(5));

	return 0;
}

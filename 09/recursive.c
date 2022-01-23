#include <stdio.h>

void Recursive(num)
{
	if (num == 0)
		return;
	printf("%d\n", num);
	Recursive(num-1);
}

int main()
{
	Recursive(3);
	return 0;
}

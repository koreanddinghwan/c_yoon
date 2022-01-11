#include <stdio.h>

int main()
{
	char * strArr[3] = {"Simple", "string", "Array"};

	printf("%s %s %s", strArr[0], strArr[1], strArr[2]);
	printf("%c", strArr[0][1]);
	return 0;
}


#include <stdio.h>

int main()
{
	char str1[] = "My String";
	char * str2 = "Your String";
	
	printf("%s %s \n", str1, str2);


	str2 = "Our String";
	//str2 포인터변수가 가리키는 주소를 
	//자동으로 저장된 Our String문자열의 첫 값으로 수정

	printf("%s %s \n", str1, str2);

	str1[0] = 'X';

	printf("%s", str1);
	return 0;
}


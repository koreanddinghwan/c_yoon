#include <stdio.h>

int main()
{
	/*두 개의 정수를 입력받아서 두 수의 차를 출력하는 프로그램
	 * 반드시 큰 수에서 작은 수를 뺀 결과를 출력해야한다.*/

	int num1, num2, result;

	printf("두 개의 정수를 입력해주세요:");
	scanf("%d %d", &num1, &num2);
	
	result = num1 - num2;

	if (result < 0)
		result = -result;

	printf("result : %d", result);
	return 0;

}



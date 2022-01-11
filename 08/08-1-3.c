#include <stdio.h>

int main(void)
{
	double kor,eng,math, result;

	printf("국어, 영어, 수학 점수를 입력해주세요");
	scanf("%lf %lf %lf", &kor, &eng, &math);
	
	result = (kor + eng + math) / 3;

	if (result >= 90)
	{
		printf("학점은 A입니다.");
	} else if (result >= 80)
	{
		printf("학점은 B입니다.");
	} else if (result >= 70)
	{
		printf("학점은 C입니다.");
	} else if (result >= 50)
	{
		printf("학점은 D입니다.");
	} else {
		printf("자퇴해라. F다.");
	}

	return 0;
}

	



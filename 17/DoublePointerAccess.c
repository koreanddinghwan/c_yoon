#include <stdio.h>

int main()
{
	double num  = 3.14;
	double * ptr = &num;
	double **dptr = &ptr;
	double *ptr2;

	printf("%9p %9p \n", ptr, *dptr); //ptr에 저장되어있는 주소
	printf("%9g %9g \n", num, **dptr); //이중포인터 이중참조=>num값
	ptr2 = *dptr;//dptr을 역참조하면 ptr에 저장된 num의 주소가 ptr2에 저장됨
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **dptr);
	return 0;
}







#include <stdio.h>


void Swap(int **dtr1, int **dtr2){
	int * temp;
	temp = *dtr2;
	*dtr2 = *dtr1;
	*dtr1 = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	int * ptr1 = &num1;
	int * ptr2 = &num2;
	int **dptr1 = &ptr1;
	int **dptr2 = &ptr2;

	printf("%d %d\n", **dptr1, **dptr2);
	printf("%p %p \n", dptr1, dptr2);
	printf("%p %p\n", ptr1, ptr2);

	Swap(dptr1, dptr2);

	printf("%d %d\n", **dptr1, **dptr2);
	printf("%p %p \n", dptr1, dptr2);
	printf("%p %p\n", ptr1, ptr2);

	return 0;
}

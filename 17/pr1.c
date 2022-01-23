#include <stdio.h>

void MaxAndMin(int ** max, int ** min, int * array, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			*max = &array[1];
			*min = &array[1];
		}

		if (array[i] > **max)
		{
			*max = &array[i];
		}

		if (array[i] < **min)
			*min = &array[i];
	}
}

int main()
{
	int * maxPtr;
	int * minPtr;
	int arr[5];
	int size = 5;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(&maxPtr, &minPtr, arr, size);
	printf("%d %d ", *maxPtr, *minPtr);
	return 0;
}

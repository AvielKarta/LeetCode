#include <stdio.h>
#include "tools.h"






void print_arr(int* arr, int size)
{
	int i = 0;
	printf("[");
	for (i ; i < size-1; i++)

	{
		printf("%d,", arr[i]);
	}
	printf("%d]\n", arr[i]);
}
void test_int_results(int expected, int actual)
{
	if (expected == actual)
	{
		printf("expected = actaul = %d", actual);
	}
	else
	{
		printf("expected = %d != actaul = %d", expected, actual);
	}
}
void test_arrays_match(int* arr1, int* arr2, int size)
{
	int is_match = 1;
	printf("A1:");
	print_arr(arr1, size);
	printf("A2:");
	print_arr(arr2, size);
	printf("\n");
	for (int i = 0; i < size; i++)
	{
		if (arr1[i] == arr2[i])
		{
			printf("PASS: A1[%d]=A2[%d]=%d\n", i, i, arr1[i]);
		}
		else
		{
			printf("FAIL: A1[%d]=%d!=A2[%d]=%d\n", i, arr1[i], i, arr2[i]);
			is_match = 0;
		}
	}
	printf("===============\n");
	if (is_match)
	{
		printf("\nArrays match\n");
	}
	else
	{
		printf("\n[!] Arrays mismatch\n");
	}
}


#include <stdio.h>

void insertionSort(int* a, int len)
{
	int tmp;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i; j < len; j++)
		{
			if (a[i] > a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
void print(int *a,int len)
{
	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);
	printf("\n");
}
int main()
{
	int DateSet[] = { 5,3,1,4,2 };
	int Len = sizeof DateSet / sizeof DateSet[0];
	
	printf("sort before\n");
	print(DateSet, Len);
	printf("sort after\n");
	insertionSort(DateSet, Len);
	print(DateSet, Len);
}
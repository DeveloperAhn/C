#include <stdio.h>

void BubbleSort(int* a, int len)
{
	int tmp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
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
	int DateSet[] = { 6,4,2,3,1 };
	int Len = sizeof DateSet / sizeof DateSet[0];
	
	printf("sort before\n");
	print(DateSet, Len);
	printf("sort after\n");
	BubbleSort(DateSet, Len);
	print(DateSet, Len);
}
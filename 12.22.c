
#include<stdio.h>
#include<Windows.h>

void BubbleSort(int *a, int num)
{
	int i = 0;
	int flag = 1;
	for (i = 0; i < num - 1; i++)//num-1轮
	{
		int j = 0;
		for (j = 0; j <num - 1 - i; j++)//每轮中有num-1-i趟
		{
			if (a[j] > a[j + 1])//升序，若是想降序，变成<即可
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag=0;
			}	
		}
		if (flag == 1)
			{
				break;
			}
	}
	for (int k = 0; k < num; k++)
	{
		printf("%d  ", a[k]);
	}
	printf("\n");
}



int main()
{
	int a[] = { 23, 45, 5, 7, 98, 6, 34, 98, 45 };
	int num = sizeof(a) / sizeof(a[0]);
	BubbleSort(a, num);
	system("pause");
	return 0;
}
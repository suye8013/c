#include<stdio.h>
#include"test.h"
void arrange_arr(int *arr, size_t size)
{
	int head = 0;
	int end = size - 1;
	while (head < end)
	{
		if (arr[head] % 2 == 0)
		{
			if (arr[end] % 2 == 1)
			{
				int tmp = arr[head];
				arr[head] = arr[end];
				arr[end] = tmp;
			}
			else
			{
				end--;
			}
		}
		else
		{
			head++;
		}
	}
}
void find(int arr[][100], int row, int key)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (key == arr[i][0])
		{
			printf("找到了，下标是:>%d %d\n", i, 0);
		}
		else if (key > arr[i][0])
		{
			if (key <= arr[i][row])
			{
				for (int j = 1; j < row; j++)
				{
					if (key == arr[i][j])
					{
						printf("找到了，下标是:>%d %d\n", i, j);
						break;
					}
				}
			}
		}
		else
		{
			;
		}
	}
	if (key > arr[row][row])
	{
		printf("很遗憾，找不到！");
	}
}

#include<stdio.h>
#include<stdlib.h>
#include"test.h"

void ranking()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	for (a = 1; a < 6; a++)
	{
		for (b = 1; b < 6; b++)
		{
			for (c = 1; c < 6; c++)
			{
				for (d = 1; d < 6; d++)
				{
					for (e = 1; e < 6; e++)
					{
						if (((b == 2) ^ (a == 3)) &&
							((b == 2) ^ (e == 4)) &&
							((c == 1) ^ (d == 2)) &&
							((c == 5) ^ (d == 3)) &&
							((e == 4) ^ (a == 1)))
						{
							int x = 0;
							x |= (1 << (a - 1));
							x |= (1 << (b-1));
							x |= (1 << (c-1));
							x |= (1 << (d-1));
							x |= (1 << (e-1));
							if (x==1||x==3||x==7||x==15||x==31)
							{
								printf("x=%-2d    A=%d B=%d C=%d D=%d E=%d\n",x, a, b, c, d, e);
							}
						}
					}
				}
			}
		}
	}
}
void killer()
{
	int killer = 0;
	for (killer = 'a'; killer <= 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
		{
			printf("killer is %c!\n", killer);
		}
	}
}
void yanghui_triangle(int lin)
{
	int arr[21][21];
	int i = 0;
	for (i = 0; i < 21; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for (i = 2; i < lin; i++)
	{
		for (int j = 1; j <i; j++)
		{
			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j];
		}
	}
	for (i = 0; i < lin; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
}

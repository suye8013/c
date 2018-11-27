#include<stdio.h>
#include<stdlib.h>
#include"test.h"

int count_one_bits(unsigned int value)
{
	int count = 0;
	while (value)
	{
		value &= (value - 1);
		count++;
	}
	return count;
}
int count_one_bits_C(unsigned int value)
{
	int i = 0;
	int count = 0;
	for (; i < 32; i++)
	{
		if ((value >> i&1))
			count++;
	}
	return count;
}
int count_one_bits_c(unsigned int value)
{
	int count = 0;
	while (value)
	{
		if (value % 2 == 1)//相当于右移一位判定是否为1
		{
			count++;
		}
		value /= 2;//相当于右移一位
	}
	return count;
}

void print__bits_odd_even(unsigned int value)
{
	int i = 0;
	printf("偶数位：");
	for (i = 31; i >=0; i -= 2)
	{
		printf("%d", value >> i & 1);
		if (0 == (i + 7) % 8)
			printf(" ");
	}
	printf("\n");
	printf("奇数位：");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d", value >> i & 1);
		if (0 == (i + 8) % 8)
			printf(" ");
	}
	printf("\n");
}
void print_integer_every_R(unsigned int value)
{
	if (value > 0)
	{
		print_integer_every_R(value / 10);
		printf("%d ", value % 10);
	}
}
void print_integer_every(unsigned int value)
{
	int count = 0;
	int sum = value;
	while (sum)
	{
		sum /= 10;
		count++;
	}
	while (count--)
	{
		sum = value;
		for (int k = count; k > 0; k--)
		{
			sum /= 10;
		}
		printf("%d ", sum % 10);
	}
	printf("\n");
}
int different_bytes_1(int m, int n)
{
	int i = 0;
	int count = 0;
	for (i=0; i<32; i++)
	{
		if ((m>>i&1)!=(n>>i&1))
		{
			count++;
		}
	}
	return count;
}
int different_bytes_2(int m, int n)
{
	int q = m^n;//相同位置0，不同位置一
	return count_one_bits(q);
	//return count_one_bits_C(q)
	//return count_one_bits_c(q)
}

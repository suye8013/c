#include<stdio.h>
#include"test.h"
unsigned int reverse_bit(unsigned int value)
{
	int i = 0;
	int num = 0;
	int n = 0;
	for (i = 0; i < 32; i++)
	{
		n = (value >> i)&1;
		num = num | (n << (31 - i));
	}
	return num;
}
int average(int a, int b)
{
	return (a&b) + ((a^b) >> 1);
	//return (a + b) >> 1;
	//return a+(b-a)/2;
	//return a+((b-a)>>1);
}
int single_number(int *arr, size_t size)
{
	int i = 0;
	int num = arr[0];
	for (i = 0; i < size-1; i++)
	{
		num ^= arr[i+1];
	}
	return num;
}
void inverse(char* head)
{
	char* first = head;
	char* end = head;
	while (*first)
	{
		first = end;
		while (*end != ' '&&*end!='\0')
		{
			end++;
		}
		char * sub = end-1;
		while (first < sub)
		{
			char tmp = *first;
			*first = *sub;
			*sub = tmp;
			first++;
			sub--;
		}
		while (*end == ' '&&*end != '\0')
		{
			end++;
		}
	}

	first = head;
	end = end - 1;
	while (first < end)
	{
		char tmp = *first;
		*first = *end;
		*end = tmp;
		first++;
		end--;
	}
}

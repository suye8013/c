#include<stdio.h>
#include<assert.h>
#include"test.h"

void Find(int *arr, int size)
{
	int key1 = 0;
	int key2 = 0;
	int num = 0;
	int flag = 0;
	for (int i = 0; i < size; i++)
	{
		num ^= arr[i];
	}
	key1 = key2 = num;
	while (((num >> flag) & 1) != 1)
	{
		flag++;
	}
	for (int i = 0; i < size; i++)
	{
		if ((arr[i] >> flag) & 1)
		{
			key1 ^= arr[i];
		}
		else
		{
			key2 ^= arr[i];
		}
	}
	printf("%d %d\n", key1, key2);
}
int HeQiShui(int money)
{
	int count = money;
	while (money > 0)
	{
		if (money % 2 == 0)
		{
			count += money / 2;
		}
		else
		{
			count += (money + 1) / 2;
		}
		money /= 2;
	}
	return count;
}
char* My_strcpy(char *pdes, const char *psor)
{
	assert(pdes&&psor);
	char *p = pdes;
	while (*pdes++ = *psor++)
	{
		;
	}
	return p;
}
char* My_strcat(char *pdes, const char *psor)
{
	assert(pdes&&psor);
	char *ret = pdes;
	while (*pdes)
	{
		pdes++;
	}
	while (*pdes++ = *psor++)
	{
		;
	}
	*pdes-- = '\0';
	return ret;
}

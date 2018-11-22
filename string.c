#include<stdio.h>
#include<assert.h>
int My_strlen(const char *pdst)
{
	const char* cp = pdst;
	while (*cp++)
	{
		;
	}
	return (cp - pdst - 1);
	//int count = 0;
	//while (*pdst++)
	//{
	//	count++;
	//}
	//return count;
}
char *My_strcpy(char* pdst, const char* psrc)
{
	assert(pdst&&psrc);
	char* ret = pdst;
	while (*pdst++ = *psrc++)
	{
		;
	}
	return ret;
}
char *My_strcat(char* pdst, const char* psrc)
{
	assert(pdst&&psrc);
	char* ret = pdst;
	while (*pdst)
	{
		pdst++;
	}
	while (*pdst++ = *psrc++)
	{
		;
	}
	*pdst-- = '\0';
	return ret;
}
const char* My_strstr(const char* pdst, const char* psrc)
{
	if ((pdst==NULL)||(psrc==NULL)||(My_strlen(pdst)<My_strlen(psrc)))
	{
		return NULL;
	}
	const char *cur = pdst;
	const char *key = pdst;
	int len = My_strlen(psrc);
	while (My_strlen(cur) >= len)
	{
		cur = key;
		const char *sub = psrc;
		while (*cur++ == *sub++)
		{
			len--;
		}
		if (len == 0)
		{
			return key;
		}
		len = My_strlen(psrc);
		key++;
	}
	return NULL;
}
const char* My_strchr(const char* pdst, const char ret)
{
	if (pdst == NULL||My_strlen(pdst)==0)
	{
		return NULL;
	}
	while (*pdst)
	{
		if (*pdst == ret)
		{
			return pdst;
		}
		pdst++;
	}
	return NULL;
}
int My_strcmp(const char* pdst, const char* psrc)
{
	int ret = 0;
	while ((!(*(unsigned char *)pdst) - *(unsigned char *)psrc)&&*(pdst))
	{
		pdst++;
		psrc++;
	}
	if (ret < 0)
		return -1;
	else if (ret>0)
		return 1;
	else
		return 0;
	//assert(pdst&&psrc);
	//while ((*pdst++ == *psrc++)&&*pdst!='\0'&&*psrc!='\0')
	//{
	//	;
	//}
	//if (*pdst == '\0')
	//{
	//	if (*psrc == '\0')
	//	{
	//		return 0;
	//	}
	//	else
	//	{
	//		return -1;
	//	}
	//}
	//else if (*psrc == '\0')
	//{
	//	if (*pdst != '\0')
	//	{
	//		return 1;
	//	}
	//	else
	//	{
	//		return 0;
	//	}
	//}
	//else
	//{
	//	if (*pdst > *psrc)
	//	{
	//		return 1;
	//	}
	//	else
	//	{
	//		return -1;
	//	}
	//}
}
void *My_memcpy(void* pdst, const void* psrc,size_t size)
{
	assert(pdst&&psrc);
	char *dst = (char*)pdst;
	char *src = (char*)psrc;
	if (src > dst&&src <= dst + size)
	{
		return 0;
	}
	if (src == dst)
	{
		return src;
	}
	while (size--)
	{
		*dst++ = *src++;
	}
	return pdst;
}
void *My_memmove(void* pdst, const void* psrc,size_t size)
{
	assert(pdst&&psrc);
	char *dst = (char*)pdst;
	char *src = (char*)psrc;

	if (src > dst&&src <= dst + size)
	{
		while (*dst++=*src++,size--)
		{
			;
		}
		return pdst;
	}
	else if (src == dst)
	{
		return src;
	}
	else
	{
		dst += size;
		src += size;
		while (*dst-- = *src--, size--)
		{
			;
		}
		return dst;
	}
}

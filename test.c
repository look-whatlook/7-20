#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <assert.h>
#include <string.h>


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	if (*str1 < *str2);
//		return -1;//else() ����˳��������if()
//	/*return (*str1 - *str2);*/
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1,p2);//�ַ��������ַ���ַ
//	printf("ret = %d\n", ret);
//	return 0;
//}

//char* _cdecl my_strncpy(
//	char* dest,
//	const char* source,
//	size_t count)
//{
//	char* start = dest;
//	while (count && (*dest++ = *source++))
//		count;
//	if (count)
//		while (--count)
//			*dest++ = '\0';
//	return(start);
//}
//
//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main() 
//{
//	char arr1[]= "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		//if(*s1 == '\0;
//		//{
//		//return NULL;
//		//}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcdef";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else 
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//  ���==�ָ�����λ��
//  �޸ı��Ϊ\0 ����\0λ�ü�ָ�� �����Ӵ����ַ���ַ
//  �Ҳ��������� ���ؿ�ָ��  �ҷ������ַ���ַ
//
//int main()
//{
//	//	//192.168.31.121   .
//	//	//192 168 31 121 - strtok
//	//	//zpw@bitedu.tech   @.
//	//	//zpw bitedu tech
//	//	//char arr[] = "zpw@bitedu.tech";
//	//	//char*p = "@.";
//	char arr[] = "123@234.@234";
//	char* p = "@.";//��Ƿ�����
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret != strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	//	//char*ret = strtok(arr, p);
//	//	//printf("%s\n", ret);
//	//
//	//	//ret = strtok(NULL, p);
//	//	//printf("%s\n", ret);
//	//
//	//	//ret = strtok(NULL, p);
//	//	//printf("%s\n", ret);
//	return 0;
//}

//#include <errno.h>
//int main()
//{
//	//	//0 -     No error
//	//	//1 -     Operation not permitted
//	//	//2 -     No such file or directory
//	//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//	//��C���ԵĿ⺯����ִ�й����У������˴���
//	//�ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	char* str = strerror(errno);
//	printf("%s\n", str);
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[6] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//memcpy(arr2,arr1,sizeof(arr1));
//	//char* dest, const char*src;
//	//strcpy(arr2,arr1);
//	return 0;
//}
//
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memmove(arr3 + 2, arr3, 20);
//	memcpy(arr3 + 2, arr3, 20);
//}

//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//
//	return ret;
//}

//int main()
//{
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	my_memmove(arr3, arr3+2, 20);
//	return 0;
//}

//void* my_memmove(void* dest, const void*src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest<src || dest>(char*)src + count)
//	{
//		//ǰ->��
//	}
//	else
//	{
//		//��->ǰ
//	}
//	
//	return ret;
//}

int main()
{
	char arr[10] = "";
	memset(arr, '#', 10);
	printf("%s ", arr);
	return 0;
}
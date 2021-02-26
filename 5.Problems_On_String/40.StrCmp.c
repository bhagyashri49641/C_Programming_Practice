/*
Write a program which accepts 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).
Input : Bhagyashri
		Bhagyashri
Output : TRUE
*/
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrCmpX(char *dest, char *src)
	{
		if((src==NULL)||(dest==NULL))
		{
			return FALSE;
		}
		while((*src != '\0') && (*dest != '\0'))
		{
			if(*src == *dest)
			{
				src++;
				dest++;
			}
			else
			{
				break;
			}
		}

		if( (*src =='\0') && (*dest =='\0') )
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}

int main()
	{
		BOOL bret = TRUE;
		char arr[50] = {'\0'};
		char brr[30] = {'\0'};

		printf("Enter First String:\n");
		scanf("%[^'\n']s",arr);

		getchar();

		printf("Enter Second String:\n");
		scanf("%[^'\n']s",arr);

		bret = StrCmpX(brr,arr);

		if(bret == TRUE)
		{
			printf("Both strings are equal\n");
		}
		else
		{
			printf("Both strings are not equal\n");
		}
		return 0;
	}
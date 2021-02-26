/*
Write a program which accept string from user and check whether
it contains vowels in it or not.
Input : “marvellous”
Output : TRUE
Input : “Demo”
Output : TRUE
Input : “xyz”
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
	if(str==NULL)
	{
		printf("Invalid string\n");
		return -1;
	}
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
		{
			break;
		}
		str++;
	}
	if(*str=='\0')
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}

int main()
{
	char str[30];
	BOOL bret=FALSE;

	printf("Enter the string:\n");
	scanf("%[^'\n']s",str);

	bret=ChkVowel(str);
	if(bret==TRUE)
	{
		printf("String Contains Vowel\n");
	}
	else
	{
		printf("Does not contain vowel in it\n");
	
	}
	return 0;
}
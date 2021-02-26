/*
Write a program which accept string from user and copy capital
characters of that string into another string.
Input : Bhagyashri Bhalchandra Mane
Output : BBM

*/
#include<stdio.h>

void StrCpyCap(char *dest, char *src)
	{
		if((src==NULL)||(dest==NULL))
		{
			return;
		}

		while(*src != '\0')
		{
			if((*src >= 'A') && (*src<='Z'))
			{
			*dest= *src;
			 dest++;
			}
			src++;
		}
			*dest='\0';
	}


int main()
	{
		char arr[30] = {'\0'};
		char brr[30] = {'\0'}; //Empty string

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);

		StrCpyCap(brr,arr);
		printf("%s\n",brr);

		return 0;
	}
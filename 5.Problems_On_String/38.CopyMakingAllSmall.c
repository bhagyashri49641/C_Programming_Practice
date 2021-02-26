/*
Write a program which accept string from user and copy that
characters of that string into another string by converting all capital
characters into small case.
Input : BHAGYASHRI
Output : bhagyashri
*/

#include<stdio.h>

void StrCpySmall(char *dest, char *src)
{
		if((src==NULL)||(dest==NULL))
		{
			return;
		}

		while(*src != '\0')
		{
			
			if((*src >= 'A') && (*src<='Z'))
			{
				*dest= *src+32;
			}
			else
			{
				*dest= *src;
			}
			dest++;
			src++;
		}
			*dest='\0';
}

int main()
	{
		char arr[30] = {'\0'};
		char brr[30] ={'\0'};  // Empty string

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);
		
		StrCpySmall(brr,arr);
		printf("%s\n",brr);
	
		return 0;
	}
/*Write a program which accept string from user and copy that
characters of that string into another string by toggling the case.
Input : BhaGYaSHri
Output : bHAgyAshRI
*/
#include<stdio.h>

void StrCpyToggle(char *dest, char *src)
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
			else if((*src >= 'a') && (*src<='z'))
			{
				*dest= *src-32;
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
		
		StrCpyToggle(brr,arr);
		printf("%s\n",brr);
	
		return 0;
	}
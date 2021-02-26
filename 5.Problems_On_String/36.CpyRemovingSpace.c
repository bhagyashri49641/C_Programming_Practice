/*
Write a program which accept string from user and copy that
characters of that string into another string by removing all white
spaces.
Input :Bhagya shree mane
Output : Bhagyashreemane

*/
#include<stdio.h>

void StrCpyX(char *dest, char *src)
	{
		int length=0;
		int i=0,j=0;

		if((src==NULL)||(dest==NULL))
		{
			return;
		}

		
		while(src[i] != '\0')
		{
			if(src[i]==' ')
			{
				i++;
			}
			dest[j]=src[i];
			i++;
			j++;
		}
		dest[j]='\0';
		
	}

int main()
	{
		char arr[30] = {'\0'};
		char brr[30] ={'\0'};  // Empty string

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);
		
		StrCpyX(brr,arr);
		printf("%s\n",brr);
	
		return 0;
	}
/*Write a program which accept string from user and count number of
white spaces
Input : "MarvellouS"
Output : 0
Input : "Bhagyashri Mane"
Output : 1
Input : 
Output : 5

*/
#include<stdio.h>

int CountWhite(char *str)
	{
		int count=0;

		if(str==NULL)
		{
			return -1;
		}

		while(*str != '\0')
		{
			if(*str==' ')
			{
				count++;
			}
			str++;
		}
		return count;		
	}

int main()
	{
		char arr[20];
		int iRet = 0;

		printf("Enter string:\n");
		scanf("%[^'\n']s",arr);

		iRet = CountWhite(arr);
		printf("%d\n",iRet);
		return 0;
	}

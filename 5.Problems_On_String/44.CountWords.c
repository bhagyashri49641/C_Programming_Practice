/*

Write a program which accept string from user count number of
words from string
Input : Bhagyashri Bhalchandra Mane
Output : 3
Input : Hello Shree 
Output : 2

*/
#include<stdio.h>
#include<string.h>

int WordCount(char *str)
	{
		
		int iCnt = 0;

		//filter
		if(str == NULL)
		{
			return -1;
		}

		// Logic
		while(*str != '\0') // starting pasun string travel lkr end pryant
		{
			if(*str==' ')    // jar space ahe tr aat ja
			{
				while((*str==' ') && (*str!='\0')) // jopryant spaces yet rahtat ani string sampt nahi tovr travel kr
				{
					str++;
				}
			}
			else if((*str!=' ') && (*str!='\0')) //space pn nahi end pn nahi mnje word chalu ahe ...aat ja
			{
				iCnt++; //word count vadhv 

				while((*str!=' ') && (*str!='\0')) //jovr word chalu ahe tovr travel kr
				{
					str++;
				}
			}
		}
		return iCnt;
	}
int main()
	{
		int iRet=0;
		
		char arr[50] = {'\0'};

		printf("Enter the string:\n");
		scanf("%[^'\n']s",arr);

		iRet = WordCount(arr);
		printf("Word count is:%d\n",iRet);
		
		return 0;
	}
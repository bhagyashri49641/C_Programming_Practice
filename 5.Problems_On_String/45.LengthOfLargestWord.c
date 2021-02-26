/*
Write a program which accept string from user and return length of
largest word.
Input : "     Bhagyashri     Bhalchandra     Mane  "
Output : 11
*/
#include<stdio.h>

int MaxWordLength(char *str)
	{
		int iMax = 0;
		int iCnt=0;
		int WordLength=0;

		if(str == NULL)
		{
			return -1;
		}

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
				WordLength=0;
				while((*str!=' ') && (*str!='\0')) //jovr word chalu ahe tovr travel kr
					{
						WordLength++;
						str++;
					}
				if (WordLength>iMax)
					{
						iMax=WordLength;
					}
			}
		}
		
			return iMax;
	}

	int main()
	{
		int iRet=0;
		
		char arr[50] = {'\0'};

		printf("Enter the string:\n");
		scanf("%[^'\n']s",arr);

		iRet = MaxWordLength(arr);
		printf("Max Word Length is:%d\n",iRet);
		
		return 0;
	}

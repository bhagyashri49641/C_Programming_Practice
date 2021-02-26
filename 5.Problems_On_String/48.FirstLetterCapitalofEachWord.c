/*
Write a program which accept string from user and replace each
occurrence of first character of each word into capital case.
Input : bhagyshri bhalchandra mane
Output : Bhagyshri Bhalchandra Mane
*/
#include<stdio.h>

void StrCap(char *str)
	{
		int iCnt=0;
		int WordLength=0;

		if(str == NULL)
		{
			return;
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
				if((*str>='a')&&(*str<='z') )//pahila word small ahe ka check kel
				{
					*str=*str-32; //small asel tr capital kel
				} 
				
				while((*str!=' ') && (*str!='\0')) //jovr word chalu ahe tovr travel kr
					{
						str++; //word travel suru thevl
					}
			}
		}
	}

int main()
	{	
		char arr[100] = {'\0'};

		printf("Enter the string:\n");
		scanf("%[^'\n']s",arr);

		StrCap(arr);
		printf("%s\n",arr);
		return 0;
}
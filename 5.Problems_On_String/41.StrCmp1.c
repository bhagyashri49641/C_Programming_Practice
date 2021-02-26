/*
Write a program which accepts 2 strings from user and check whether first
N contents of two strings are equal or not. (Implement strcmp()
function).
Input : “Marvellous Infosystems”
		“Marvellous Logic Building”
			10
Output :TRUE

*/
#include<stdio.h>
#include<string.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL StrNCmpX(char *dest, char *src ,int iCnt)
	{
		int i=0;

		//Filter
		if((src==NULL)||(dest==NULL))
		{
			return -1;
		}
		if(iCnt>strlen(src))
		{
			
			return -1;
		}

		//Logic
		while((*src != '\0')&&(*dest !='\0')&&(iCnt != 0))
		{
			if(*src != *dest)
			{
				break;
			}
			src++;
			dest++;
			iCnt--;
		}
		
		if(iCnt==0)
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
		BOOL bret = FALSE;
		char arr[50] = {'\0'};
		char brr[30] = {'\0'};
		int Num=0;

		printf("Enter First String:\n");
		scanf("%[^'\n']s",arr);

		getchar();

		printf("Enter Second String:\n");
		scanf("%[^'\n']s",brr);

		printf("Enter number of characters to be compared:\n");
		scanf("%d",&Num);

		bret = StrNCmpX(brr,arr,Num);

		if(bret == TRUE)
		{
			printf("Both strings are equal\n");
		}
		else if(bret==FALSE)
		{
			printf("Both strings are not equal\n");
		}
		else
		{
			printf("Invalid Input\n");
		}
		return 0;
}
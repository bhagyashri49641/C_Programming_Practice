/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)
Input : Bhagyashri
		5
Output :Bhagy

Input : Bhagyashri
		15
Output : Bhagyashri

Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/
#include<stdio.h>
#include<string.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
	if((src==NULL)||(dest==NULL))
	{
		return;
	}

	if(iCnt>=strlen(src))
	{
		strcpy(dest,src);
	}

	while((*src != '\0') && (iCnt != 0) )
	{
		*dest =*src;
		dest++;
		src++;
		iCnt--;
	}
	*dest='\0';
}
int main()
	{
		char arr[30] ={'\0'};
		char brr[30]={'\0'};
		int Num=0;

		printf("Enter one string:\n");
		scanf("%[^'\n']s",arr);

		printf("Enter number of characters you want to copy into another string:\n");
		scanf("%d",&Num);

		
		StrNCpyX(arr,brr,Num);
		printf("%s\n",brr);
		return 0;
}

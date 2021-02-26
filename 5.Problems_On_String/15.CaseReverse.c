//Case reverse

#include<stdio.h>
void CaseReverse(char cValue)
{
	if((cValue>='A')&&(cValue<='Z'))
	{
		cValue=cValue+32;
	}
	else if((cValue>='a')&&(cValue<='z'))
	{
		cValue=cValue-32;
	}

	printf("%c",cValue);
}
int main()
{
	char ch='\0';

	printf("Enter a character\n");
	scanf("%c",&ch);
	CaseReverse(ch);
}
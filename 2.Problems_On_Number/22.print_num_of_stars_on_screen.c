// accept number from user and print that number of stars on screen
#include<stdio.h>
void Accept(int iNo)
{
	int i = 0;
	for(i=1;i<=iNo;i++) //while(iNo!=0)_______iNo--
	{
		printf("*\n");
	}
}
int main()
{
	int iValue = 0;
	printf("Enter number:");
	scanf("%d",&iValue);
	Accept(iValue);
	return 0;
}

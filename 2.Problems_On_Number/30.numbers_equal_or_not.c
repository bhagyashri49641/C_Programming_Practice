// Write a program which accept two numbers and check whether numbers are
//equal or not.
//input      output
// 10 10		Equal
// 10 -10       Not equal
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

int ChkEqual(int iNo1,int iNo2)
{
	if(iNo1==iNo2)
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
	int iValue1=0,iValue2=0;
	BOOL bret=FALSE;
	
	printf("Enter  first number :\n");
	scanf("%d",&iValue1);
	
	printf("Enter  Second number :\n");
	scanf("%d",&iValue2);
	
	bret=ChkEqual(iValue1,iValue2);
	if(bret==TRUE)
	{
		printf("Entered numbers are equal");	
	}
	else
	{
		printf("Entered numbers are not euqal ");
	}
	
	return 0;
}

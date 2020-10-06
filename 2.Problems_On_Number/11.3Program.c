#include<stdio.h>

int SumRange(int iNo1,int iNo2)
{
	int i=0;
	int iSum=0;
	if((iNo1>iNo2)||(iNo1<0)||(iNo2<0))
	{
		printf("Invalid Range\n");
		return -1;
	}

	for (i=iNo1;i<=iNo2;i++)
	{
		iSum=iSum+i;
	}
	return iSum;
}
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;

	printf("Enter first number :");
	scanf("%d",&iValue1);

	printf("Enter second number :");
	scanf("%d",&iValue2);
	iRet=SumRange(iValue1,iValue2);
	if(iRet==-1)
	{
		printf("No sum calculated:");
	}
	else
	{
		printf("Summation is:%d ",iRet);
	}
	


	return 0;
}
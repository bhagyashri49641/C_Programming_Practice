// Write a program which accept number from user and display all its non factors.
// its factors
//input      output
// 12			5+7+8+9+10+11 =50

#include<stdio.h>

int Printing(int iNo)
{
	int i=0;
	int iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<=iNo;i++)
	{
		if(iNo%i!=0)
		{
			printf("\t%d\t+",i);
			iSum=iSum+i;
		}
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iret=0;
	
	printf("Enter  number :\n");
	scanf("%d",&iValue);
	
	iret=Printing(iValue);
	printf("Addition of non factors is:%d",iret);
	return 0;
}

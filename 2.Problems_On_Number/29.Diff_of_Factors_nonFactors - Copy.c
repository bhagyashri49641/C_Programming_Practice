// Write a program which accept number from user and return difference between
//summation of all its factors and non factors.
//input      output
// 12			-34		16-50
//  10          -29     8-37
#include<stdio.h>

int Printing(int iNo)
{
	int i=0;
	int iNonFactSum=0;
	int iFactSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
			iFactSum=iFactSum+i;
		}
		else
		{
			printf("\tnonfact\t%d\t",i);
			iNonFactSum=iNonFactSum+i;
		}
		printf("\n");
	}
	
	printf("FactSum\t%d\n",iFactSum);
	printf("\tNonFactSum\t%d\n",iNonFactSum);

	return iFactSum-iNonFactSum;
}
int main()
{
	int iValue=0;
	int iret=0;
	
	printf("Enter  number :\n");
	scanf("%d",&iValue);
	
	iret=Printing(iValue);
	printf("difference of factors-nonfactors is:%d",iret);
	return 0;
}

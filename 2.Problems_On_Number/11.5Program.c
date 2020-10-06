#include<stdio.h>

void DisplayRange(int iNo1,int iNo2)
{
	int i=0;
	if(iNo1>iNo2)
	{
		printf("Invalid RAnge");
		return;
	}

	for (i=iNo2;i>=iNo1;i--)
	{
			printf("%d\t",i);	
	}
}
int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter first number :");
	scanf("%d",&iValue1);

	printf("Enter second number :");
	scanf("%d",&iValue2);

	DisplayRange(iValue1,iValue2);

	return 0;
}
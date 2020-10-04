// accept two numbers from user and display first number second number of times
#include<stdio.h>
void Printing(int iNo1,int iNo2)
{
	int i=0;
	for(i=0;i<iNo2;i++)
	{
		printf("%d\t",iNo1);
	}
}
int main()
{
	int iValue1=0,iValue2;
	printf("Enter first number :\n");
	scanf("%d",&iValue1);
	printf("Enter second number :\n");
	scanf("%d",&iValue2);
	Printing(iValue1,iValue2);
	return 0;
}

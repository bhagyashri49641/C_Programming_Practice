// Write a program which accept number from user and display all its non factors.
// its factors
//input      output
// 12			5 7 8 9 10 11 

#include<stdio.h>

void Printing(int iNo)
{
	int i=0;
	for(i=1;i<=iNo;i++)
	{
		if(iNo%i!=0)
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
	int iValue=0;
	printf("Enter  number :\n");
	scanf("%d",&iValue);
	Printing(iValue);
	return 0;
}

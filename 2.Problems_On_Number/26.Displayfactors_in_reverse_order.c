// accept one number from user and display multiplication of all 
// its factors
//input      output
// 12			6 4 3 2 1 
// 13			1
// 10			5 2 1
#include<stdio.h>

void Printing(int iNo)
{
	int i=0;
	int imult=1;
	for(i=(iNo/2);i>=1;i--)
	{
		if(iNo%i==0)
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

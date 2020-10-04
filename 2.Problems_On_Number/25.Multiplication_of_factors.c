// accept one number from user and display multiplication of all 
// its factors
//input      output
// 12			144  1*2*3*4*6
// 13			1
// 10			10   1*2 *5
#include<stdio.h>

int Printing(int iNo)
{
	int i=0;
	int imult=1;
	for(i=1;i<=(iNo/2);i++)
	{
		if(iNo%i==0)
		{
			imult=imult*i;
		}
	}
	return imult;
}
int main()
{
	int iValue=0;
	int iret=0;
	printf("Enter  number :\n");
	scanf("%d",&iValue);
	iret=Printing(iValue);
	printf("Multiplication of all factors of %d are %d",iValue,iret);
	return 0;
}

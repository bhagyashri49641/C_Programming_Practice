//accept one number from user and print even factors of that numbers
//input :24
//output :2 4 6 8 12
#include<stdio.h>  // inclusion of header file

////////////////////////////////////////////////////////
// function name: DisplayEvenFactor
//	input :		  integer
//	output:       printing on screen
//	author:		  shree
//	date:		  28 july 2020
///////////////////////////////////////////////////////
void DisplayEvenFactor(int iNo)
{
	int i = 0;
	if(iNo <= 0)
		{
			iNo = -iNo;
		}
		
	for(i = 1; i<=(iNo/2);i++)  // complexity is n/2
	{

		if(iNo%i==0)
		{
			if(i%2==0)
				{
				printf("%d\t",i);
				}
		}
	}
			
}

///////////// Entry point function ///////////////////////
int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	DisplayEvenFactor(iValue);
	return 0;
}

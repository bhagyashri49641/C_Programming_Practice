//accept one numbner from user and print that number of number of even numbers on screen
#include<stdio.h>

void PrintEven(int iNo)
{
	int iCnt=1; 
	int i=1;
	if(iNo <= 0) // filter
	{
		return;
	}

	while(iCnt<=iNo)
	{
		if(i%2==0) 
			{
				printf("%d\t",i);
				iCnt++;
			}
			i++;
	}
}


int main()
{
	int iValue = 0;
	printf("Enter number\n");
	scanf("%d",&iValue);
	PrintEven(iValue);
	return 0;
}

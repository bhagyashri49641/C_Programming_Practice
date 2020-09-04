/*
Accept N numbers from user and display summation of digits of each
number.
*/
#include<stdio.h>
#include<stdlib.h>


void DigitsSum(int Arr[], int iLength)
{
	int i=0;
	int iNo=0;
	int iSum=0;
	int iDigit=0;

	if((Arr==NULL)||(iLength<0))
	{
		printf("Error in inputs:\n");
		return ;
	}

	for(i=0;i<iLength;i++)  
	{
		iNo=Arr[i];

		while(iNo!=0)
		{
			iDigit=iNo%10;
			iSum=iSum+iDigit;
			iNo=iNo/10;
		}
		printf("Summation of elemnt %d is %d\n:",Arr[i],iSum );
		iSum=0;
		
	}
}
int main()
{
	int iSize = 0,iCnt = 0;
	int *p = NULL;

	printf("Enter number of elements");
	scanf("%d",&iSize);

	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter %d elements ",iSize);

	for(iCnt = 0;iCnt<iSize; iCnt++)
	{
		printf("Enter element :%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	DigitsSum(p, iSize);

	free(p);

	return 0;
}

// problem statement: Wap which accept array from user and return difference of even num sum and odd num sum
#include<stdio.h>
#include<malloc.h>
int Esum_Osum(int ptr[],int iSize)
{
	register int iCnt=0;
	int Esum=0;
	int Osum=0;
	int Diff =0;

	if((ptr == NULL) || (iSize < 0))
	{
		return 0;
	}

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	
		if((ptr[iCnt] % 2) == 0)	
		{
			Esum=Esum+ptr[iCnt];
		}
		if((ptr[iCnt] % 2) != 0) 
		{
			Osum = Osum + ptr[iCnt];
		}
	}
	Diff= Esum-Osum;

	return Diff;
}
int main()
{
	int iCnt=0;
	int iValue=0;
	int *ptr=NULL;
	int iRet =0;

	printf("Enter number of elements:");
	scanf("%d",&iValue);

	ptr=(int *)malloc(sizeof(int)*iValue); //allocate memory for array

	printf("Enter array elements:\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	printf("your array elements are:");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		printf("%d\t",ptr[iCnt]);
	}

	iRet=Esum_Osum(ptr,iValue);
	printf("Difference is:%d",iRet);

	free(ptr);
	return 0;
}
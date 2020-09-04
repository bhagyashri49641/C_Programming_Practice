/*
Accept N numbers from user and display all such numbers which contains
3 digits in it.
*/
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
	int i=0;
	int iNo=0;
	int iCount=0;
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
			iCount++;
			iNo=iNo/10;
		}
		//printf("%d\n",iCount);
		if(iCount==3)
		{
			printf("%d\n",Arr[i]);
		}
		iCount=0;
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
	
	Digits(p, iSize);

	free(p);

	return 0;
}
/*Accept N numbers from user and return frequency of 11 form it.*/

#include<stdio.h>
#include<stdlib.h>


int Check(int Arr[], int iLength)
{
	int i=0;
	int iFreq=0;

	if((Arr==NULL)||(iLength<0))
	{
		printf("Error in inputs:\n");
		return -1;
	}

	for(i=0;i<iLength;i++)  
	{		
		printf("inside loop\n");				
		if((Arr[i])==11)
		{
			printf("inside if\n");
			iFreq++;
		}
	}
	// we can travel in bidirectional way.
	/*
	for(iStart=0,iEnd=iLength-1;istart<=iEnd;iStart++,iEnd--)
	*/
	return iFreq;

}

int main()
{
	int iSize = 0,iCnt = 0;
	int *p = NULL;
	int iRet = 0;

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
	
	iRet = Check(p, iSize);

	printf("frequencyof 11 in the given array is:%d",iRet);

	free(p);

	return 0;
}
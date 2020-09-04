/*Accept N numbers from user check whether that numbers contains 11 in
it or not.


*/
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength)
{
	int i=0;

	if((Arr==NULL)||(iLength<0))
	{
		printf("Error in inputs:\n");
		return -1;
	}

	for(i=0;i<iLength;i++)  
	{						
		if(Arr[i]==11)
		{
			break;
		}
	}
	// we can travel in bidirectional way.
	/*
	for(iStart=0,iEnd=iLength-1;istart<=iEnd;iStart++,iEnd--)
	*/
	if(Arr[i]==11)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}

int main()
{
	int iSize = 0,iRet = 0,iCnt = 0;
	int *p = NULL;
	BOOL bRet = FALSE;

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

	bRet = Check(p, iSize);

	if(bRet == TRUE)
	{
		printf("11 is present");
	}
	else
	{
		printf("11 is absent");
	}

	free(p);
	return 0;
}
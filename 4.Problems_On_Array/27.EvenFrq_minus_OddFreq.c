/*Accept N numbers from user and return difference between frequency of
even number and odd numbers.


*/
#include<stdio.h>
#include<stdlib.h>
int Freq(int Arr[],int iLength)
{
	int iSub=0;
	int i=0;
	int iEven=0;
	int iOdd=0;
	
	if((Arr==NULL)||(iLength<0))
	{
		printf("Error in inputs:\n");
		return -1;
	}

	for(i=0;i<iLength;i++)
	{
		printf("in loop \n");

		if(Arr[i]%2==0)
		{
			iEven++;
		}
		else
		{
			iOdd++;
		}
	}

	iSub=iEven-iOdd;


	return iSub;

}

int main()
{
	int iSize=0;
	int iCnt=0;
	int *ptr =NULL;
	int iRet=0;

	printf("Enter size of array:\n");
	scanf("%d",&iSize);

	ptr=(int *) malloc(sizeof(int)* iSize);

	if(ptr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}

	printf("Enter array elements:\n");

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=Freq(ptr,iSize);
	printf("Difference between frq of even count and odd count is:%d\n",iRet);

	//free the memory
	free(ptr);

	return 0;
}
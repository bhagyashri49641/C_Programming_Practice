/*Accept N numbers from user and display all such elements which are
multiples of 11.*/
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
	int i=0;

	if((Arr==NULL)||(iLength<0))
	{
		return;
	}
	printf("Elements which are multiples of 11 are:\n");
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%11==0)
		{
			printf("%d\t",Arr[i]);
		}
	}
}
int main()
{
	int iSize=0;
	int iCnt=0;
	int *ptr =NULL;

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

	Display(ptr,iSize);
	free(ptr);

	return 0;
}

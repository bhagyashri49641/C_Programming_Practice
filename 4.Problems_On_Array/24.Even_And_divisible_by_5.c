/*
Accept N numbers from user and display all such elements which are
even and divisible by 5.

N :6
Elements : 85 66 3 80 93 88
Output :80

*/

#include<stdio.h>
#include<stdlib.h>


void Display(int Arr[], int iSize)
{
	int iCnt=0;
	if((Arr==NULL)||(iSize<0))
	{
		return;
	}

	printf("loop chya baher\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{

			if(Arr[iCnt]%5==0)
			{

				printf("%d\n",Arr[iCnt]);
			}
		}
	}
	return;
}


int main()
{
	int iLength = 0;
	int iRet = 0;
	int iCnt = 0;
	int *p = NULL;


	printf("Enter number of elements");
	scanf("%d",&iLength);

	//dynamically allocate memory
	p = (int*)malloc(iLength*sizeof(int));
	
	if(p == NULL)
		{
			printf("unavle to allocate memory:");
			return -1;
		}
	
	printf("Enter %d elements \n",iLength);
	
	for(iCnt = 0;iCnt<iLength; iCnt++)
		{
			printf("Enter element : %d\t:",iCnt+1);
			scanf("%d",&p[iCnt]);
		}

	Display(p, iLength);
	free(p);
	return 0;
}

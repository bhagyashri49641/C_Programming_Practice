/*Accept N numbers from user and display all such elements which are
divisible by 5.
Input :
N :			6
Elements : 85 66 3 80 93 88
Output :   85 80

*/
#include<stdio.h>
#include<stdlib.h>
void Multiples(int *Arr,int iValue,int iNo)
{
	int i=0;
	if((Arr==NULL)||(iValue<0))
	{
		return ;
	}
	printf("Elements Divisible by %d are:\n",iNo);
	for(i=0;i<iValue;i++)
	{
		if(((*Arr) % iNo) == 0)
		{
			printf("%d\t",*Arr);
		}
		Arr++;
	}
}

int main()
{
	int iSize=0;
	int *ptr=NULL;
	int iCnt=0;
	int Multiple=0;
	//take size of array
	printf("Enter size of array:\n");
	scanf("%d",&iSize);

	// allocate memory for array
	ptr=(int*) malloc(sizeof(int)*iSize);
	
	if(ptr == NULL)
	{
		printf(“Unable to allocate memory”);
		return -1;
	}

	//take array elements
	printf("Enter array Elements:\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
		{
			scanf("%d",&ptr[iCnt]);
		}

	printf("Enter number for which you have to find multiples:\n");
	scanf("%d",&Multiple);

	Multiples(ptr,iSize,Multiple);

	free(ptr);
	return 0;
}

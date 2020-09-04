/*Accept N numbers from user and accept Range, Display all elements from
that range
input:
N:6
Elements: 12 15 20 25 46 50
start:20
End: 50
output: 20 25 46 50
*/
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
	int i=0;

	if((Arr==NULL)||(iLength<0))
	{
		printf("Error in inputs:\n");
		return ;
	}

	for(i=0;i<iLength;i++)  
	{
		if((Arr[i]>=iStart)&&(Arr[i]<=iEnd))
		{
			printf("%d\t",Arr[i]);
		}
	}
}
int main()
{
	int iSize = 0,iCnt = 0;
	int *p = NULL;
	int iValue1=0;
	int iValue2=0;

	printf("Enter number of elements");
	scanf("%d",&iSize);

	printf("Enter the starting point");
	scanf("%d",&iValue1);

	printf("Enter the ending point");
	scanf("%d",&iValue2);

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
	
	Range(p, iSize,iValue1,iValue2);

	free(p);

	return 0;
}

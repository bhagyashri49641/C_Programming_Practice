#include<stdio.h>
#include<stdlib.h>
int main()
{
	int iCnt=0; 
	int iValue=0;
	int *ptr = NULL;
	printf("Enter number of elements of array:\n");
	scanf("%d",&iValue);

	ptr = (int *)malloc(sizeof(int) * iValue);

	printf("Enter array elements\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",ptr+iCnt);
	}
	printf("Your array is\n");
	
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		printf("%d\t",*(ptr+iCnt));
	}
	free(ptr);
}
#include<stdio.h>
#include<malloc.h>

void Display(int* , int , int);

int main()
{
	int i , iSize = 0;
	int *ptr = NULL;
	int iValue = 0;

	printf("Enter Number of Elements:\n");
	scanf("%d",&iSize);

	ptr = (int*)malloc(iSize * sizeof(int));
	
	printf("Enter data:\n");
	for(i = 0 ; i < iSize ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	printf("Enter Number:");
	scanf("%d",&iValue);

	Display(ptr , iSize , iValue);

	return 0;
}

void Display(int *Arr , int size , int No)
{
	if((Arr == NULL) || (size < 0))
	{
		return;
	}

	register int i = 0;

	printf("Factors are:\n");
	for(i = 0 ; i < size ; i++)
	{
		if((No % Arr[i]) == 0)
		{
			printf("%d\t",Arr[i]);
		}
	}
}


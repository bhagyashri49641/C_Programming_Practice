//addition of all odd elements
#include<stdio.h>
#include<malloc.h>

int Display(int* , int); //function declaration or prototype

int Display(int *Arr , int size)
{
	register int i = 0;
	int Mult = 1;

	if((Arr == NULL) || (size < 0))
	{
		return 0;
	}

	for(i = 0 ; i < size ; i++)
	{
		if((Arr[i] % 2) != 0)
		{
			Mult = Mult * Arr[i];
		}
	}
		
	return Mult;
}
int main()
{
	int i , size , ret = 0;
	int *ptr = NULL;

	printf("Enter Number of Elements:\n");
	scanf("%d",&size);

	ptr = (int*)malloc(size * sizeof(int));
	
	printf("Enter data:\n");
	for(i = 0 ; i < size ; i++)
	{
		scanf("%d",&ptr[i]);
	}

	ret = Display(ptr , size);
	printf("Multiplication  is:%d\n",ret);

	free(ptr);

	return 0;
}



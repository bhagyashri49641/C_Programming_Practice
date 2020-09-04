//Accept n numbers from user and print addition of even numbers
#include<stdio.h>
#include<malloc.h>

int AddEven(int*,int);

int AddEven(int *ptr,int iSize)
{
	int iCnt=0,iSum=0;

	for(iCnt=0;iCnt<iSize;iCnt++)
	{
	//	printf("%d",*ptr);
		if((*ptr%2)==0)
		{
			iSum=iSum+*ptr;
		}
		ptr++;
	}
	return iSum;
}


int main()
{
	int iCnt=0,iRet=0,iLenth=0;
	int *Arr=NULL;

		printf("Enter No of Elements");
		scanf("%d",&iLenth);

		Arr=(int*)malloc(iLenth*sizeof(int));

		printf("Enter Elements");

		for(iCnt=0;iCnt<iLenth;iCnt++)
		{
			printf("\n Enter Number %d :",iCnt+1);
			scanf("%d",&Arr[iCnt]);
		}

		iRet=AddEven(Arr,iLenth);

		printf("Addition of Even no is %d",iRet);

		free(Arr);

		return 0;
}

/////////////////////////////////////////////////////////////////////////////////////
//
// Accept number of rows from user and print following pattern
//
//			*	
//			*	*		
//			*	*	*	 
//			*	*	*	*
//			*	*	*	*	*
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PatternDisplay(int iNum)
{
	int iRow,iCol;

	for(iRow=1;iRow<=iNum;iRow++)
	{
		for(iCol=1;iCol<=iRow;iCol++)
		{
			printf("*\t");
		}
		printf("\n\n");
	}
}

/////////////////////////////////////////////////////////////////////////////////////
//
//	19. Accept number of rows from user and print following pattern
//
//			*	*	*	*	*
//			*	*	*	*
//			*	*	*	
//			*	*	
//			*
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNum)
{
	int iRow,iCol;

	for(iRow=iNum;iRow>0;iRow--)
	{
		for(iCol=iRow;iCol>0;iCol--)
		{
			if(iRow >= iCol)
			{
				printf("*\t");
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n\n");
	}
}

void PatternX(int iNum)
{
	int i=0,j=0;

	for(i=1;i<=iNum;i++)
	{
		for(j=iNum;j>=1;j--)     			
		{   //diagonal  upper-triangle		15 14 13 12 11
			if((i==j)||(i<j))			//	25 24 23 22 21
			{							//	35 34 33 32 31
				printf("*\t");			//	45 44 43 42 41
			}							//	55 54 53 52 51
			else
			{
				printf(" ");
			}
			
		}
		printf("\n\n");
	}
}

int main()
{
	int iNum=0;

	printf("\n Enter number of rows you want to print => ");
	scanf("%d",&iNum);

	PatternDisplay(iNum);
	Pattern(iNum);
	PatternX(iNum);

	return 0;

}
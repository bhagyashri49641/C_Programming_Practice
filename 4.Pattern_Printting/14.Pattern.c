/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//
//			*	
//			*	*		
//			*	-	*	 
//			*	-	-	*
//			*	-	-	-	*
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
			if(iCol == 1 || iCol == iRow)
			{
				printf("*\t");
			}
			else
			{
				printf("-\t");
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

	return 0;

}
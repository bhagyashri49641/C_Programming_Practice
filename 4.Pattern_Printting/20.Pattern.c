/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//
//			1
//			0	0			
//			1	2	3
//			0	0	0	0
//			1	2	3	4	5
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
			if(iRow%2 != 0)
			{
				printf("%d\t",iCol);
			}
			else
			{
				printf("0\t");
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
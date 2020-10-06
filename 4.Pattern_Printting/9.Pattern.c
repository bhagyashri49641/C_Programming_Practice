/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//
//			a	a	a	a	a
//			a	a	a	a	a
//			a	a	a	a	a 
//			a	a	a	a	a 
//			a	a	a	a	a 
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PatternDisplay(int iNum)
{
	int iRow,iCol;

	for(iRow=1;iRow<=iNum;iRow++)
	{
		for(iCol=1;iCol<=iNum;iCol++)
		{
			printf("a\t");
		}
		printf("\n\n");
	}
}


int main()
{
	int iNum=0;

	printf("\n Enter number of rows => ");
	scanf("%d",&iNum);

	PatternDisplay(iNum);

	return 0;

}
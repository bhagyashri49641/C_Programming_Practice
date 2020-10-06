/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//
//			1	2	3	4
//			1	2	3	4
//			1	2	3	4 
//			1	2	3	4
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNum)
{
	int iRow,iCol;

	for(iRow=1;iRow<=iNum;iRow++)
	{
		for(iCol=1;iCol<=iNum;iCol++)
		{
			printf("%d\t",iCol);
		}
		printf("\n\n");
	}
}


int main()
{
	int iNum=0;

	printf("\n Enter number rows => ");
	scanf("%d",&iNum);

	Display(iNum);

	return 0;

}
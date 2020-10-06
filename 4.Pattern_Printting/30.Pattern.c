/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//		0
//		1	1
//		2	3	5
//		8	13	21	34
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void PatternDisplay(int iNum)
{
	int iRow,iCol;

	int iNo1=0;
	int iNo2=1;
	int iNo3=0;
	for(iRow=0;iRow<=iNum;iRow++)
	{
		for(iCol=0;iCol<=iRow;iCol++)
		{
			printf("%d\t",iNo3);
			iNo1=iNo2;
			iNo2=iNo3;
			iNo3=iNo1+iNo2;
		}
		printf("\n");
	}


}
int main()
{
	int iNum=0;

	printf("\n Enter number of rows you want to print: ");
	scanf("%d",&iNum);

	PatternDisplay(iNum);

	return 0;

}
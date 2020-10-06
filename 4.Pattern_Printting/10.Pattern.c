/////////////////////////////////////////////////////////////////////////////////////
//
//	Accept number of rows from user and print following pattern
//
//			a	b	c	d
//			a	b	c	d
//			a	b	c	d 
//			a	b	c	d
//
/////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNum)
{
	int iRow,iCol;
	char ch='a';

	for(iRow=0;iRow<iNum;iRow++)
	{
		ch='a';
		for(iCol=0;iCol<iNum;iCol++)
		{
			printf("%c\t",ch++);
		}
		
		printf("\n\n");
	}
}


int main()
{
	int iNum=0;

	printf("\n Enter number of rows => ");
	scanf("%d",&iNum);

	Display(iNum);

	return 0;

}
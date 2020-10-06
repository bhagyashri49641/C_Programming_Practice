//////////////////////////////////////////////
//		* # # #
//		* * # #
//		* * * #
//		* * * *
#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i==j)||(i>=j))
			{
				printf("*\t");
			}
			else
			{
				printf("#\t");
			}
		}
		printf("\n");
	}

}
int main()
{
	int Row=0,Col=0;
	printf("Enter number of rows:\n");
	scanf("%d",&Row);

	printf("Enter number of columns:\n");
	scanf("%d",&Col);
	Pattern(Row,Col);

	return 0;
}

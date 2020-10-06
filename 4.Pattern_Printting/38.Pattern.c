/////////////////////////////////
// 2 4 6 8 10
// 1 3 5 7 9
// 2 4 6 8 10 
// 1 3 5 7 9
/////////////////////////////////

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iEven=2,iOdd=1;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((i%2 )!= 0)
			{
				printf("%d\t",iEven);
				iEven=iEven+2;
			}
			else
			{
				printf("%d\t",iOdd);
				iOdd=iOdd+2;
			}
			
		}
		iEven=2;
		iOdd=1;
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